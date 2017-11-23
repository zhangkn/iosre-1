//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BSBusinessCommonItem, BSBusinessContactItem, BSBusinessProductItem;

@interface BSBusinessResultItem : NSObject
{
    unsigned int _type;
    unsigned long long _docId;
    BSBusinessContactItem *_contactItem;
    BSBusinessCommonItem *_commonItem;
    BSBusinessProductItem *_productItem;
}

+ (id)fromServerObj:(id)arg1;
@property(retain, nonatomic) BSBusinessProductItem *productItem; // @synthesize productItem=_productItem;
@property(retain, nonatomic) BSBusinessCommonItem *commonItem; // @synthesize commonItem=_commonItem;
@property(retain, nonatomic) BSBusinessContactItem *contactItem; // @synthesize contactItem=_contactItem;
@property(nonatomic) unsigned long long docId; // @synthesize docId=_docId;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)dealloc;

@end

