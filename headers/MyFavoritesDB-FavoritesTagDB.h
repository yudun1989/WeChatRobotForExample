//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MyFavoritesDB.h"

@interface MyFavoritesDB (FavoritesTagDB)
- (void)willRepairDB:(unsigned int)arg1 needCatch:(_Bool *)arg2;
- (id)getTagItemListByTags:(id)arg1;
- (id)getTagsByLocalFavId:(unsigned int)arg1;
- (id)getDistinctTags;
- (_Bool)deleteTagsByLocalFavId:(unsigned int)arg1;
- (_Bool)insertItemTag:(id)arg1;
@end

