Pod::Spec.new do |s|
  s.name = "UMInfoOpenAPI"
  s.version = "0.3.0"
  s.summary = "www.umeinfo.com"
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"andy90s"=>"909901234@qq.com"}
  s.homepage = "https://github.com/andy90s/UMInfoOpenAPI"
  s.description = "TODO: Add long description of the pod here."
  s.source = { :path => 'https://github.com/andy90s/UMInfoOpenAPI.git' }

  s.ios.deployment_target    = '8.0'
  s.ios.vendored_framework   = 'UMInfoOpenAPI.framework'
  s.dependency 'CocoaLumberjack', '~> 3.2.0'
  s.dependency 'MQTTClient', '~> 0.9.4'
  s.dependency 'Reachability', '~> 3.2'
  s.dependency 'RealReachability', '~> 1.1.8'
 
end
