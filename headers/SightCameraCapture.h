//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "AVCaptureAudioDataOutputSampleBufferDelegate.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"
#import "MMQRCodeScannerDelegate.h"

@class AVCaptureAudioDataOutput, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMovieFileOutput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, MMQRCodeScanner, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface SightCameraCapture : MMObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, MMQRCodeScannerDelegate>
{
    _Bool m_isActive;
    _Bool m_isAudioActive;
    _Bool m_isFileOutputActive;
    AVCaptureSession *m_captureSession;
    AVCaptureDevice *m_inputCamera;
    AVCaptureDeviceInput *m_videoInput;
    AVCaptureDeviceInput *m_audioInput;
    AVCaptureVideoDataOutput *m_videoOutput;
    AVCaptureAudioDataOutput *m_audioOutput;
    AVCaptureMovieFileOutput *m_fileOutput;
    AVCaptureVideoPreviewLayer *m_previewLayer;
    struct CGSize m_targetVideoSize;
    double m_targetBitRate;
    int m_captureFrameRate;
    NSMutableArray *m_movieWriters;
    NSMutableArray *m_moviePreviewers;
    MMQRCodeScanner *m_QRCodeScanner;
    unsigned int m_scannerSkip;
    NSObject<OS_dispatch_queue> *m_callbackQueue;
    _Bool m_needCapturePicture;
    CDUnknownBlockType m_captureBlock;
    _Bool _activeQRScan;
    NSString *_preset;
}

@property(nonatomic) _Bool activeQRScan; // @synthesize activeQRScan=_activeQRScan;
@property(nonatomic) NSString *preset; // @synthesize preset=_preset;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=m_previewLayer;
@property(readonly, nonatomic) _Bool isAudioActive; // @synthesize isAudioActive=m_isAudioActive;
@property(nonatomic) _Bool isActive; // @synthesize isActive=m_isActive;
- (void).cxx_destruct;
- (void)initQRCodeScanner;
- (void)onQRCodeScanSuccess:(id)arg1 atPoint:(vector_78818218)arg2 originSize:(struct CGSize)arg3;
- (void)onNoQRCode;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setZoomLevel:(double)arg1;
- (void)zoom;
- (_Bool)canZoom;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (void)stopCameraCaptureAudioDevice;
- (_Bool)stopCameraCapture;
- (_Bool)startCameraCaptureAudioDevice;
- (void)startCameraCapture;
- (void)onCameraFailed;
- (_Bool)isRunning;
- (void)capturePreviewImageWithBlock:(CDUnknownBlockType)arg1;
- (void)removeMoviePreviewer:(id)arg1;
- (void)setMoviePreviwerOutputSizeAndSession:(id)arg1;
- (void)addMoviePreviewer:(id)arg1;
- (void)setPreviewReady;
- (void)removeFileWriter:(id)arg1;
- (void)removeMovieWriter:(id)arg1;
- (void)addMovieWriter:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)switchToFileOutputMode;
- (_Bool)isFileOutputMode;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
- (void)dealloc;
- (void)setCameraFrameRate;
- (_Bool)initCaptureSession:(id)arg1;
- (id)initWithSessionPreset:(id)arg1 cameraPosition:(long long)arg2 frameRate:(int)arg3;
- (id)initWithSessionPreset:(id)arg1 frameRate:(int)arg2;
- (id)initWithPreset:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

