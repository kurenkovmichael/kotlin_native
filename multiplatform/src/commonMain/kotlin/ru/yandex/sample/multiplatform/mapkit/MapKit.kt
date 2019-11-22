package ru.yandex.sample.multiplatform.mapkit

expect object MapKitFactory {
    fun instance(): MapKit?
}

expect interface MapKit {
    fun createLocationManager(): LocationManager
}

expect interface MapKitMap {
    fun getCameraPosition(): CameraPosition
    fun move(cameraPosition: CameraPosition, animation: Animation, callback: CameraCallback?)
    fun addCameraListener(var1: CameraListener)
    fun removeCameraListener(var1: CameraListener)
}

expect interface LocationManager {
    fun requestSingleUpdate(listener: LocationListener)
    fun unsubscribe(listener: LocationListener)
    fun suspend()
    fun resume()
}

expect interface LocationListener {
    fun onLocationUpdated(location: Location): Unit
    fun onLocationStatusUpdated(status: LocationStatus)

}

expect enum class LocationStatus {
    NOT_AVAILABLE, AVAILABLE
}

expect interface CameraListener {
    fun onCameraPositionChanged(map: MapKitMap, cameraPosition: CameraPosition, updateSource: CameraUpdateSource, finished: Boolean): Unit
}

expect class CameraPosition {
    fun getTarget(): Point
    fun getZoom(): Float
    fun getAzimuth(): Float
    fun getTilt(): Float
    constructor(target: Point, zoom: Float, azimuth: Float, tilt: Float)
}

expect enum class CameraUpdateSource {
    GESTURES, APPLICATION
}

expect class Location {
    fun getPosition(): Point
}

expect class Point {
    fun getLatitude(): Double
    fun getLongitude(): Double
}

expect interface CameraCallback {
    fun onMoveFinished(var1: Boolean)
}

expect class Animation {
    constructor(type: AnimationType, duration: Float)
    fun getType(): AnimationType
    fun getDuration(): Float
}

expect enum class AnimationType { SMOOTH, LINEAR }

