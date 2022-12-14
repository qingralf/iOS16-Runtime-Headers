/* Generated by RuntimeBrowser.
 */

@protocol PKProxyFactory <NSObject>

@required

- (<PKApplicationProxy> *)applicationProxyForBundleURL:(NSURL *)arg1;
- (<PKApplicationWorkspaceProxy> *)defaultApplicationWorkspace;
- (<PKExtensionPointProxy> *)extensionPointForIdentifier:(NSString *)arg1 platform:(NSNumber *)arg2;
- (bool)hasLSDatabaseAccess;
- (<PKPlugInProxy> *)plugInKitProxyForURL:(NSURL *)arg1;
- (<PKPlugInProxy> *)plugInKitProxyForUUID:(NSUUID *)arg1;
- (PKEnumerator *)plugInRecordEnumerator;
- (PKEnumerator *)plugInRecordEnumeratorWithExtensionPointName:(NSString *)arg1 platform:(unsigned int)arg2;
- (<PKPlugInRecordProxy> *)plugInRecordForIdentifier:(NSString *)arg1;
- (<PKPlugInRecordProxy> *)plugInRecordForUUID:(NSUUID *)arg1;

@end
