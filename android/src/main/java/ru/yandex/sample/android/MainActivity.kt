package ru.yandex.sample.android

import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import android.view.Menu
import android.view.MenuItem
import android.view.View
import android.widget.TextView
import com.yandex.mapkit.MapKitFactory
import com.yandex.mapkit.mapview.MapView
import io.reactivex.disposables.CompositeDisposable
import kotlinx.coroutines.rx2.asObservable
import ru.yandex.sample.multiplatform.MainScreenModel
import ru.yandex.sample.multiplatform.MainScreenModelFactory

class MainActivity : AppCompatActivity() {

    private lateinit var status: TextView
    private lateinit var map: MapView
    private lateinit var myLocationButton: View

    private lateinit var model: MainScreenModel
    private lateinit var disposables: CompositeDisposable

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        setContentView(R.layout.activity_main)

        status = findViewById(R.id.status)
        map = findViewById(R.id.map)
        myLocationButton = findViewById(R.id.my_location)
        model = MainScreenModelFactory.createMainScreenModel()
        disposables = CompositeDisposable()

        disposables.add(model.status.asObservable()
                .map { it.joinToString("\n") }
                .subscribe { status.text = it })

        myLocationButton.setOnTouchListener { _, _ ->
            model.onTapMyLocationButton()
            false
        }
    }

    override fun onDestroy() {
        super.onDestroy()
        disposables.clear()
    }

    override fun onStart() {
        super.onStart()
        MapKitFactory.getInstance().onStart()
        model.willAppear(map.map)
    }

    override fun onStop() {
        model.didDisappear()
        MapKitFactory.getInstance().onStop()
        super.onStop()
    }

}
