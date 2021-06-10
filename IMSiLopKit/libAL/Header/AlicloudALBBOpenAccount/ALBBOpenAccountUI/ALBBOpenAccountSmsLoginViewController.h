//
//  ALBBOpenAccountSmsLoginViewController.h
//  ALBBOpenAccountUI
//
//  Copyright (c) 2019年 Alibaba. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ALBBOpenAccountBaseController.h"
#import "ALBBOpenAccountWrapperView.h"
#import "ALBBOpenAccountSMSCodeViewModel.h"

@interface ALBBOpenAccountSmsLoginViewController : ALBBOpenAccountBaseController

@property (nonatomic, strong) NSString *mobile;
//预留的外挂引用
@property (nonatomic, strong) IBOutletCollection(NSObject)  NSArray *outletCollection;

// wrapper
@property (weak, nonatomic) IBOutlet ALBBOpenAccountWrapperView *wrapperView;

@property (weak, nonatomic) IBOutlet UILabel *prefixLabel;
@property (weak, nonatomic) IBOutlet UIButton *prefixIcon;

// username
@property (weak, nonatomic) IBOutlet UILabel *usernameLabel;
@property (weak, nonatomic) IBOutlet UITextField *usernameField;
// smscode
@property (weak, nonatomic) IBOutlet UILabel *smscodeLabel;
@property (weak, nonatomic) IBOutlet UITextField *smscodeField;
@property (weak, nonatomic) IBOutlet UIButton *sendButton;

// control
@property (weak, nonatomic) IBOutlet UIButton *submitButton;
- (IBAction)prefixNumberChoose:(id)sender;
- (IBAction)submitLogin;

@property (strong, nonatomic, readonly) ALBBOpenAccountSMSCodeViewModel *smscodeViewModel;

/**
 校验验证码的回调
 status: YES: 正确， NO: 错误
 */
@property (nonatomic, copy) void (^checkSmsBlock)(BOOL status);

@end
