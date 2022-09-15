/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI
 */

@interface PinnedTabsManager : NSObject {
    WBCollectionConfiguration * _collectionConfiguration;
    NSHashTable * _observers;
    NSMutableArray * _pinnedTabs;
    NSMutableDictionary * _pinnedTabsByUUID;
    NSMutableArray * _privatePinnedTabs;
    NSMutableDictionary * _privatePinnedTabsByUUID;
    WBTabCollection * _tabCollection;
}

@property (nonatomic, readonly, copy) WBCollectionConfiguration *collectionConfiguration;
@property (nonatomic, readonly, copy) NSArray *pinnedTabs;
@property (nonatomic, readonly, copy) NSArray *privatePinnedTabs;
@property (nonatomic, readonly) WBTabCollection *tabCollection;

- (void).cxx_destruct;
- (id)_tabWithUUID:(id)arg1 isPrivate:(bool)arg2;
- (void)_updateCache;
- (void)addPinnedTabsObserver:(id)arg1;
- (void)appendTab:(id)arg1 isPrivate:(bool)arg2;
- (id)collectionConfiguration;
- (id)initWithBrowserState:(id)arg1 collectionConfiguration:(id)arg2;
- (void)moveTab:(id)arg1 toTabGroup:(id)arg2 afterTab:(id)arg3;
- (void)notifyObserversOfUpdatedPinnedTabsIsPrivate:(bool)arg1;
- (id)pinnedTabs;
- (id)privatePinnedTabs;
- (void)removePinnedTabsObserver:(id)arg1;
- (void)removeTabWithUUID:(id)arg1;
- (id)tabCollection;
- (void)updatePinnedTabWithUUID:(id)arg1 isPrivate:(bool)arg2 usingBlock:(id /* block */)arg3;
- (void)updatePinnedTabs:(bool)arg1 usingBlock:(id /* block */)arg2;

@end