//
//  RNScreenshotNotification.h
//  RNScreenshotNotification
//
//  Created by wangzixiao on 16/11/24.
//  Copyright © 2016年 WangZiXiao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#else
#import "RCTBridgeModule.h"
#endif

#if __has_include(<React/RCTBridge.h>)
#import <React/RCTBridge.h>
#else
#import "RCTBridge.h"
#endif

@interface RNScreenshotNotification : NSObject <RCTBridgeModule>

@end
