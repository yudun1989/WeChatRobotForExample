//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAWebViewPluginBase.h"

@interface WAWebViewPlugin_WeAppMsg : WAWebViewPluginBase
{
    CDUnknownBlockType _onAppMessage;
}

@property(copy, nonatomic) CDUnknownBlockType onAppMessage; // @synthesize onAppMessage=_onAppMessage;
- (void).cxx_destruct;
- (void)onCustomWeAppMessage:(id)arg1;
- (void)getWeAppMessage:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;

@end

