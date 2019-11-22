package ru.yandex.sample.multiplatform.reactive

import kotlinx.coroutines.CancellationException
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.collect
import kotlinx.coroutines.launch

class Observable<T>(private val publisher: Publisher<T>) {

    interface Publisher<T> {
        fun subscribe(s: Subscriber<T>): Subscription
    }

    interface Subscriber<T> {
        fun onNext(t: T)
        fun onError(t: Throwable)
        fun onComplete()
    }

    class LambdaSubscriberImpl<T>(
            private val onNextLambda: (t: T) -> Unit,
            private val onErrorLambda: (t: Throwable) -> Unit,
            private val onCompleteLambda: () -> Unit
    ) : Subscriber<T> {
        override fun onNext(t: T) = onNextLambda(t)
        override fun onError(t: Throwable) = onErrorLambda(t)
        override fun onComplete() = onCompleteLambda()
    }

    fun subscribe(subscriber: Subscriber<T>): Subscription {
        return publisher.subscribe(subscriber)
    }
}

fun <T> Flow<T>.toObservable(): Observable<T> {
    return Observable(object : Observable.Publisher<T> {
        override fun subscribe(s: Observable.Subscriber<T>): Subscription {
            return GlobalScope.launch(Dispatchers.Unconfined) {
                try {
                    collect { s.onNext(it) }
                    s.onComplete()
                } catch (e: CancellationException) {
                    // Ignore
                } catch (t: Throwable) {
                    s.onError(t)
                }
            }.toSubscription()
        }
    })
}
