package ru.yandex.sample.multiplatform.mapkit

import platform.YandexMapKit.YMKCameraPosition

actual class CameraPosition actual constructor(
        private val target: Point,
        private val zoom: Float,
        private val azimuth: Float,
        private val tilt: Float
) {
    actual fun getTarget(): Point = target
    actual fun getZoom(): Float = zoom
    actual fun getAzimuth(): Float = azimuth
    actual fun getTilt(): Float = tilt
}

fun YMKCameraPosition.toKotlin(): CameraPosition = CameraPosition(target.toKotlin(), zoom, azimuth, tilt)

fun CameraPosition.toNative(): YMKCameraPosition = YMKCameraPosition.cameraPositionWithTarget(getTarget().toNative(), getZoom(), getAzimuth(), getTilt())