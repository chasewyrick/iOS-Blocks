/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBIcon.h"
#import "SBLeafIconDataSource-Protocol.h"

@class NSMutableSet, NSString;

@interface SBLeafIcon : SBIcon <NSCopying>
{
    NSString *_leafIdentifier;
    NSString *_applicationBundleID;
    NSMutableSet *_dataSources;
    id <SBLeafIconDataSource> _activeDataSource;
    id <SBLeafIconDataSource> _dataSourceAtUninstallation;
}

- (id)nodeIdentifier;
- (void)launchFromLocation:(int)arg1;
- (BOOL)launchEnabled;
- (void)completeUninstall;
- (void)setUninstalled;
- (BOOL)allowsUninstall;
- (BOOL)isRecentlyUpdated;
- (int)accessoryTypeForLocation:(int)arg1;
- (id)accessoryTextForLocation:(int)arg1;
- (id)badgeNumberOrString;
- (BOOL)progressIsPaused;
- (float)progressPercent;
- (int)progressState;
- (BOOL)iconAppearsInNewsstand;
- (BOOL)canEllipsizeLabel;
- (id)displayName;
- (id)getGenericIconImage:(int)arg1;
- (id)generateIconImage:(int)arg1;
- (void)_noteDataSourceDidInvalidateNotification:(id)arg1;
- (void)_noteActiveDataSourceDidGenerateImageNotification:(id)arg1;
- (void)_noteActiveDataSourceDidChangeNotification:(id)arg1;
- (void)_noteActiveDataSourceDidGenerateIconFormat:(int)arg1;
- (void)_noteActiveDataSourceDidChangeAndReloadIcon:(BOOL)arg1;
- (id)activeDataSource;
- (void)removeIconDataSourcesOfClass:(Class)arg1;
- (void)removeIconDataSource:(id)arg1;
- (void)addIconDataSource:(id)arg1;
- (void)_updateActiveDataSource;
- (BOOL)matchesRepresentation:(id)arg1;
- (id)representation;
- (id)applicationBundleID;
- (id)leafIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithLeafIdentifier:(id)arg1 applicationBundleID:(id)arg2;
- (id)init;

@end

