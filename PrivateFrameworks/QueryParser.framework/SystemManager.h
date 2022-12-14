/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/QueryParser.framework/QueryParser
 */

@interface SystemManager : NSObject {
    NSObject<OS_dispatch_queue> * _assetsQueue;
    NSObject<OS_dispatch_queue> * _localeQueue;
    struct __CFLocale { } * _locked_currentLocale;
    struct __CFArray { } * _locked_currentPreferredLanguages;
    bool  _locked_hasUpdatedLocale;
    bool  _locked_hasUpdatedResources;
    NSMutableDictionary * _locked_optionalAssets;
    NSMutableDictionary * _locked_requiredAssets;
    int  _newNotifyToken;
    NSObject<OS_dispatch_queue> * _resourcesQueue;
    int  _updatedNotifyToken;
}

+ (id)defaultManager;

- (void)_updateLocale;
- (struct __CFLocale { }*)copyCurrentLocale;
- (struct __CFArray { }*)copyCurrentPreferredLanguages;
- (void)dealloc;
- (void)enumerateResourcesForLocale:(id)arg1 contentType:(id)arg2 contentName:(id)arg3 isUpdate:(bool)arg4 usingBlock:(id /* block */)arg5;
- (bool)hasResourcesForLocale:(id)arg1 contentType:(id)arg2 contentName:(id)arg3 resourceType:(unsigned int)arg4;
- (bool)hasUpdatedLocale;
- (bool)hasUpdatedResources;
- (id)init;
- (void)lockedUpdateAssets;
- (void)updateAssetsForLocale:(id)arg1 contentType:(id)arg2 contentName:(id)arg3 resourceType:(unsigned int)arg4;

@end
