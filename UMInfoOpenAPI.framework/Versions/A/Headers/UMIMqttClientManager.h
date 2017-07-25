//
//  UMIMqttClientManager.h
//  Pods
//
//  Created by 梁彬 on 2017/7/11.
//  Copyright © 2017年 andy90s. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UMIMqttClientManager : NSObject

@property (nonatomic,copy) NSString *subTopic;

@property (nonatomic,copy) NSString *pubTopic;

@property (nonatomic,copy) NSString *hostIP;

+ (instancetype)shareInstance;

@end
