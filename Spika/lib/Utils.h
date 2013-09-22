/*
 The MIT License (MIT)
 
 Copyright (c) 2013 Clover Studio Ltd. All rights reserved.
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 */

#import <Foundation/Foundation.h>
#import "Models.h"

#define IOS_NEWER_OR_EQUAL_TO_7 ( [ [ [ UIDevice currentDevice ] systemVersion ] floatValue ] >= 7.0 )

@interface Utils : NSObject

+(NSString *) urlencode:(NSString *)baseStr;
+(NSString *) urldecode:(NSString *)baseStr;
+(int) getDisplayWidth;
+(int) getDisplayHeight;
+(NSTimeInterval)getUTCFormateDate;
+(double)getUTCFormateDateInDouble;
+(long)getUTCFormateDateInLong;
+(NSString *)generateMessageInfoText:(ModelMessage *)message;
+(NSString *)generateMessageInfoTextWithCreated:(long)created withName:(NSString *)name withId:(NSString *)userId;

+(NSArray *) filterMessagesForApperaToWall:(NSArray *)messages;
+(NSArray *) mergeMessagesForApperaToWall:(NSArray *)newMessages oldMessages:(NSArray *)oldMessages;

+(NSDictionary *) generateAttachmentJsonForImage:(UIImage *)image fileName:(NSString *)fileName;
+(NSDictionary *) generateAttachmentJsonForVideo:(NSURL *)videoPathURL fileName:(NSString *)fileName;
+ (NSDictionary *)generateAttachmentJsonForVoice:(NSURL *)voicePathURL fileName:(NSString *)fileName;

+(NSString *)generateAttachmentURL:(NSDictionary *)data;

+(NSString*) formatDate:(NSDate*) date;

+(CGSize) fitSize:(CGSize)originalSize toSize:(CGSize)toSize;

+(NSString *)convertOnlineStatusKeyForDB:(NSString *) origStatus;
+(NSString *)convertOnlineStatusKeyForDisplay:(NSString *) origStatus;

+(NSString *)getKeyForLocalizedString:(NSString *)localizedString;

+(int) getKeyboardHeight;

+(int) heightByText:(NSString *)text sizeWithFont:(UIFont*)font constrainedToSize:(CGSize)size;


@end