package ru.yandex.sample.multiplatform.mapkit

import platform.YandexMapKit.YMKLocationManager

actual interface LocationManager {
    actual fun requestSingleUpdate(listener: LocationListener)
    actual fun unsubscribe(listener: LocationListener)
    actual fun suspend()
    actual fun resume()
}

class LocationManagerWrapper(private val impl: YMKLocationManager): LocationManager {

    override fun requestSingleUpdate(listener: LocationListener) {
        val wrapper = LocationListenerWrapper(listener)
        listeners.add(wrapper)
        impl.requestSingleUpdateWithLocationListener(wrapper)
    }

    override fun unsubscribe(listener: LocationListener) {
        val wrappers = listeners.filter { it.impl == listener }
        listeners.removeAll(wrappers)
        for (wrapper in wrappers) {
            impl.unsubscribeWithLocationListener(wrapper)
        }
    }

    override fun suspend() = impl.suspend()

    override fun resume() = impl.resume()

    private val listeners = mutableSetOf<LocationListenerWrapper>()
}
