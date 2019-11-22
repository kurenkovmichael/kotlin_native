package ru.yandex.sample.multiplatform.reactive

import kotlinx.coroutines.CancellationException
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch

class Completable(private val publisher: Publisher) {

    interface Publisher {
        fun subscribe(s: Subscriber): Subscription
    }

    interface Subscriber {
        fun onError(t: Throwable)
        fun onComplete()
    }

    class LambdaSubscriberImpl(
            private val onErrorLambda: (t: Throwable) -> Unit,
            private val onCompleteLambda: () -> Unit
    ) : Subscriber {
        override fun onError(t: Throwable) = onErrorLambda(t)
        override fun onComplete() = onCompleteLambda()
    }

    fun subscribe(subscriber: Subscriber): Subscription {
        return publisher.subscribe(subscriber)
    }
}

fun (suspend () -> Unit).toCompletable(): Completable {
    return Completable(object : Completable.Publisher {
        override fun subscribe(s: Completable.Subscriber): Subscription {
            return GlobalScope.launch(Dispatchers.Unconfined) {
                try {
                    invoke()
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
