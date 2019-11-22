package ru.yandex.sample.multiplatform.mapkit

import platform.YandexMapKit.YMKLocation
import platform.YandexMapKit.YMKLocationDelegateProtocol
import platform.YandexMapKit.YMKLocationStatus
import platform.darwin.NSObject

actual interface LocationListener {
    actual fun onLocationUpdated(location: Location)
    actual fun onLocationStatusUpdated(status: LocationStatus)
}

class LocationListenerWrapper(val impl: LocationListener) : NSObject(), YMKLocationDelegateProtocol {

    override fun onLocationUpdatedWithLocation(location: YMKLocation) {
        impl.onLocationUpdated(location.toKotlin())
    }

    override fun onLocationStatusUpdatedWithStatus(status: YMKLocationStatus) {
        impl.onLocationStatusUpdated(status.toKotlin())
    }

}

actual enum class LocationStatus {
    NOT_AVAILABLE, AVAILABLE
}

fun YMKLocationStatus.toKotlin(): LocationStatus = when (this) {
    YMKLocationStatus.YMKLocationStatusAvailable -> LocationStatus.AVAILABLE
    YMKLocationStatus.YMKLocationStatusNotAvailable -> LocationStatus.NOT_AVAILABLE
}
