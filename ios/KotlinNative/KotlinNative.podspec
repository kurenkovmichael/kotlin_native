Pod::Spec.new do |s|
  s.name             = 'KotlinNative'
  s.version          = '0.0.1'
  s.summary          = 'KotlinNative'
  s.homepage         = "local" #path to home page
  s.license          = { type: 'Proprietary', text: '2019 © Yandex. All rights reserved.' }
  s.authors          = { 'Mikhail Kurenkov' => 'spolispastom@yandex-team.ru' }
  s.source           = { :git => 'local', :tag => s.version.to_s }
  s.requires_arc     = true
  s.module_name      = 'KotlinNative'

  s.ios.deployment_target = '11.0'

  s.vendored_frameworks = 'Framework/KotlinNative.framework'

  s.script_phase = {
    :name => "Run Gradle",
    :script =>
    'set -x
    if [ -z "$KOTLIN_NATIVE_BUILD_CAPABLE" ]; then
        cd "${PROJECT_DIR}/../KotlinNative/GradleRoot"
        sh -c ". gradlew buildForXcode"
    fi',
    :execution_position => :before_compile
  }
end


