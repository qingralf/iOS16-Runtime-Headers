/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDCoordinationPrimaryMeshLogEvent : HMMLogEvent {
    bool  _didChangeLeader;
    bool  _didElectLeader;
    bool  _isInSecondaryMesh;
    bool  _isLeader;
}

@property bool didChangeLeader;
@property bool didElectLeader;
@property bool isInSecondaryMesh;
@property bool isLeader;

- (bool)didChangeLeader;
- (bool)didElectLeader;
- (bool)isInSecondaryMesh;
- (bool)isLeader;
- (void)setDidChangeLeader:(bool)arg1;
- (void)setDidElectLeader:(bool)arg1;
- (void)setIsInSecondaryMesh:(bool)arg1;
- (void)setIsLeader:(bool)arg1;

@end