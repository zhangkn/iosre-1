//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSStreamDelegate.h"

@class NSData, NSInputStream, NSObject<QBPostDataProtocol>, NSString;

@protocol QBPostDataProtocol <NSStreamDelegate>
@property long long randomString;
@property _Bool dataReady;
@property(nonatomic) int dataPostType;
- (unsigned long long)dataSize;
- (_Bool)shouldUseStreamToSendData;
- (NSInputStream *)createInputStreamForPost;
- (NSData *)finalPostData;

@optional
@property(readonly) NSString *filePath;
@property(readonly) unsigned long long fileSize;
- (void)fillDataFromAnotherInstance:(NSObject<QBPostDataProtocol> *)arg1;
- (NSString *)contentInfoString;
- (NSString *)contentBoundaryString;
- (NSData *)contentData;
@end

