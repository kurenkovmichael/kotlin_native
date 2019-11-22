package ru.yandex.sample.multiplatform

import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.flow.map
import platform.YandexMapKit.YMKMap
import ru.yandex.sample.multiplatform.common.coroutine.MainDispatcher
import ru.yandex.sample.multiplatform.internal.MainScreenModelImpl
import ru.yandex.sample.multiplatform.mapkit.MapWrapper
import ru.yandex.sample.multiplatform.reactive.Observable
import ru.yandex.sample.multiplatform.reactive.toObservable

public class MainScreenModelIos {
    private val impl = MainScreenModelImpl(CoroutineScope(MainDispatcher))
    var status: Observable<ArrayWrapper<String>> = impl.status.map { ArrayWrapper<String>(it) }.toObservable()
    fun willAppear(map: YMKMap) = impl.willAppear(MapWrapper(map))
    fun didDisappear() = impl.didDisappear()
    fun onTapMyLocationButton() = impl.onTapMyLocationButton()
}