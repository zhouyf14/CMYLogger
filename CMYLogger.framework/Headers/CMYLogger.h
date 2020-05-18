//
//  CMYLogger.h
//  CMYLogger
//
//  Created by zyF on 2020/5/18.
//  Copyright © 2020 jojo. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for CMYLogger.
FOUNDATION_EXPORT double CMYLoggerVersionNumber;

//! Project version string for CMYLogger.
FOUNDATION_EXPORT const unsigned char CMYLoggerVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <CMYLogger/PublicHeader.h>

@interface CMYLogger : NSObject

+ (void)log;

+ (void)logNum:(NSInteger *)num;

@end
