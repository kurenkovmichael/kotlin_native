package ru.yandex.sample.multiplatform.reactive

import kotlinx.coroutines.Job

interface Subscription {
    fun cancel()
}

class CompositeSubscription {

    private val subscriptions = mutableListOf<Subscription>()

    fun add(subscription: Subscription) {
        subscriptions += subscription
    }

    fun clear() {
        subscriptions.forEach(Subscription::cancel)
        subscriptions.clear()
    }
}

fun Job.toSubscription(): Subscription {
    return object : Subscription {
        override fun cancel() = this@toSubscription.cancel()
    }
}
