// Created by Satoshi Nakagawa.
// You can redistribute it and/or modify it under the Ruby's license or the GPL2.

#import <Cocoa/Cocoa.h>

@interface LogEventSinkBase : NSObject

+ (BOOL)isSelectorExcludedFromWebScript:(SEL)aSelector;
+ (NSString*)webScriptNameForSelector:(SEL)aSelector;
+ (BOOL)isKeyExcludedFromWebScript:(const char*)name;
+ (NSString*)webScriptNameForKey:(const char*)name;

@end
