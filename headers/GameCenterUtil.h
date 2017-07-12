//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface GameCenterUtil : MMObject
{
}

+ (id)getGameCenterWebViewController:(id)arg1 Url:(id)arg2;
+ (id)getDefaultImage;
+ (id)parseUrlQuery:(id)arg1;
+ (id)badgeFileNameWithLevel:(unsigned int)arg1;
+ (unsigned long long)actionTypeForGame:(id)arg1;
+ (id)parseHomepageDataWithResp:(id)arg1;
+ (id)trimmedStringWithString:(id)arg1;
+ (unsigned int)tagTypeWithString:(id)arg1;
+ (long long)trendTypeWithString:(id)arg1;
+ (id)getGameSettingCachePath;
+ (id)getGameSearchRecommendItemCachePath;
+ (id)getClassifyNewGameListCachePath:(id)arg1;
+ (id)getMoreGameListCachePath;
+ (id)getAllGameListDataPath;
+ (id)getUserSubscribeDataPath;
+ (id)getLibraryGameListCachePath;
+ (id)getGameAdsCountryInfoFilePath;
+ (id)getGameAdsFilePath;
+ (id)getGameMsgGiftInfoFilePath;
+ (id)getUserGameDetailFilePath:(id)arg1;
+ (id)getUserHomeDataPath;
+ (id)getUserCommonDataDir;
+ (id)getUserDataDir;
+ (id)getContactDisplayName:(id)arg1;

@end

