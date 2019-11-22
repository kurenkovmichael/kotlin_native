enableFeaturePreview("GRADLE_METADATA")

rootProject.name = file("../../..").name

include(":KotlinNative")
project(":KotlinNative").projectDir = file("../Framework")

include(":multiplatform")
project(":multiplatform").projectDir = file("../../../multiplatform")
