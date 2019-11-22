package ru.yandex.sample.multiplatform.mapkit

import platform.YandexMapKit.YMKCameraUpdateSource

actual enum class CameraUpdateSource {
    GESTURES, APPLICATION
}

fun YMKCameraUpdateSource.toKotlin(): CameraUpdateSource = when (this) {
    YMKCameraUpdateSource.YMKCameraUpdateSourceGestures -> CameraUpdateSource.GESTURES
    YMKCameraUpdateSource.YMKCameraUpdateSourceApplication -> CameraUpdateSource.APPLICATION
}
