package ru.yandex.sample.multiplatform.mapkit

import platform.YandexMapKit.YMKMap
import platform.YandexMapKit.YMKAnimationType
import platform.YandexMapKit.YMKAnimation
import platform.YandexMapKit.YMKMapCameraCallback

actual interface MapKitMap {
    actual fun getCameraPosition(): CameraPosition
    actual fun move(cameraPosition: CameraPosition, animation: Animation, callback: CameraCallback?)
    actual fun addCameraListener(var1: CameraListener)
    actual fun removeCameraListener(var1: CameraListener)
}

class MapWrapper(private val impl: YMKMap): MapKitMap {

    override fun getCameraPosition(): CameraPosition = impl.cameraPosition.toKotlin()

    override fun move(cameraPosition: CameraPosition, animation: Animation, callback: CameraCallback?) {
        impl.moveWithCameraPosition(cameraPosition.toNative(), animation.toNative(), {
            callback?.onMoveFinished(it)
        })
    }

    override fun addCameraListener(listener: CameraListener) {
        val wrapper = CameraListenerWrapper(listener)
        listeners.add(wrapper)
        impl.addCameraListenerWithCameraListener(wrapper)
    }

    override fun removeCameraListener(listener: CameraListener) {
        val wrappers = listeners.filter { it.impl == listener }
        listeners.removeAll(wrappers)
        for (wrapper in wrappers) {
            impl.removeCameraListenerWithCameraListener(wrapper)
        }
    }

    private val listeners = mutableSetOf<CameraListenerWrapper>()

}

actual interface CameraCallback {
    actual fun onMoveFinished(var1: Boolean)
}

actual enum class AnimationType {
    SMOOTH, LINEAR;
    fun toNative(): YMKAnimationType = when (this) {
        SMOOTH -> YMKAnimationType.YMKAnimationTypeSmooth
        LINEAR -> YMKAnimationType.YMKAnimationTypeLinear
    }
}

actual class Animation actual constructor(private val type: AnimationType, private val duration: Float) {
    actual fun getType(): AnimationType = type
    actual fun getDuration(): Float = duration
    fun toNative(): YMKAnimation = YMKAnimation.animationWithType(type.toNative(), duration)
}