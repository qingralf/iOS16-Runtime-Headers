/* Generated by RuntimeBrowser.
 */

@protocol HMDLocalElectionMeshControllerDelegate <NSObject>

@required

- (void)meshControllerDidElectLeader:(id <HMDLocalElectionMeshController>)arg1;
- (void)meshControllerDidReceivePingFromLeader:(id <HMDLocalElectionMeshController>)arg1;
- (void)meshControllerDidStartElection:(id <HMDLocalElectionMeshController>)arg1;
- (void)meshControllerDidUpdatesNodes:(id <HMDLocalElectionMeshController>)arg1;

@end
