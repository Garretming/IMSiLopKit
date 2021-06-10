//
//  ALBBOpenAccountSMSCodeViewModel.h
//  ALBBOpenAccountUI
//
//  Created by liqing on 15/5/4.
//  Copyright (c) 2015年 Alipay. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, ALBBOpenAccountSMSRefresh) {
    ALBBOpenAccountSMSRefreshSuccess,
    ALBBOpenAccountSMSRefreshFail,
    ALBBOpenAccountSMSRefreshCancel
};

@interface ALBBOpenAccountSMSCodeViewModel : NSObject

@property (nonatomic, copy) void (^refreshBlock)(ALBBOpenAccountSMSRefresh result);
@property (nonatomic, copy) void (^refreshBlockWithError)(ALBBOpenAccountSMSRefresh result, NSError* error);

//邮箱找密验证码服务
+ (instancetype)modelWithEmailFindPwdTrigger:(UIButton *)trigger;
//找密验证码服务
+ (instancetype)modelWithResetTrigger:(UIButton *)trigger;
//绑定手机号服务
+ (instancetype)modelWithBindPhoneTrigger:(UIButton *)trigger;
//短信登录服务
+ (instancetype)modelWithSMSLoginTrigger:(UIButton *)trigger;
//注册验证码服务
+ (instancetype)modelWithRegisterTrigger:(UIButton *)trigger;
//无密登陆短信验证码服务
+ (instancetype)modelWithLoginNoPwdTrigger:(UIButton *)trigger;
//邮箱注册服务
+ (instancetype)modelWithEmailRegistTrigger:(UIButton *)trigger;

- (void)refreshWithEmail:(NSString *)email;
- (void)refreshWithUsername:(NSString *)username;
- (void)refreshWithUsername:(NSString *)username LocationCode:(NSString *)locationCode;

//开始倒计时
- (void)beginCountingDown;

@end
