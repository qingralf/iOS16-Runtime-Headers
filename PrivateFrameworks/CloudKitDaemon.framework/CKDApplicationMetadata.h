/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDApplicationMetadata : NSObject {
    long long  _adopterProcessType;
    NSString * _applicationContainerPath;
    unsigned int  _clientSDKVersion;
    NSString * _containingBundleID;
    CKEntitlements * _entitlements;
    bool  _isClientMainBundleAppleExecutable;
}

@property (nonatomic) long long adopterProcessType;
@property (nonatomic, retain) NSString *applicationContainerPath;
@property (nonatomic) unsigned int clientSDKVersion;
@property (nonatomic, retain) NSString *containingBundleID;
@property (nonatomic, retain) CKEntitlements *entitlements;
@property (nonatomic) bool isClientMainBundleAppleExecutable;

- (void).cxx_destruct;
- (long long)adopterProcessType;
- (id)applicationContainerPath;
- (unsigned int)clientSDKVersion;
- (id)containingBundleID;
- (id)entitlements;
- (id)init;
- (bool)isClientMainBundleAppleExecutable;
- (void)setAdopterProcessType:(long long)arg1;
- (void)setApplicationContainerPath:(id)arg1;
- (void)setClientSDKVersion:(unsigned int)arg1;
- (void)setContainingBundleID:(id)arg1;
- (void)setEntitlements:(id)arg1;
- (void)setIsClientMainBundleAppleExecutable:(bool)arg1;

@end
