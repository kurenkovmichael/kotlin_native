package ru.yandex.sample.multiplatform

import kotlinx.coroutines.flow.Flow
import ru.yandex.sample.multiplatform.mapkit.MapKitMap

enum class TiltButtonState {
    FLAT, PERSPECTIVE
}

interface MainScreenModel {
    var status: Flow<List<String>>
    fun willAppear(map: MapKitMap)
    fun didDisappear()
    fun onTapMyLocationButton()
}
