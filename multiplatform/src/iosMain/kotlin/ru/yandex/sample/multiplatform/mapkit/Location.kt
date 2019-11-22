package ru.yandex.sample.multiplatform.mapkit

import platform.YandexMapKit.YMKLocation

actual class Location(private val position: Point) {
    actual fun getPosition(): Point = position
}

fun YMKLocation.toKotlin(): Location = Location(position.toKotlin())

