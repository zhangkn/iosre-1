//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSData, NSString, StoreWXaRedirectInfoItem;

@interface WCLocationInfo : NSObject <NSCoding>
{
    NSString *city;
    struct CLLocationCoordinate2D location;
    NSString *poiName;
    NSString *poiAddress;
    double poiScale;
    NSString *poiInfoUrl;
    NSString *poiClassifyId;
    int poiClassifyType;
    int poiClickableStatus;
    NSData *poiBuff;
    unsigned int showFlag;
    unsigned int showType;
    StoreWXaRedirectInfoItem *storeWXaRedirectInfoItem;
    NSString *poiUrl;
}

@property(retain, nonatomic) NSString *poiUrl; // @synthesize poiUrl;
@property(retain, nonatomic) StoreWXaRedirectInfoItem *storeWXaRedirectInfoItem; // @synthesize storeWXaRedirectInfoItem;
@property(nonatomic) unsigned int showType; // @synthesize showType;
@property(nonatomic) unsigned int showFlag; // @synthesize showFlag;
@property(retain, nonatomic) NSData *poiBuff; // @synthesize poiBuff;
@property(nonatomic) int poiClickableStatus; // @synthesize poiClickableStatus;
@property(nonatomic) int poiClassifyType; // @synthesize poiClassifyType;
@property(retain, nonatomic) NSString *poiClassifyId; // @synthesize poiClassifyId;
@property(retain, nonatomic) NSString *poiInfoUrl; // @synthesize poiInfoUrl;
@property(nonatomic) double poiScale; // @synthesize poiScale;
@property(retain, nonatomic) NSString *poiAddress; // @synthesize poiAddress;
@property(retain, nonatomic) NSString *poiName; // @synthesize poiName;
@property(nonatomic) struct CLLocationCoordinate2D location; // @synthesize location;
@property(retain, nonatomic) NSString *city; // @synthesize city;
- (void).cxx_destruct;
- (_Bool)isPoiInfoClickable;
- (_Bool)isLocationValid;
- (_Bool)isValidForShow;
- (_Bool)isPoiInfo;
- (id)getDisplayPOIAddress;
- (id)getDisplayCity;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

