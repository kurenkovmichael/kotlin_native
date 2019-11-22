package ru.yandex.sample.multiplatform.mapkit

actual typealias CameraListener = com.yandex.mapkit.map.CameraListener
actual typealias LocationListener = com.yandex.mapkit.location.LocationListener

actual typealias MapKit = com.yandex.mapkit.MapKit
actual typealias MapKitMap = com.yandex.mapkit.map.Map
actual typealias CameraCallback = com.yandex.mapkit.map.Map.CameraCallback
actual typealias Animation = com.yandex.mapkit.Animation
actual typealias AnimationType = com.yandex.mapkit.Animation.Type

actual typealias LocationManager = com.yandex.mapkit.location.LocationManager

actual typealias CameraPosition = com.yandex.mapkit.map.CameraPosition
actual typealias CameraUpdateSource = com.yandex.mapkit.map.CameraUpdateSource
actual typealias LocationStatus = com.yandex.mapkit.location.LocationStatus
actual typealias Location = com.yandex.mapkit.location.Location
actual typealias Point = com.yandex.mapkit.geometry.Point


actual object MapKitFactory {
    actual fun instance(): MapKit? = com.yandex.mapkit.MapKitFactory.getInstance()
}
