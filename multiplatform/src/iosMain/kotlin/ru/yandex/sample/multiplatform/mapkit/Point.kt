package ru.yandex.sample.multiplatform.mapkit

import platform.YandexMapKit.YMKPoint

actual class Point(private val lat: Double, private  val lon: Double) {
    actual fun getLatitude(): Double = lat
    actual fun getLongitude(): Double = lon
}

fun YMKPoint.toKotlin(): Point = Point(longitude, longitude)

fun Point.toNative(): YMKPoint = YMKPoint.pointWithLatitude(getLatitude(), getLongitude())
