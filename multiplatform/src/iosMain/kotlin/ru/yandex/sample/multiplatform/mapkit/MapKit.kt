package ru.yandex.sample.multiplatform.mapkit

import platform.YandexMapKit.*

actual object MapKitFactory {
    actual fun instance(): MapKit? = YMKMapKit.sharedInstance()?.let { MapKitWrapper(it) }
}

actual interface MapKit {
    actual fun createLocationManager(): LocationManager
}

class MapKitWrapper(private val impl: YMKMapKit): MapKit {
    override fun createLocationManager(): LocationManager {
        return LocationManagerWrapper(impl.createLocationManager())
    }
}
