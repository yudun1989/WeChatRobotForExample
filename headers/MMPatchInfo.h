//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSData;

@interface MMPatchInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int jsVersion; // @dynamic jsVersion;
@property(nonatomic) unsigned int maxClientVersion; // @dynamic maxClientVersion;
@property(nonatomic) unsigned int minClientVersion; // @dynamic minClientVersion;
@property(nonatomic) unsigned int newClientVersion; // @dynamic newClientVersion;
@property(retain, nonatomic) NSData *obscureData; // @dynamic obscureData;
@property(retain, nonatomic) NSData *obscureDkey; // @dynamic obscureDkey;

@end

