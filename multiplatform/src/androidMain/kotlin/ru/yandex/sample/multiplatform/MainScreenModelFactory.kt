package ru.yandex.sample.multiplatform

import kotlinx.coroutines.MainScope
import ru.yandex.sample.multiplatform.internal.MainScreenModelImpl

object MainScreenModelFactory {
    fun createMainScreenModel(): MainScreenModel = MainScreenModelImpl(MainScope())
}