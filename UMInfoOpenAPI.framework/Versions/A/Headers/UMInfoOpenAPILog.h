//
//  UMInfoOpenAPILog.h
//  Pods
//
//  Created by 梁彬 on 2017/7/11.
//  Copyright © 2017年 andy90s. All rights reserved.
//

#ifndef UMInfoOpenAPILog_h
#define UMInfoOpenAPILog_h

#ifdef LUMBERJACK
#define LOG_LEVEL_DEF ddLogLevel
#import <CocoaLumberjack/CocoaLumberjack.h>
#ifndef myLogLevel
#ifdef DEBUG
static const DDLogLevel ddLogLevel = DDLogLevelWarning;
#else
static const DDLogLevel ddLogLevel = DDLogLevelWarning;
#endif
#else
static const DDLogLevel ddLogLevel = myLogLevel;
#endif
#else
#ifdef DEBUG
    #define DDLogVerbose NSLog
    #define DDLogWarn NSLog
    #define DDLogInfo NSLog
    #define DDLogError NSLog
#else
    #define DDLogVerbose(...)
    #define DDLogWarn(...)
    #define DDLogInfo(...)
    #define DDLogError(...)
    #endif
#endif


#endif /* UMInfoOpenAPILog_h */
