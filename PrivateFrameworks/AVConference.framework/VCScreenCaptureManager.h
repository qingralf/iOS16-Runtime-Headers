/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCScreenCaptureManager : NSObject {
    PAAccessInterval * _accessInterval;
    VCScreenShare * _currentActiveScreenShare;
    NSMutableArray * _screenCaptureClients;
    NSObject<OS_dispatch_queue> * _xpcCommandQueue;
}

+ (id)sharedManager;

- (void)dealloc;
- (void)endPrivacyAccountingInterval;
- (id)getErrorDictionaryFromError:(id)arg1;
- (id)init;
- (void)registerBlocksForService;
- (void)screenCaptureStartFor:(id)arg1 didSucceed:(bool)arg2 withError:(id)arg3;
- (void)screenCaptureStopFor:(id)arg1 didSucceed:(bool)arg2 withError:(id)arg3;
- (id)screenShareDictionary:(id)arg1;
- (void)startPrivacyAccountingInternval;

@end
