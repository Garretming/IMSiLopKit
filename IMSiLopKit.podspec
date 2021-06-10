#
#  Be sure to run `pod spec lint IMSiLopKit.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
# pod lib lint --allow-warnings --no-clean --verbose 

Pod::Spec.new do |spec|

  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  These will help people to find your library, and whilst it
  #  can feel like a chore to fill in it's definitely to your advantage. The
  #  summary should be tweet-length, and the description more in depth.
  #

  spec.name         = "IMSiLopKit" #组件工程名 私有库的名称 podspec 文件本身的文件名也必须是 libraryName

  spec.version      = "0.0.1"#//版本号 // 当前库的版本，使用本地库时该值被忽略
  spec.summary      = "A short description of IMSiLopKit. 测试 Framework" #//概述

  # This description is used to generate tags and improve search results.
  #   * Think: What does it do? Why did you write it? What is the focus?
  #   * Try to keep it short, snappy and to the point.
  #   * Write the description between the DESC delimiters below.
  #   * Finally, don't worry about the indent, CocoaPods strips it!
  spec.description  = <<-DESC
  this project provide all kinds of categories for iOS developer   //描述
                   DESC
#  // 库的主页，使用本地库时，这个值被忽略
  spec.homepage     = "https://github.com/Garretming/IMSiLopKit" #'远程仓库地址'  'https://github.com/Jonzzs/FrameworkDemo'
  # spec.screenshots  = "www.example.com/screenshots_1.gif", "www.example.com/screenshots_2.gif"


  # ―――  Spec License  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  Licensing your code is important. See https://choosealicense.com for more info.
  #  CocoaPods will detect a license file if there is a named LICENSE*
  #  Popular ones are 'MIT', 'BSD' and 'Apache License, Version 2.0'.
  #

  # spec.license      = "MIT (example)"
  spec.license      = { :type => "MIT", :file => "LICENSE" }  # //许可证
  # spec.license      = { :type => "MIT", :file => "FILE_LICENSE" }


  # ――― Author Metadata  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  Specify the authors of the library, with email addresses. Email addresses
  #  of the authors are extracted from the SCM log. E.g. $ git log. CocoaPods also
  #  accepts just a name if you'd rather not provide an email address.
  #
  #  Specify a social_media_url where others can refer to, for example a twitter
  #  profile URL.
  #

#   spec.author             = { "clark" => "Please make sure you have the correct access rights
# and the repository exists.
# Completed with errors, see abovePushing to gitee.com:Garret_829/ghiot.git
# git@gitee.com: Permission denied (publickey).
# plyy520523@qq.com" }
  # Or just: spec.author    = "clark"
  # spec.authors            = { "clark" => "Please make sure you have the correct access rights
# and the repository exists.
# Completed with errors, see abovePushing to gitee.com:Garret_829/ghiot.git
# git@gitee.com: Permission denied (publickey).
# plyy520523@qq.com" }
  spec.author                    = { 'clark' => 'plyy520523@qq.com' }

  # spec.social_media_url   = "https://twitter.com/clark"

  # ――― Platform Specifics ――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  If this Pod runs only on iOS or OS X, then specify the platform and
  #  the deployment target. You can optionally include the target after the platform.
  #

  # spec.platform     = :ios
  # spec.platform     = :ios, "5.0"

  #  When using multiple platforms
  # spec.ios.deployment_target = "5.0"
  # spec.osx.deployment_target = "10.7"
  # spec.watchos.deployment_target = "2.0"
  # spec.tvos.deployment_target = "9.0"


  # ――― Source Location ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  Specify the location from where the source should be retrieved.
  #  Supports git, hg, bzr, svn and HTTP.
  #
  # // 库的托管地址，使用本地库时，这个值被忽略。
  # // 这里使用了 git，还支持 svn, http, hg。
  spec.source       = { :git => "https://github.com/Garretming/IMSiLopKit.git", :tag => "#{spec.version}" }
  
 

  # spec.source           = { :git => '', :tag => spec.version.to_s }

  # spec.ios.deployment_target = '8.0'

  # spec.platform                  = :ios
  # spec.ios.deployment_target     = "9.0"
  # spec.swift_version             = "5.0"

  # spec.source_files = ['Classes/UMMob/**/*.{h,m}','Classes/Bugly/**/*.{h,m}','Classes/AMap/**/*.{h,m}']
  # spec.public_header_files = ['Classes/*.h']

  
  # ――― Source Code ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  CocoaPods is smart about how it includes source code. For source files
  #  giving a folder will include any swift, h, m, mm, c & cpp files.
  #  For header files it will include any header in the folder.
  #  Not including the public_header_files will make all headers public.
  #

  # spec.source_files  = "Classes", "Classes/**/*.{h,m}"
  # spec.exclude_files = "Classes/Exclude"

  # spec.public_header_files = "Classes/**/*.h"
#源代码文件，多个值之间使用,分割
  # s.source_files  = "IMSiLopKit", "IMSiLopKit/**/*.{h,m}"
  #//路径 前面的表示私有库名，后面表示私有库中的内容
  
  # s.exclude_files = "Classes/Exclude"
  
  #有添加framework，才需要设置s.public_header_files，否则不要设置s.public_header_files
  # 如果单纯framework做pod，首先public_header_files要指定xxx.framework/Headers/{.h}不然你头文件找不到，其次source_files里看具体编译情况决定加不加xxx.framework/Headers/{.h}，然后就是比较普通的地方vendored_frameworks指定好完事大吉！source_files这个加了的时候还有一个前提就是Framework内引用全是""不能<>，所以大部分情况source_files不加
  # s.public_header_files = "IMSiLopKit/IMSiLopKit.h", "IMSiLopKit/**/*.h" #如果是创建framework，才需要设置s.public_header_files，否则不要设置s.public_header_files。 因为设置了s.public_header_files会自动编译成framework,在pod trunk push时会报找不到"xxxxx.h"的错误。

  # ――― Resources ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  A list of resources included with the Pod. These are copied into the
  #  target bundle with a build phase script. Anything else will be cleaned.
  #  You can preserve files from being cleaned, please don't preserve
  #  non-essential files like tests, examples and documentation.
  #

  # spec.resource  = "icon.png"
  # spec.resources = "Resources/*.png"

  # spec.preserve_paths = "FilesToSave", "MoreFilesToSave"
  #// 资源文件，还有一个可替代配置 resource_bundles，该如何选择呢？后面来讨论
  # spec.resources = ['Assets/*.xcassets', 'LocalizableFiles/**/*.strings',"IMSiLopKit/**/*.{xib,storyboard,bundle}"]
  spec.resources = "IMSiLopKit/**/*.{xib,storyboard,bundle}"

  # ――― Project Linking ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  Link your library with frameworks, or libraries. Libraries do not include
  #  the lib prefix of their name.
  #

  # spec.framework  = "SomeFramework"
  # spec.frameworks = "SomeFramework", "AnotherFramework"

  # spec.library   = "iconv"
  # spec.libraries = "iconv", "xml2"


  # ――― Project Settings ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  If your library depends on compiler flags you can set them in the xcconfig hash
  #  where they will only apply to your library. If you depend on other Podspecs
  #  you can include multiple dependencies to ensure it works.

  spec.requires_arc = true


  # spec.swift_version             = '5.0'


  # spec.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  # spec.xcconfig = { "FRAMEWORK_SEARCH_PATHS" => "Pods/WDContainerLib/Frameworks" }

  # spec.libraries = 'sqlite3', 'c++', 'z', 'z.1.1.3', 'stdc++', 'stdc++.6.0.9'
  # spec.frameworks = 'SystemConfiguration', 'CoreTelephony', 'JavaScriptcore', 'CoreLocation', 'Security', 'Foundation'

  # s.static_framework  =  true #依赖的其他pod也要保证是静态库或加static_framework为ture ，新版本已经不需要在写

  
  
  #  spec.dependency 'aliyun/aliyun-specs/' #依赖库
  # spec.dependency "JSONKit", "~> 1.4"

#   首先我们针对的就是pod提供framework和.a的情况，核心问题其实是自己怎么建立对framework和.a的支持。
# 把dependency一些静态库的pod拍平就是现在的解决方法，自己建pod，保证一层支持framework和.a,另外如果实在自己的pod里dependency的静态库pod，这个时候比较好的选择是建立subspec，直接subspec里面封装对静态库的支持。
# 这里支持的时候要分为3类，先放一个友盟分享的例子：
# 友盟的framework 和.a都是静态库
  # spec.subspec 'XXXThirdPartSocialVendor' do |sss|
  #   sss.source_files            = ''
  #   sss.resource                = 'UMSocialSDK/UMSocialSDKPromptResources.bundle'
  #   sss.ios.vendored_frameworks = 'UMSocialSDK/UMSocialCore.framework','UMSocialSDK/UMSocialNetwork.framework'
  #   sss.ios.vendored_library    = 'SocialLibraries/QQ/libSocialQQ.a','SocialLibraries/Sina/libSocialSina.a','SocialLibraries/WeChat/libSocialWeChat.a'
  #   sss.ios.public_header_files   = 'SocialLibraries/**/*.{h}'
  #   sss.ios.library  = 'sqlite3'
  # end
  # 动态库Pods封装.a
  # 对.a封装的时候vendored_library属性对应.a，然后看看依赖啥系统库在library，frameworks里加上，最后就是.h,如果你不想暴露的话public_header_files 里加完就不用管了，如果想要暴露给别人调用，只能source_files里再加一遍.h。
  # 上面例子中XXXThirdPartSocialVendor里的source_files为空，但其实.a里的东西你是可以调用的，原因是友盟在他的framework里的头文件引用了.a的头文件，间接让.a的.h公开,这问题在我看来感觉是个bug。。。
  # 所以不想在source_files里再写一遍的也可以建个.h引用一遍所有.a的头文件，最后source_files写你自己的.h,但这只是保证我到处可以通过引用自己的头文件实现方法调用，并不能单个引用对应.a的头文件
  

#   动态库Pods封装静态Framework 正常的pod当静态库用的时候vendored_library，vendored_frameworks两个属性搞定一切
# 对静态的Framework封装的时候可以说是最舒服的了，vendored_frameworks加上去基本就万事大吉了，至于依赖啥系统库加library，frameworks这件事，亲测有的时候并不需要！
  # spec.vendored_frameworks = 'Frameworks/**/*.framework'
  # spec.ios.vendored_frameworks   = 'Carthage/Build/iOS/*.framework'

#  动态库Pods封装动态Framework
# 对于动态的Framework封装，我不说估计大家也基本能猜到吧！这就是最难受的，具体情况具体分析，不同情形下用不同套路，就算不用pod也让你很不爽，这里我拿环信客服SDK来讲！
# 不用pod,你要手动把这SDK拖到上边Embedded Binaries位置头文件才能引用，这个是苹果现在引用动态Framework的套路。。。好烦！
# 下面讲一下pod怎么搞，如果单纯framework做pod，
# 首先public_header_files要指定xxx.framework/Headers/{.h}不然你头文件找不到，
# 其次source_files里看具体编译情况决定加不加xxx.framework/Headers/{.h}，
# 然后就是比较普通的地方vendored_frameworks指定好完事大吉！
# source_files这个加了的时候还有一个前提就是Framework内引用全是""不能<>，所以大部分情况source_files不加
# 另一种混合使用感觉这才是最常见的
# 这时候不要指定Framework的public_header_files，写一个自己的头文件引用类，把想公开可以调用的在这里#import <xxx.framework/xxx.h>,只能间接把那些搞出去，起作用的只有vendored_frameworks

# 动态库Pods封装资源文件的调用
# 高能预警！超级天坑降临！
# 当你use_frameworks!这么一下你如果自定义的pod有关于resource或resource_bundle的话应该会发现真正的末日降临了，之前的资源全读不出来了！
# DingTalk20170818141324.png

# 一张图片告诉你发生了什么，pod构建动态库的时候你的资源文件都在Framework里！
# 现在的选择变成：要么资源文件放外面单独加，要么改代码。。。。就问你坑不坑？
# 放外面单独加我这就不说了太简单，代码写的话其实也要看本身代码的结构什么样，如果像我举例中的SDK基本没救，没有统一的地方获取NSBundle,也没对bundle名称做统一，更没对UIImage设置加扩展！
# 下面简单说下调用方法

# NSString * bundleName=@"Frameworks/xxx.framework/xxx.bundle";

# NSString * bundlePath = [[[NSBundle mainBundle] resourcePath] stringByAppendingPathComponent: bundleName];

# NSBundle *bundle= [NSBundle bundleWithPath:bundlePath];

# //本地化（拖入.lproj 文件夹即可）
# NSString *localizedString=[bundle  localizedStringForKey:@"localizedStringKey" value:@"" table:nil]

# //图片获取
# NSString *bundleImageName=[bundleName  stringByAppendingString:@"myIcon"];

# UIImage *tmpImage=[UIImage imageNamed: bundleImageName];

# 根据上面代码可以找个单例提供bundleName字段，在模块初始化的时候，先判断xxx.bundle有没有，没有的情况bundleName设置成Frameworks/xxx.framework/xxx.bundle，如果没有bundle而是单纯的资源文件，指定到framework目录里就可以随便用了。

# 只有这样你的pod才算是支持了CocoaPods 动/静态库,也才算是真正的组件化，而且拆包看.app也会感觉优雅很多，分类明确！

end


# Pod::Spec.new do |s|
# 	s.platform     =  :ios, '8.0'
# 	s.name = 'IotLinkKit'
# 	s.version  = '1.2.2'
# 	s.summary = 'iOS linkkit for iot'
# 	s.homepage = "https://open.aliplus.com"
# 	s.license = {
# 	:type => 'Copyright',
# 	:text => <<-LICENSE
# 	          Alibaba-Inc copyright
# 	LICENSE
# 	}
# 	s.authors = {'Difeng'=>'difeng.zyl@alibaba-inc.com'}
# 	s.source  = { :http => 'https://ios-repo.oss-cn-shanghai.aliyuncs.com/iot-linkkit/1.2.2/iot-linkkit.zip' }
# 	s.vendored_frameworks = 'iot-linkkit/*.framework'
	                      
#         s.resources = ["iot-linkkit/AlinkIoTExpress.framework/*.bundle"]
#         s.frameworks = 'Foundation'

#         s.requires_arc = true
#         s.xcconfig = {'OTHER_LDFLAGS' => '$(inherited) -lstdc++ -ObjC'}
#         s.dependency 'IMSLog'
# end