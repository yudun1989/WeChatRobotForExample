//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@protocol IMMQuartz2DDelegate <NSObject>
- (void)onTouchEnd:(struct CGPoint)arg1 canvasId:(unsigned int)arg2;
- (void)onTouchMove:(struct CGPoint)arg1 canvasId:(unsigned int)arg2;
- (void)onTouchBegin:(struct CGPoint)arg1 canvasId:(unsigned int)arg2;
- (UIImage *)getImage:(NSString *)arg1;
@end

