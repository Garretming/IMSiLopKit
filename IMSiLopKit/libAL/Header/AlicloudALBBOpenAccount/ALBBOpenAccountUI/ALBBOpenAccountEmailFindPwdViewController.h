//
//  ALBBOpenAccountEmailFindPwdViewController.h
//  ALBBOpenAccountUI
//
//  Created by yixiao on 2018/6/15.
//  Copyright © 2018年 Alipay. All rights reserved.
//

#import "ALBBOpenAccountBaseController.h"
#import "ALBBOpenAccountWrapperView.h"
#import "ALBBOpenAccountSMSCodeViewModel.h"

@interface ALBBOpenAccountEmailFindPwdViewController : ALBBOpenAccountBaseController

@property (nonatomic, strong) NSString *email;

//预留的外挂引用
@property (nonatomic, strong) IBOutletCollection(NSObject)  NSArray *outletCollection;

// wrapper
@property (weak, nonatomic) IBOutlet ALBBOpenAccountWrapperView *wrapperView;

// username
@property (weak, nonatomic) IBOutlet UILabel *usernameLabel;
@property (weak, nonatomic) IBOutlet UITextField *usernameField;
// smscode
@property (weak, nonatomic) IBOutlet UILabel *emailCodeLabel;
@property (weak, nonatomic) IBOutlet UITextField *emailCodeField;
@property (weak, nonatomic) IBOutlet UIButton *sendButton;

// control
@property (weak, nonatomic) IBOutlet UIButton *nextButton;

@property (strong, nonatomic, readonly) ALBBOpenAccountSMSCodeViewModel *emailCodeViewModel;

/**
 校验验证码的回调
 status: YES: 正确， NO: 错误
 */
@property (nonatomic, copy) void (^checkSmsBlock)(BOOL status);

@end
