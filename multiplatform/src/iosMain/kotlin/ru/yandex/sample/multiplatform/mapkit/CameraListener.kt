package ru.yandex.sample.multiplatform.mapkit

import platform.YandexMapKit.YMKMap
import platform.YandexMapKit.YMKCameraPosition
import platform.YandexMapKit.YMKCameraUpdateSource
import platform.YandexMapKit.YMKMapCameraListenerProtocol
import platform.darwin.NSObject

actual interface CameraListener {
    actual fun onCameraPositionChanged(map: Map, cameraPosition: CameraPosition, updateSource: CameraUpdateSource, finished: Boolean): Unit
}

class CameraListenerWrapper(val impl: CameraListener) : NSObject(), YMKMapCameraListenerProtocol {
    override fun onCameraPositionChangedWithMap(map: YMKMap, cameraPosition: YMKCameraPosition, cameraUpdateSource: YMKCameraUpdateSource, finished: Boolean) {
        impl.onCameraPositionChanged(MapWrapper(map), cameraPosition.toKotlin(), cameraUpdateSource.toKotlin(), finished)
    }
}


