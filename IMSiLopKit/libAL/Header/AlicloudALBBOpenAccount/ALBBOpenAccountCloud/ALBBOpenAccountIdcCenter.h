//
//  IMSIdcCenter.h
//  Pods
//
//  Created by zonglu wu on 2019/8/14.
//

#import <Foundation/Foundation.h>
#import "ALBBOpenAccountRegionModel.h"

#ifndef kIdcCenterKeyTypeCountry
#define kIdcCenterKeyTypeCountry @"COUNTRY_CODE"
#define kIdcCenterKeyTypePhone  @"PHONE"
#define kIdcCenterKeyTypeEmail  @"EMAIL"
#define kIdcCenterKeyTypeGoogle @"GOOGLE_AUTHCODE"
#define kIdcCenterKeyTypeApple @"APPLEID_OAUTH"
#define kIdcCenterKeyTypeThird @"THIRD_AUTHCODE"
#endif

NS_ASSUME_NONNULL_BEGIN

@interface ALBBOpenAccountIdcCenter : NSObject
//通过国家码构建
-(instancetype)initWithCountry:(NSString*)countryCode;
//使用手机账号构建
-(instancetype)initWithPhone:(NSString*)phone prefix:(NSString *)prefix countryCode:(NSString *)countryCode;
//使用邮箱账号构建
-(instancetype)initWithEmail:(NSString*)email countryCode:(NSString *)countryCode;
//使用第三方登录返回的authCode构建
-(instancetype)initWithOAuth:(NSString*)countryCode authcode:(NSString*)authCode;

-(instancetype)initWithAppleId:(NSString*)countryCode openId:(NSString*)openId;

-(instancetype)initWithThirdParty:(NSString*)countryCode authcode:(NSString*)authCode;
//获取当前idc服务器的请求结果
- (void) getAccountRegion:(void(^)(NSError *error))callback;
@end

NS_ASSUME_NONNULL_END

