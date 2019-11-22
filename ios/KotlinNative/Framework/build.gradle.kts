plugins {
    kotlin("multiplatform")
}

import org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTargetPreset
import org.jetbrains.kotlin.gradle.plugin.mpp.NativeBuildType
import org.jetbrains.kotlin.gradle.plugin.mpp.Framework
import org.jetbrains.kotlin.gradle.dsl.KotlinMultiplatformExtension

kotlin {
    targetFromPreset(presetFromXcode(), "KotlinNative") {
        binaries.framework {
            freeCompilerArgs.add("-Xstatic-framework")
            freeCompilerArgs.add("-g")
            freeCompilerArgs.add("-Xobjc-generics")

            export(project(":multiplatform"))

            setupTask(this, project.projectDir)
        }
    }

    sourceSets {
        commonMain{
            dependencies {
                api(project(":multiplatform"))
            }
        }
    }

}

fun KotlinMultiplatformExtension.presetFromXcode(): KotlinNativeTargetPreset {
    val sdkName = System.getenv("SDK_NAME") ?: "iosX64"
    val presetName = with(sdkName) {
        when {
            startsWith("iphonesimulator") -> "iosX64"
            startsWith("iphoneos") -> "iosArm64"
            startsWith("macos") -> "macosX64"
            else -> "iosX64"
        }
    }
    return presets.withType<KotlinNativeTargetPreset>()[presetName]
}

fun setupTask(binary: Framework, outputDirectory: File) {
    val buildType = NativeBuildType.valueOf(System.getenv("CONFIGURATION")?.toUpperCase() ?: "DEBUG")
    if (binary.buildType == buildType) {
        val dsymTask = project.task<Sync>("buildForXcodeDSYM") {
            dependsOn(binary.linkTask)
            val outputFile = binary.linkTask.outputFile.get()
            val outputDSYM = File(outputFile.parent, outputFile.name + ".dSYM")
            from(outputDSYM)
            into(File(outputDirectory, outputDSYM.name))
        }

        project.task<Sync>("buildForXcode") {
            dependsOn(dsymTask)
            val outputFile = binary.linkTask.outputFile.get()
            from(outputFile)
            into(File(outputDirectory, outputFile.name))
        }
    }
}
