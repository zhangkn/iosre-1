//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "CameraScannerViewDelegate.h"
#import "IUiUtilExt.h"
#import "UINavigationControllerDelegate.h"

@class NSString;

@interface NewQRCodeScanner : MMUIView <UINavigationControllerDelegate, CameraScannerViewDelegate, IUiUtilExt>
{
    _Bool oneDMode;
    _Bool decoding;
    _Bool hasInit;
    _Bool _rotateImage;
    struct CGRect cropRect;
    NSString *_resultData;
    NSString *_resultType;
    char *_sendImage;
    basic_string_a490aa4c _decodeData;
    basic_string_a490aa4c _decodeType;
    basic_string_a490aa4c _decodeCharset;
    struct QBAR_REPORT_MSG _reportMsg;
    struct QBar *_qbar;
    struct QBAR_QRCODE_INFO _qrcodeInfo;
    struct timeval _startTime;
    int scanCodeType;
    unsigned int _totalFrames;
    unsigned int _totalCostTime;
    unsigned int _succCostTime;
    unsigned int _retryTimes;
    unsigned int _decodeStat;
    unsigned int _dataLength;
    unsigned int _qrCodeVersion;
    unsigned int _pyramidLv;
    unsigned int _isSupportWXCode;
    id <NewQRCodeScannerDelegate> _delegate;
    NSString *_resolutionRatio;
    NSString *_typeName;
    NSString *_charSet;
    NSString *_binarizerMethod;
}

@property(readonly, nonatomic) unsigned int isSupportWXCode; // @synthesize isSupportWXCode=_isSupportWXCode;
@property(readonly, nonatomic) NSString *binarizerMethod; // @synthesize binarizerMethod=_binarizerMethod;
@property(readonly, nonatomic) unsigned int pyramidLv; // @synthesize pyramidLv=_pyramidLv;
@property(readonly, nonatomic) unsigned int qrCodeVersion; // @synthesize qrCodeVersion=_qrCodeVersion;
@property(readonly, nonatomic) NSString *charSet; // @synthesize charSet=_charSet;
@property(readonly, nonatomic) unsigned int dataLength; // @synthesize dataLength=_dataLength;
@property(readonly, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(readonly, nonatomic) unsigned int decodeStat; // @synthesize decodeStat=_decodeStat;
@property(readonly, nonatomic) unsigned int retryTimes; // @synthesize retryTimes=_retryTimes;
@property(readonly, nonatomic) NSString *resolutionRatio; // @synthesize resolutionRatio=_resolutionRatio;
@property(readonly, nonatomic) unsigned int succCostTime; // @synthesize succCostTime=_succCostTime;
@property(readonly, nonatomic) unsigned int totalCostTime; // @synthesize totalCostTime=_totalCostTime;
@property(readonly, nonatomic) unsigned int totalFrames; // @synthesize totalFrames=_totalFrames;
@property(nonatomic) __weak id <NewQRCodeScannerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) int scanCodeType; // @synthesize scanCodeType;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect;
@property(retain, nonatomic) NSString *resultType; // @synthesize resultType=_resultType;
@property(retain, nonatomic) NSString *resultData; // @synthesize resultData=_resultData;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stopCapture;
- (void)startCapture;
- (void)showScanResult;
- (_Bool)tryScanOnePicture:(id)arg1;
- (_Bool)scanOnePicture:(id)arg1;
- (void)notifyResult:(id)arg1 type:(id)arg2 version:(int)arg3;
- (void)notifyGotBarcode:(id)arg1;
- (id)getStringFromUTF8Bytes:(const char *)arg1 LENGTH:(int)arg2;
- (_Bool)doScanCode:(char *)arg1 Width:(int)arg2 Height:(int)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)notifyDelegate:(id)arg1 type:(id)arg2 version:(int)arg3;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 CodeType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

