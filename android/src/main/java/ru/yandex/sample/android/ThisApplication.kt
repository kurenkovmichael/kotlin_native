package ru.yandex.sample.android

import android.app.Application
import com.yandex.mapkit.MapKitFactory

class ThisApplication : Application() {

    override fun onCreate() {
        super.onCreate()

        /**
         * Replace "your_api_key" with a valid developer key.
         * You can get it at the https://developer.tech.yandex.ru/ website.
         */
        MapKitFactory.setApiKey("your_api_key")
        MapKitFactory.initialize(this)
    }

}
