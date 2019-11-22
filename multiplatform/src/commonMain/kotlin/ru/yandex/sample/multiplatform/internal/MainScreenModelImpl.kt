package ru.yandex.sample.multiplatform.internal

import kotlinx.coroutines.CoroutineScope
import ru.yandex.sample.multiplatform.MainScreenModel
import ru.yandex.sample.multiplatform.TiltButtonState
import kotlinx.coroutines.channels.BroadcastChannel
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.asFlow
import kotlinx.coroutines.launch
import ru.yandex.sample.multiplatform.mapkit.MapKitFactory
import ru.yandex.sample.multiplatform.mapkit.MapKitMap
import ru.yandex.sample.multiplatform.mapkit.LocationListener
import ru.yandex.sample.multiplatform.mapkit.CameraListener
import ru.yandex.sample.multiplatform.mapkit.Location
import ru.yandex.sample.multiplatform.mapkit.CameraPosition
import ru.yandex.sample.multiplatform.mapkit.Animation
import ru.yandex.sample.multiplatform.mapkit.AnimationType
import ru.yandex.sample.multiplatform.mapkit.LocationStatus
import ru.yandex.sample.multiplatform.mapkit.CameraUpdateSource
import kotlin.math.roundToInt

internal class MainScreenModelImpl(private val coroutineScope: CoroutineScope): MainScreenModel, LocationListener, CameraListener {

    private val statusChannel = BroadcastChannel<List<String>>(1)
    override var status: Flow<List<String>> = statusChannel.asFlow()

    override fun willAppear(map: MapKitMap) {
        this.map = map
        map.addCameraListener(this)
        locationManager?.resume()
    }

    override fun didDisappear() {
        locationManager?.suspend()
        map?.removeCameraListener(this)
        map = null
    }

    override fun onTapMyLocationButton() {
        locationManager?.requestSingleUpdate(this)
    }

    override fun onLocationUpdated(location: Location) {
        val map = this.map
        if (map == null) return

        val newPosition = CameraPosition(location.getPosition(), 5F, 0F,  map.getCameraPosition().getTilt())
        map.move(newPosition, Animation(AnimationType.SMOOTH, 0.3F), null)
    }

    override fun onLocationStatusUpdated(status: LocationStatus) { }

    override fun onCameraPositionChanged(map: MapKitMap, cameraPosition: CameraPosition, updateSource: CameraUpdateSource, finished: Boolean) {
        println ("onCameraPositionChanged")
        val status = listOf<String>(
                "Latitude: ${cameraPosition.getTarget().getLatitude()}",
                "Longitude: ${cameraPosition.getTarget().getLongitude()}",
                "Zoom: ${cameraPosition.getZoom()}"
            )
        val tiltButtonState = if (cameraPosition.getTilt() == 0F) TiltButtonState.FLAT else TiltButtonState.PERSPECTIVE
        coroutineScope.launch {
            println ("statusChannel.send")
            statusChannel.send(status)
        }
    }

    private var map: MapKitMap? = null
    private val locationManager = MapKitFactory.instance()?.createLocationManager()

}

fun Double.roundToThousandths(): Float = (this * 1000F).roundToInt() / 1000F
fun Float.roundToHundredths(): Float = (this * 100F).roundToInt() / 100F
