/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRGroupKeyManagementClusterKeySetWriteParams : NSObject {
    MTRGroupKeyManagementClusterGroupKeySetStruct * _groupKeySet;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, retain) MTRGroupKeyManagementClusterGroupKeySetStruct *groupKeySet;
@property (nonatomic, retain) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)description;
- (id)groupKeySet;
- (id)init;
- (void)setGroupKeySet:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
