/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
 */

@interface CATapDescription : NSObject {
    NSString * _UUID;
    bool  _isAMixdown;
    bool  _isExclusive;
    bool  _isMono;
    NSString * _name;
    NSArray * _processes;
}

@property (retain) NSString *UUID;
@property bool isAMixdown;
@property bool isExclusive;
@property (retain) NSString *name;

- (void).cxx_destruct;
- (id)UUID;
- (id)generateUID;
- (id)getProcesses;
- (id)initMonoGlobalTapButExcludeProcesses:(id)arg1;
- (id)initMonoMixdownOfProcessesIDs:(id)arg1;
- (id)initStereoGlobalTapButExcludeProcesses:(id)arg1;
- (id)initStereoMixdownOfProcessesIDs:(id)arg1;
- (id)initWithActiveStreamsForProcessDevicePairs:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithProcessDevicePairs:(id)arg1;
- (bool)isAMixdown;
- (bool)isExclusive;
- (bool)isMono;
- (id)name;
- (void)setIsAMixdown:(bool)arg1;
- (void)setIsExclusive:(bool)arg1;
- (void)setIsMono:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setProcesses:(id)arg1;
- (void)setUUID:(id)arg1;

@end