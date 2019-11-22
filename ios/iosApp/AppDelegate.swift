//
//  AppDelegate.swift
//  iosApp
//
//  Created by Mikhail Kurenkov on 11/14/19.
//  Copyright © 2019 Mikhail Kurenkov. All rights reserved.
//

import UIKit
import YandexMapKit

/**
 * Replace "your_api_key" with a valid developer key.
 * You can get it at the https://developer.tech.yandex.ru/ website.
 */
let MAPKIT_API_KEY = "your_api_key"

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {
    
    // MARK: - Public Properties

    lazy var window: UIWindow? = { return UIWindow(frame: UIScreen.main.bounds) }()

    
    // MARK: - Public Methods

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        
        YMKMapKit.setApiKey(MAPKIT_API_KEY)

        let rootViewController = MainViewController()
        window!.backgroundColor = .darkGray
        window!.rootViewController = rootViewController
        window!.makeKeyAndVisible()
        
        return true
    }
    
    func applicationDidBecomeActive(_ application: UIApplication) {
        YMKMapKit.sharedInstance().onStart()
    }
    
    func applicationDidEnterBackground(_ application: UIApplication) {
        YMKMapKit.sharedInstance().onStop()
    }
    
    func application(_ application: UIApplication, handleEventsForBackgroundURLSession identifier: String, completionHandler: @escaping () -> Void) {
         YMKMapKit.sharedInstance().setCompletionHandler(completionHandler, forBackgroundURLSession: identifier)
     }
     
}

