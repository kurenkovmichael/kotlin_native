//
//  MultiplatformReactive+RxSwift.swift
//  DataSyncWrapperSample
//
//  Created by Vsevolod Ganin on 17/10/2019.
//  Copyright © 2019 Vsevolod Ganin. All rights reserved.
//

import Foundation
import KotlinNative
import RxCocoa
import RxSwift

public func toRxSwift<T>(_ observable: KotlinNative.Observable<ArrayWrapper<T>>) -> RxSwift.Observable<[T]> {
    return RxSwift.Observable<[T]>.create { subscriber in
        let subscriberAdapter = ObservableLambdaSubscriberImpl<ArrayWrapper<T>>(
            onNextLambda: {
                // TODO: Fix unwrap
                assert($0 != nil)
                if let elem = $0 { subscriber.onNext(elem.value) }
            },
            onErrorLambda: { kotlinThrowable in
                // TODO: Convert kotlin throwable to SwiftError
                subscriber.onError(NSError())
                
            },
            onCompleteLambda: { subscriber.onCompleted()}
        )
        let subscription = observable.subscribe(subscriber: subscriberAdapter)
        return Disposables.create {
            subscription.cancel()
        }
    }
}

public func toRxSwift<T>(_ observable: KotlinNative.Observable<T>) -> RxSwift.Observable<T> {
    return RxSwift.Observable<T>.create { subscriber in
        let subscriberAdapter = ObservableLambdaSubscriberImpl<T>(
            onNextLambda: {
                // TODO: Fix unwrap
                assert($0 != nil)
                if let elem = $0 { subscriber.onNext(elem) }
            },
            onErrorLambda: { kotlinThrowable in
                // TODO: Convert kotlin throwable to SwiftError
                subscriber.onError(NSError())
                
            },
            onCompleteLambda: { subscriber.onCompleted()}
        )
        let subscription = observable.subscribe(subscriber: subscriberAdapter)
        return Disposables.create {
            subscription.cancel()
        }
    }
}

public func toRxSwift(_ completable: KotlinNative.Completable) -> RxSwift.Completable {
    return RxSwift.Completable.create { subscriber in
        let subscriberAdapter = Completable.LambdaSubscriberImpl(
            onErrorLambda: { kotlinThrowable in
                // TODO: Convert kotlin throwable to SwiftError
                subscriber(.error(NSError()))
                
            },
            onCompleteLambda: { subscriber(.completed)}
        )
        let subscription = completable.subscribe(subscriber: subscriberAdapter)
        return Disposables.create {
            subscription.cancel()
        }
    }
}

public extension RxSwift.Completable {

    func complete(with bag: DisposeBag) {
        subscribe().disposed(by: bag)
    }

}
