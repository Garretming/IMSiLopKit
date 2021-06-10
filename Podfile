# SDK 最低支持版本为 iOS 9.0 
platform :ios, '9.0' 

# github 官方 pod 源
# source 'https://github.com/CocoaPods/Specs.git' 

def import_IMSiLop
    # 阿里云 pod 源
    source 'https://github.com/aliyun/aliyun-specs.git' 

    pod 'IMSLog'
    pod 'IMSIotSmart', '1.2.3'
    pod 'IMSApiClient', '1.6.7'
    pod 'IMSAuthentication', '1.4.2'
    pod  'AlicloudSecurityGuardSDK', '5.4.165'
    pod  'AlicloudSGSecurityBody', '5.4.94'
    pod  'AlicloudSGMain', '5.4.165'
    pod 'AlicloudALBBOpenAccount', '3.4.0.47'
    pod 'AlicloudPushIoT', '1.9.5.5-noccp'
    pod 'IMSPCloudPush', '1.0.2'
    pod 'IMSPCloudNetwork', '1.0.0'
    pod 'IMSThingCapability', '1.8.9'
    pod 'IMSMobileChannel', '1.6.12'
    pod 'IMSBoneKit', '1.3.11.2'
    pod 'AKReactNative', '0.59.9.2'

    pod 'IMSReactNativeExtension', '1.0.2'
    pod 'IMSDeviceCenter', '1.12.9'
    #https://github.com/robbiehanson/XMPPFramework/issues/660 Moving $(inherited) to the bottom of the list in "Library Search Paths" solved the problem for me. Thanks to someone who posted it somewhere. I couldn't find it to referer to it.
    pod 'IMSBreezeSDK', '1.7.4'
    pod 'IMSOtaBusinessSdk', '1.6.3'
    pod 'IMSDeviceGateway', '1.6.8'


end


def import_aliyun_sdk
    # 阿里云 pod 源
    source 'https://github.com/aliyun/aliyun-specs.git'
    #https://github.com/aliyun/aliyun-specs/tree/master/Specs
    ###阿里云需要的SDK
    # App 工具
    #pod 'IMSDebug', :path => 'LocalPods/IMSDebug.podspec'
    #    pod 'IMSHUD', :path => 'LocalPods/IMSHUD.podspec'
    #    pod 'IMSScanner', :path => 'LocalPods/IMSScanner.podspec'
    #    pod 'IMSCategory', :path => 'LocalPods/IMSCategory.podspec'

    # App 业务
    #    pod 'IMSLink', :path => 'LocalPods/IMSLink.podspec'
    #    pod 'IMSLife', :path => 'LocalPods/IMSLife.podspec'
    #    pod 'IMSDevice', :path => 'LocalPods/IMSDevice.podspec'
    #    pod 'IMSSmartSpeakerAccess', :path => 'LocalPods/IMSSmartSpeakerAccess.podspec'

    # 账号和用户
    #    pod 'IMSAccountDemo', :path => 'LocalPods/IMSAccountDemo.podspec'
    #    # 日志
    #    pod 'IMSLogDemo', :path => 'LocalPods/IMSLogDemo.podspec'
    #    # API 通道
    #    pod 'IMSApiClientDemo', :path => 'LocalPods/IMSApiClientDemo.podspec'
    #    # BoneMobile 容器
    #    pod 'IMSBoneKitDemo', :path => 'LocalPods/IMSBoneKitDemo.podspec'
    #    # 移动应用推送
    #    pod 'IMSPushDemo', :path => 'LocalPods/IMSPushDemo.podspec'
    # 长连接
    #    pod 'IMSMobileChannelDemo', :path => 'LocalPods/IMSMobileChannelDemo.podspec'
    pod 'IMSMobileChannel'#, '1.6.11'#'1.6.11'
    # 账号和用户多语言
    #    pod 'IMSLocalize', :path => 'LocalPods/IMSLocalize.podspec'
    #    pod 'IMSOpenAccountCustom', '1.1.5'
    #    pod 'IMSDemo', :path => 'LocalPods/IMSDemo.podspec'

    #初始化Smart
    #    pod 'IMSIotSmart', '1.2.0'
    pod 'IMSIotSmart'#, '1.2.2'

    #security
    pod 'AlicloudSecurityGuardSDK'#, '5.4.165'
    pod 'AlicloudSGSecurityBody'#, '5.4.94'
    pod 'AlicloudSGMain'#, '5.4.165'

    # OA
    pod 'AlicloudALBBOpenAccount'#, '3.4.0.46'

    #facebook依赖
    #    pod 'FBSDKLoginKit', '4.29.0'
    #    pod 'FBSDKCoreKit', '4.29.0'
    #google依赖：cocoapods 大于1.2.0版本，请注释 ToolboxForMac 和 GTMOAuth2 即可编辑通过
    #    pod 'GoogleSignIn', '4.0.2'
    #pod 'ToolboxForMac', :path => 'LocalPods/ToolboxForMac.podspec'
    #pod 'GTMOAuth2', '1.1.4'

    # 长连接
    #    pod 'IMSMobileChannel', '1.6.10'
    #pod 'IMSMobileChannel', '1.6.11'#'1.6.11'

    # API 通道 通用请求SDK
    #    pod 'IMSApiClient', '1.6.4'
    pod 'IMSApiClient'#, '1.6.6'#'1.6.6'

    # 用户统一身份认证
    pod 'IMSAuthentication'#, '1.4.2'

    # 移动推送：1.9.5.5 适配iOS13
    #    pod 'AlicloudPushIoT', '1.9.5.5'

    # [!] CocoaPods could not find compatible versions for pod "AlicloudPushIoT":
    #   In snapshot (Podfile.lock):
    #     AlicloudPushIoT (= 1.9.5.5-noccp)
    #   In Podfile:
    #     AlicloudPushIoT

    # There are only pre-release versions available satisfying the following requirements:
    #         'AlicloudPushIoT', '>= 0'
    #         'AlicloudPushIoT', '= 1.9.5.5-noccp'
    # You should explicitly specify the version in order to install a pre-release version
    pod 'AlicloudPushIoT', '1.9.5.5-noccp'

    # 专有云推送
    #    pod 'IMSPCloudPush', '1.0.1'
    pod 'IMSPCloudPush'#, '1.0.2'
    pod 'IMSPCloudNetwork'#, '1.0.0'
    #
    # BoneMoible 容器
    pod 'IMSBoneKit','1.3.11.2'
    # https://blog.51cto.com/kassien/1604020
    # https://github.com/OpenFlutter/rammus/issues/23
    # grep RNSVG -R *
    #    pod 'IMSReactNativeExtension'#, '1.0.2' #duplicate symbol '_OBJC_IVAR_$_RNSVGSvgView._meetOrSlice' in: 与svg库冲突 ###冲突并且库里只包含了RNSVG,暂时注释
    #    pod 'AKReactNative', '0.59.9.2' ###冲突暂时注释


    # pod 'MJRefresh'#, '3.1.15'

    # pod 'ZipArchive'#, '1.4.0'

    #设备模型
    #    pod 'IMSThingCapability', '1.8.1'
    pod 'IMSThingCapability'#, '1.8.4'# '1.8.4'
    #    pod 'IMSBreezeSDK', '1.7.0'
    #    pod 'AKTBJSONModel', '~> 1.0.0'

    # 蓝牙
    #    pod 'IMSOtaBusinessSdk', '1.6.3'

    #配网
    #   pod 'Reachability'#, '3.2'
    #    pod 'IMSDeviceCenter', '1.12.0'
    #      pod 'IMSDeviceCenter', '1.12.9'#'1.12.4' # grep -r "CocoaAsyncSocket" * 库冲突 https://medium.com/@GalvinLi/tinysolution-fix-cocoapods-duplicate-implement-warning-5a2e1a505ea8
    #    pod 'CocoaAsyncSocket', '7.4.2'

    #    pod 'IMSDeviceGateway', '1.6.7'
    #    pod 'IMSDeviceGateway', '1.6.8'

    # 其他外部第三方库
    #    pod 'SDWebImage', '5.4.0'
    #    pod 'Mantle', '2.1.0'
end
def import_public
    # github 官方 pod 源
    source 'https://github.com/CocoaPods/Specs.git' 
    # Pods forIMSiLopModule
    pod 'LicensePlist'
    pod 'MJRefresh'#, '3.1.15'
    pod 'ZipArchive'
    pod 'CocoaAsyncSocket', :modular_headers => false#, '7.4.2'
    pod 'Reachability'#, '3.2'
end

# 需要替换下述 "IMSDemoApp" 为开发者 App 的 target 名称 
target "IMSiLopKit" do 
    # Pods forIMSiLopModule
    import_public
    import_IMSiLop
    # import_aliyun_sdk
end


#https://developer.apple.com/forums/thread/656616
#post_install do |installer|
#  installer.pods_project.targets.each do |target|
#    target.build_configurations.each do |config|
#      if Gem::Version.new('8.0') > Gem::Version.new(config.build_settings['IPHONEOS_DEPLOYMENT_TARGET'])
#        config.build_settings['IPHONEOS_DEPLOYMENT_TARGET'] = '8.0'
#      end
#    end
#  end
#end

#https://stackoverflow.com/questions/54704207/the-ios-simulator-deployment-targets-is-set-to-7-0-but-the-range-of-supported-d
post_install do |installer|
 installer.pods_project.targets.each do |target|
#   flutter_additional_ios_build_settings(target)
  target.build_configurations.each do |config|
   config.build_settings['IPHONEOS_DEPLOYMENT_TARGET'] = '9.0'
  end
 end
end
