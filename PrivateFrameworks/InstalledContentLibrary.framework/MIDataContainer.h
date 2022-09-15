/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/InstalledContentLibrary.framework/InstalledContentLibrary
 */

@interface MIDataContainer : MIContainer {
    int  _contentProtectionClass;
}

@property (nonatomic) int contentProtectionClass;

+ (id)dataContainerForExecutableBundle:(id)arg1 createIfNeeded:(bool)arg2 temporary:(bool)arg3 created:(bool*)arg4 error:(id*)arg5;

- (id)_oldCompatiblityLinkDestination;
- (int)contentProtectionClass;
- (void)makeSymlinkToBundleInContainerIfNeeded:(id)arg1;
- (void)setContentProtectionClass:(int)arg1;

@end