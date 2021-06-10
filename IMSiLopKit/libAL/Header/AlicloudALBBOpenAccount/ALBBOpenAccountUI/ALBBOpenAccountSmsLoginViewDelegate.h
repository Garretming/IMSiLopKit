  //
//  ALBBOpenAccountFindPwdViewDelegate.h
//  ALBBOpenAccountUI
//
//  Created by zhoulai on 15/7/3.
//  Copyright (c) 2015年 Alibaba. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ALBBOpenAccountSmsLoginViewController.h"

@protocol ALBBOpenAccountSmsLoginViewDelegate <NSObject>

@optional

- (void)loginViewDidLoad:(ALBBOpenAccountSmsLoginViewController *) viewController;


- (void)loginViewWillAppear:(ALBBOpenAccountSmsLoginViewController *) viewController;
- (void)loginViewDidAppear:(ALBBOpenAccountSmsLoginViewController *) viewController;

- (void)loginViewWillDisappear;
- (void)loginViewDidDisappear;

- (void)loginViewWillLayoutSubviews:(ALBBOpenAccountSmsLoginViewController *) viewController;
- (void)loginViewDidLayoutSubviews:(ALBBOpenAccountSmsLoginViewController *) viewController;

@end
