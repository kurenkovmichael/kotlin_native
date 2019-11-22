//
//  MainViewController.swift
//  iosApp
//
//  Created by Mikhail Kurenkov on 11/20/19.
//  Copyright © 2019 Mikhail Kurenkov. All rights reserved.
//

import UIKit
import YandexMapKit
import KotlinNative
import RxSwift
import RxCocoa

class MainViewController: UIViewController {
    
    // MARK: - Public Methods

    override func viewDidLoad() {
        super.viewDidLoad()
        
        mapView.translatesAutoresizingMaskIntoConstraints = false
        view.addSubview(mapView)
        mapView.topAnchor.constraint(equalTo: view.topAnchor).isActive = true
        mapView.bottomAnchor.constraint(equalTo: view.bottomAnchor).isActive = true
        mapView.leadingAnchor.constraint(equalTo: view.leadingAnchor).isActive = true
        mapView.trailingAnchor.constraint(equalTo: view.trailingAnchor).isActive = true
        
        statusLabel.translatesAutoresizingMaskIntoConstraints = false
        view.addSubview(statusLabel)
        statusLabel.topAnchor.constraint(equalTo: view.safeAreaLayoutGuide.topAnchor, constant: 24.0).isActive = true
        statusLabel.leadingAnchor.constraint(equalTo: view.safeAreaLayoutGuide.leadingAnchor).isActive = true
        statusLabel.trailingAnchor.constraint(equalTo: view.safeAreaLayoutGuide.trailingAnchor).isActive = true
        statusLabel.heightAnchor.constraint(equalToConstant: 120.0) .isActive = true
        statusLabel.backgroundColor = UIColor(white: 1.0, alpha: 0.7)
        statusLabel.contentMode = .center
        statusLabel.textAlignment = .center
        statusLabel.numberOfLines = 3
        
        myLocationButton.translatesAutoresizingMaskIntoConstraints = false
        view.addSubview(myLocationButton)
        myLocationButton.bottomAnchor.constraint(equalTo: view.safeAreaLayoutGuide.bottomAnchor, constant: -24.0).isActive = true
        myLocationButton.leadingAnchor.constraint(equalTo: view.safeAreaLayoutGuide.leadingAnchor).isActive = true
        myLocationButton.trailingAnchor.constraint(equalTo: view.safeAreaLayoutGuide.trailingAnchor).isActive = true
        myLocationButton.heightAnchor.constraint(equalToConstant: 64.0) .isActive = true
        myLocationButton.backgroundColor = UIColor(white: 1.0, alpha: 0.7)
        myLocationButton.setTitle("Go to my location", for: .normal)

        myLocationButton.rx.tap.bind { [weak self] in self?.model.onTapMyLocationButton() } .disposed(by: bag)

        model.status.toRxSwift()
            .bind { [weak self] status in self?.statusLabel.text = status.joined(separator: "\n") }
            .disposed(by: bag)
    }
    
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        model.willAppear(map: mapView.mapWindow.map)
    }
    
    override func viewDidDisappear(_ animated: Bool) {
        super.viewDidDisappear(animated)
        model.didDisappear()
    }
    
    // MARK: - Private properties
    
    private let bag = DisposeBag()
    private let mapView = YMKMapView()
    private let statusLabel = UILabel()
    private let myLocationButton = UIButton(type: .system)

    private let model = MainScreenModelIos()

}

public extension KotlinNative.Observable where T == ArrayWrapper<NSString> {
    func toRxSwift() -> RxSwift.Observable<[String]> {
        return iosApp.toRxSwift(self).map { $0.compactMap { $0 as String } }
    }
}

