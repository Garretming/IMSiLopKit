//
//  ALBBOpenAccountRegionModel.h
//  ALBBOpenAccountSDK
//
//  Copyright © 2019 alibaba. All rights reserved.
//

#ifndef ALBBOpenAccountRegionModel_h
#define ALBBOpenAccountRegionModel_h

NS_ASSUME_NONNULL_BEGIN
@interface ALBBOpenAccountRegionModel: NSObject
//mqtt 地址
@property (nonatomic ,strong) NSString *mqttEndpoint;
//IoT 网关地址
@property (nonatomic ,strong) NSString *apiGatewayEndpoint;
//OA 的阿里云网关地址
@property (nonatomic ,strong) NSString *oaApiGatewayEndpoint;
    
@property (nonatomic, strong) NSString *regionEnglishName;

@property (nonatomic, strong) NSString *pushChannelEndpoint;

@property (nonatomic, strong) NSString *regionId;

@property (nonatomic, strong) NSString *shortRegionId;

@end

NS_ASSUME_NONNULL_END

#endif /* ALBBOpenAccountRegionModel_h */
