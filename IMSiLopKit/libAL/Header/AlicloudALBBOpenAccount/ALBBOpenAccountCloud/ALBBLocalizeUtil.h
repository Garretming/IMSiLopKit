//
//  ALBBLocalizeUtil.h
//
//  Created by huangpeng on 2020/1/3.
//  Copyright © 2020 huangpeng. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ALBBLocalizeUtil : NSObject

/// 对应的文案
/// key：系统繁忙，请稍后重试
/// 中文翻译：系统繁忙，请稍后重试
+ (NSString *)ALBBSystemBusyWaitRetry;

/// 对应的文案
/// key：输入不能为空
/// 中文翻译：输入不能为空
+ (NSString *)ALBBInputNotEmpty;

/// 对应的文案
/// key：手机号格式不正确
/// 中文翻译：手机号格式不正确
+ (NSString *)ALBBPhoneStyleError;

/// 对应的文案
/// key：手机号不能为空
/// 中文翻译：手机号不能为空
+ (NSString *)ALBBPhoneNotEmpty;

/// 对应的文案
/// key：邮箱不能为空
/// 中文翻译：邮箱不能为空
+ (NSString *)ALBBEmailNotEmpty;

/// 对应的文案
/// key：登录安全验证失败，请稍后再试
/// 中文翻译：登录安全验证失败，请稍后再试
+ (NSString *)ALBBLoginSecurityValidationErrorWaitRetry;

/// 对应的文案
/// key：热门国家和地区
/// 中文翻译：热门国家和地区
+ (NSString *)ALBBHotCountryOrCode;

/// 对应的文案
/// key：重新获取
/// 中文翻译：重新获取
+ (NSString *)ALBBResend;

/// 对应的文案
/// key：%.0f秒后重发
/// 中文翻译：%.0f秒后重发
+ (NSString *)ALBBRetrySendWaitTime;

/// 对应的文案
/// key：网络不稳定，请稍后重试
/// 中文翻译：网络不稳定，请稍后重试
+ (NSString *)ALBBNetError;

/// 对应的文案
/// key：无法删除本机设备
/// 中文翻译：无法删除本机设备
+ (NSString *)ALBBNotArrowDelete;

/// 对应的文案
/// key：会话已过期，请重新登录
/// 中文翻译：会话已过期，请重新登录
+ (NSString *)ALBBSessionExpirationPleaseReLogin;

/// 对应的文案
/// key：账号不存在，请重新输入
/// 中文翻译：账号不存在，请重新输入
+ (NSString *)ALBBAccountDoesNotExist;

/// 对应的文案
/// key：确定
/// 中文翻译：确定
+ (NSString *)ALBBConfirm;

/// 对应的文案
/// key：找回密码
/// 中文翻译：找回密码
+ (NSString *)ALBBFindPassword;

/// 对应的文案
/// key：该账号已绑定QQ账号
/// 中文翻译：该账号已绑定QQ账号
+ (NSString *)ALBBBindQQAccount;

/// 对应的文案
/// key：该账号已绑定微博账号
/// 中文翻译：该账号已绑定微博账号
+ (NSString *)ALBBBindWeiboAccount;

/// 对应的文案
/// key：该账号已绑定淘宝账号
/// 中文翻译：该账号已绑定淘宝账号
+ (NSString *)ALBBBindTaobaoAccount;

/// 对应的文案
/// key：该账号已绑定微信账号
/// 中文翻译：该账号已绑定微信账号
+ (NSString *)ALBBBindWeixinAccount;

/// 对应的文案
/// key：该账号已绑定支付宝账号
/// 中文翻译：该账号已绑定支付宝账号
+ (NSString *)ALBBBindAlipayAccount;

/// 对应的文案
/// key：该账号已绑定facebook账号
/// 中文翻译：该账号已绑定facebook账号
+ (NSString *)ALBBBindFacebookAccount;

/// 对应的文案
/// key：该账号已绑定google账号
/// 中文翻译：该账号已绑定google账号
+ (NSString *)ALBBBindGoogleAccount;

/// 对应的文案
/// key：该账号已绑定twitter账号
/// 中文翻译：该账号已绑定twitter账号
+ (NSString *)ALBBBindTwitterAccount;

/// 对应的文案
/// key：iLop_OA_SDK_SMSLogin
/// 中文翻译：验证码登录
+ (NSString *)ALBBVerificationCodeLogin;

@end

NS_ASSUME_NONNULL_END
