package ru.yandex.sample.multiplatform.reactive

import kotlinx.coroutines.CancellationException
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch

class Single<T>(private val publisher: Publisher<T>) {

    interface Publisher<T> {
        fun subscribe(s: Subscriber<T>): Subscription
    }

    interface Subscriber<T> {
        fun onSuccess(t: T)
        fun onError(t: Throwable)
    }

    fun subscribe(subscriber: Subscriber<T>): Subscription {
        return publisher.subscribe(subscriber)
    }
}

fun <T> (suspend () -> T).toSingle(): Single<T> {
    return Single(object : Single.Publisher<T> {
        override fun subscribe(s: Single.Subscriber<T>): Subscription {
            return GlobalScope.launch(Dispatchers.Unconfined) {
                try {
                    s.onSuccess(invoke())
                } catch (e: CancellationException) {
                    // Ignore
                } catch (t: Throwable) {
                    s.onError(t)
                }
            }.toSubscription()
        }
    })
}
