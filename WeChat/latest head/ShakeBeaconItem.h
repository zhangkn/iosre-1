//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "PBCoding.h"

@class NSString;

@interface ShakeBeaconItem : NSObject <PBCoding, NSCoding, NSCopying>
{
    unsigned int createTime;
    unsigned int guideState;
    unsigned int wxaVersionType;
    NSString *title;
    NSString *content;
    NSString *url;
    NSString *headImgUrlSmall;
    NSString *headImgUrlBig;
    NSString *uuid;
    NSString *major;
    NSString *minor;
    double distance;
    unsigned long long shopId;
    NSString *wxaUsername;
    NSString *wxaPath;
}

+ (void)initialize;
@property(nonatomic) unsigned int wxaVersionType; // @synthesize wxaVersionType;
@property(copy, nonatomic) NSString *wxaPath; // @synthesize wxaPath;
@property(copy, nonatomic) NSString *wxaUsername; // @synthesize wxaUsername;
@property(nonatomic) unsigned long long shopId; // @synthesize shopId;
@property(nonatomic) unsigned int guideState; // @synthesize guideState;
@property(nonatomic) double distance; // @synthesize distance;
@property(copy, nonatomic) NSString *minor; // @synthesize minor;
@property(copy, nonatomic) NSString *major; // @synthesize major;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(copy, nonatomic) NSString *headImgUrlBig; // @synthesize headImgUrlBig;
@property(copy, nonatomic) NSString *headImgUrlSmall; // @synthesize headImgUrlSmall;
@property(copy, nonatomic) NSString *url; // @synthesize url;
@property(copy, nonatomic) NSString *content; // @synthesize content;
@property(copy, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

