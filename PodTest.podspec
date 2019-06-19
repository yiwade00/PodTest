#
# Be sure to run `pod lib lint PodTest.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'PodTest'
  s.version          = '0.1.3'
  s.summary          = 'PodTest'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
                   测试工程 PodTest
                       DESC

  s.homepage         = 'https://github.com/yiwade00/PodTest'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'yiwade00' => '18720967750@163.com' }
  s.source           = { :git => 'https://github.com/yiwade00/PodTest.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'PodTest/Classes/**/*'
  # s.public_header_files = 'PodTest/Classes/*.{h}'
  #s.requires_arc = true

  
  # s.resource_bundles = {
  #   'PodTest' => ['PodTest/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
  
  #s.subspec 'yiwade00_ZJCustomHUD' do |ss|
  # ss.source_files = 'PodTest/Classes/yiwade00_ZJCustomHUD/*'
  # ss.public_header_files = 'PodTest/Classes/yiwade00_ZJCustomHUD/*.h'
  
  
end
