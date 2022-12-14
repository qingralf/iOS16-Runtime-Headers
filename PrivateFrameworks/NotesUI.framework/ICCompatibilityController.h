/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICCompatibilityController : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)cacheDevices:(id)arg1 forAccount:(id)arg2;
- (id)cachedDevicesDateForAccount:(id)arg1;
- (id)cachedDevicesForAccount:(id)arg1;
- (void)devicesForAccount:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)fetchDevicesForAccount:(id)arg1;
- (id)init;
- (void)messageForAccount:(id)arg1 minimumNotesVersion:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)queue;

@end
