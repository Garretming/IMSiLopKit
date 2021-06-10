//
//  IMSIotSmart+scope.h
//  IMSIotSmart
//
//  Created by 朱永利 on 2019/12/4.
//  Copyright © 2019 alibaba. All rights reserved.
//



#import <Foundation/Foundation.h>

#import "IMSIotSmart.h"


/**
 APP中希望能拉到所有的
 */
typedef enum {
    PRODUCT_SCOPE_PUBLISHED  = 0, ///APP上只能看到已发布的产品。默认取此值。
    PRODUCT_SCOPE_ALL,///APP上可以看到所有的产品（包括已发布的跟未发布的），一般在设备调试阶段使用。
} IMSProductScope;
 

@interface IMSIotSmart (scope)

/// 配置APP上能看到的产品的范围，详情见 `IMSProductScope`
/// @param scope 枚举值，详情见 `IMSProductScope`
- (void)configProductScope:(IMSProductScope)scope;

@end
