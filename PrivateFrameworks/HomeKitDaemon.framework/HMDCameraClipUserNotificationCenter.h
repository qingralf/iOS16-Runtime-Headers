/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDCameraClipUserNotificationCenter : HMFObject <HMFLogging> {
    <HMDCameraBulletinBoard> * _bulletinBoard;
    <HMDFileManager> * _fileManager;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) <HMDCameraBulletinBoard> *bulletinBoard;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <HMDFileManager> *fileManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_firstAvailableHeroFrameURLForSignificantEvents:(id)arg1 cameraProfile:(id)arg2;
- (void)_insertClipSignificantEventBulletin:(id)arg1;
- (id)_writeHeroFrameData:(id)arg1;
- (id)bulletinBoard;
- (id)bulletinForClipSignificantEvent:(id)arg1 cameraProfile:(id)arg2;
- (id)fileManager;
- (id)initWithBulletinBoard:(id)arg1 workQueue:(id)arg2;
- (id)initWithBulletinBoard:(id)arg1 workQueue:(id)arg2 fileManager:(id)arg3;
- (void)postNotificationForBulletin:(id)arg1 significantEvent:(id)arg2;
- (void)postNotificationForSignificantEvent:(id)arg1 heroFrameData:(id)arg2 cameraProfile:(id)arg3;
- (void)removeCachedHeroFrameImages;
- (void)removeEventNotificationForClipWithUUID:(id)arg1;
- (void)removeEventNotificationsForCameraProfile:(id)arg1;
- (id)workQueue;

@end
