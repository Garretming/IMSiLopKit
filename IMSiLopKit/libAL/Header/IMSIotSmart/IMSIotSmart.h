//
//  IMSIotSmart.h
//  IMSIotSmart
//
//  Created by zonglu wu on 2019/11/21.
//  Copyright © 2019 alibaba. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIKit/UINavigationController.h"

NS_ASSUME_NONNULL_BEGIN

//! Project version number for IMSIotSmart.
FOUNDATION_EXPORT double IMSIotSmartVersionNumber;

//! Project version string for IMSIotSmart.
FOUNDATION_EXPORT const unsigned char IMSIotSmartVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <IMSIotSmart/PublicHeader.h>

/***
 该枚举类型用于确定app的使用范围，按飞燕平台设计，app跟设备分为国内跟海外两套环境，而且彼此隔离。
 如app连接国内服务器时，无法添加海外出货的设备，反之国内连接海外服务器时，国内出货的设备也无法添加。
 基于此，在app初始化IoT SDKs，需要明确app是只工作在国内还是会在国内跟海外之间进行切换。
 */
typedef enum {
    REGION_ALL, /// 当前APP既支持连接中国大陆服务器，又支持连接海外服务器，海外连接哪个region，取决于 账号注册时所选国家。当未设置config时会默认使用此值
    REGION_CHINA_ONLY,/// 当前APP只支持连接中国大陆服务器,  
} IMSRegionType;



/**
 自有APP开发时存在两种形式，分别时测试版跟正式版，可以参见飞燕后台自有APP开发流程介绍。
 即将废弃，2020年4月后在飞燕后台新建的APP请毋使用。
 */
typedef enum {
    APP_TYPE_PRODUCTION,///正式版APP
    APP_TYPE_DEVELOP, ///测试版APP
} IMSAppType;


@interface IMSIotCountry : NSObject<NSCopying, NSMutableCopying>
/// 国家（地区）名称
@property (nonatomic, copy, nonnull) NSString* areaName;
/// 国家（地区）区号
@property (nonatomic, copy, nonnull) NSString* code;
/// 国家（地区）名称的拼音
@property (nonatomic, copy, nonnull) NSString* pinyin;
/// ISO Country Code - 标准国家码
@property (nonatomic, copy, nonnull) NSString* isoCode;
/// 标准国家码简写
@property (nonatomic, copy, nullable) NSString* domainAbbreviation;
@end



/// sdk配置项
@interface IMSIotSmartConfig : NSObject
@property (nonatomic, assign) IMSRegionType regionType;/// region 类型，参见枚举  `IMSRegionType`
@property (nonatomic, assign) IMSAppType appType  DEPRECATED_ATTRIBUTE;  ///APP是测试版还是正式版，当不设置时，默认取值为正式版。参见 `IMSAppType`，方法即将废弃，2020年4月后在飞燕后台新建的APP请毋使用
@end


@interface IMSIotSmart : NSObject

/// 单例方法
+ (instancetype _Nonnull )sharedInstance;


/// SDK运行时的配置 ，请在调用 sdk API  [application:didFinishLaunchingWithOptions:] 前调用此方法完成初始化配置，参见`IMSIotSmartConfig`。如果不设置，则SDK运行时会使用默认的配置。默认配置参见`IMSIotSmartConfig` 里的说明。此值不会固化保存，应用退出后得重新传入。
@property (nonatomic, strong, nullable) IMSIotSmartConfig *  config;




/// 替换安全图片，sdk初始化时会默认使用yw_1222_china_production.jpg这张安全图片，如果需要使用其他的安全图片，
/// 建议重启应用，调用此接口更换后，再行初始化
/// @param authCode 安全图片后缀名字，如yw_1222_china_production.jpg，authCode为china_production
- (void)setAuthCode:(NSString *_Nullable)authCode;


/// sdk初始化方法，请在 AppDelegate  [application:didFinishLaunchingWithOptions:`] 回调方法中调用此API
/// @param application 应用实例，直接使用AppDelegate [application:didFinishLaunchingWithOptions:`] 回调方法的 application 参数
/// @param launchOptions  应用启动选项，直接使用AppDelegate [application:didReceiveRemoteNotification:`] 回调方法的 launchOptions 参数
- (BOOL)application:(UIApplication *_Nonnull)application didFinishLaunchingWithOptions:(NSDictionary *_Nullable)launchOptions;



/// 注册 apns 成功回调时，使用此方法通知 sdk 初始化 移动推送通道
/// @param application  应用实例，直接使用AppDelegate [application:didRegisterForRemoteNotificationsWithDeviceToken:`] 回调方法的 application 参数
/// @param deviceToken   直接使用AppDelegate [application:didReceiveRemoteNotification:`] 回调方法的 deviceToken 参数
- (void)application:(UIApplication * _Nonnull)application
didRegisterForRemoteNotificationsWithDeviceToken:(NSData * _Nonnull)deviceToken;



/// 注册 apns 成功回调时，使用此方法通知 sdk
/// @param application application 应用实例，直接使用AppDelegate [application:didFailToRegisterForRemoteNotificationsWithError:`] 回调方法的 application 参数
/// @param error 失败原因介绍。直接使用AppDelegate [application:didFailToRegisterForRemoteNotificationsWithError:`] 回调方法的 error 参数
- (void)application:(UIApplication *_Nonnull)application
didFailToRegisterForRemoteNotificationsWithError:(NSError *_Nonnull)error;



/// 在收到 apns 推送消息，调用此 API 通知 SDK，请在 AppDelegate [application:didReceiveRemoteNotification:`] 回调方法中调用此API
/// @param application 应用实例，直接使用AppDelegate [application:didReceiveRemoteNotification:`] 回调方法的 application 参数
/// @param userInfo  apns 推送消息的内容，直接使用AppDelegate [application:didReceiveRemoteNotification:`] 回调方法的 userInfo 参数
- (void)application:(UIApplication *_Nonnull)application didReceiveRemoteNotification:(NSDictionary * _Nonnull)userInfo;

 
/// 当应用使用的语言变化时，调用此api设置IoT sdks使用的语言，当未设置过语言时，SDK默认取值是'跟随系统语言'。当调用此api设置过语言后，sdkl内部会固化保存，下次app启动，自动读取上次设置的语言。
 ///sdk需要使用的语言,目前支持：中文简体、英文、法语、德语、日语、韩语、西班牙语、俄语、印度语、意大利语。对应的取值：zh-CN、en-US、fr-FR、de-DE、ja-JP、ko-KR、es-ES、ru-RU、hi-IN、it-IT.
/// @param language  要切换的语言种类，取值范围[zh-CN、en-US、fr-FR、de-DE、ja-JP、ko-KR、es-ES、ru-RU、hi-IN、it-IT.]
- (void)setLanguage:(NSString*_Nonnull)language;

/// 获取当前设置的语言， 参见 [setLanguage:]里的说明
- (NSString*_Nonnull) getLanguage;


/// 获取账号注册地的short regionid
///  请在账号登录后调用，否则返回的值为空或者是上次的缓存
- (NSString *)shortRegionId;

/// 是否打开调试开关，打开时会开启底层sdk的log, 需要阿里云IoT同学排查bug时，建议打开
/// @param turnOndebug YES表示打开Log，No：表示关闭
- (void)setDebug:(bool)turnOndebug;

@end

/**
setCountry 回调接口，用于通知设置了国家(地区)后，app是否需要重启才能失效
@param needRestartApp  为YES则需要重启app，为NO无需重启app设置马上生效
*/
typedef void (^IMSIotSmartBeforeSetCountry)(BOOL needRestartApp);

/**
showCountryListInNavigationController 回调接口，用户选择了某个国家(地区)，国家(地区)选择窗口关闭，调用此接口通知调用者
@param country IMSIotCountry 用户选择的国家(地区)
*/
typedef void (^IMSIotSmartSelectCountry)(IMSIotCountry* _Nullable country);
/**
  查询到国家列表的回调
@param countryList 国家列表
@param error 如果发生错误，传递错误信息
*/
typedef void (^IMSIotSmartCountryListGet)(NSError* _Nullable error, NSArray<IMSIotCountry*>* _Nullable countryList);


/** 设置国家(地区)扩展接口
    有两种使用方式：
        1 调用查询接口getCountryList查询可用的国家(地区)列表，然后调用setCountry设置选择的国家(地区)
        2 调用showCountryListInNavigationController 显示内置的国家(地区)UI窗口，在通知callback里由调用者调用setCountry设置选择的国家(地区)
 */
@interface IMSIotSmart (country)

/**
 用户选中某个国家(地区）后，调用这个接口设置国家(地区)，sdk内部会持久化保存设置，无需每次重启app都做设置。
 @param country IMSIotCountry 待设置的国家(地区)
 @param callback 回调接口 切换国家(地区)，如果需要重启app，通过回调接口通知调用者
 */
- (void)setCountry:(IMSIotCountry* _Nonnull)country callback:(IMSIotSmartBeforeSetCountry _Nonnull) callback;

/// 返回上次调用setCountry后sdk内部持久化保存的国家(地区)
- (IMSIotCountry*_Nullable)getCountry;

/**
  查询可用的国家(地区)列表，根据当前语言设置优先从本地缓存读取数据，本地没有有效缓存则从云端拉数据。
  前置函数: setLanguage
 @param callback IMSIotSmartCountryListGet 查询结果的回调函数
 */
- (void)getCountryList:(IMSIotSmartCountryListGet _Nonnull) callback;

/**
 显示内置的国家(地区)选择界面，用户点击某个国家(地区)后通过callback通知调用者。
 调用showCountryListInNavigationController前需要先设置国家(地区)的语言
 前置函数: setLanguage
 @param navigationController UINavigationController对象
 @param callback 通知回调接口
 */
- (void)showCountryListInNavigationController:(UINavigationController *_Nonnull)navigationController
                                     callback:(IMSIotSmartSelectCountry _Nonnull) callback;
@end


NS_ASSUME_NONNULL_END
