/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKCloudStoreContainerDiagnostics : NSObject <NSSecureCoding> {
    bool  _isAccountManateeCapable;
    bool  _isDeviceManateeCapable;
    bool  _isEnabled;
    bool  _isManateeEnabled;
    bool  _isSetup;
    bool  _isSyncEnabled;
    NSString * _lastSyncDate;
    NSString * _status;
    NSString * _syncToken;
}

@property (nonatomic, readonly) bool isAccountManateeCapable;
@property (nonatomic, readonly) bool isDeviceManateeCapable;
@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, readonly) bool isManateeEnabled;
@property (nonatomic, readonly) bool isSetup;
@property (nonatomic, readonly) bool isSyncEnabled;
@property (nonatomic, readonly) NSString *lastSyncDate;
@property (nonatomic, readonly) NSString *status;
@property (nonatomic, readonly) NSString *syncToken;

+ (bool)supportsSecureCoding;
+ (id)turnedOff;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsEnabled:(bool)arg1 isSetup:(bool)arg2 status:(id)arg3 isSyncEnabled:(bool)arg4 syncToken:(id)arg5 lastSyncDate:(id)arg6 isAccountManateeCapable:(bool)arg7 isDeviceManateeCapable:(bool)arg8 isManateeEnabled:(bool)arg9;
- (bool)isAccountManateeCapable;
- (bool)isDeviceManateeCapable;
- (bool)isEnabled;
- (bool)isManateeEnabled;
- (bool)isSetup;
- (bool)isSyncEnabled;
- (id)lastSyncDate;
- (id)status;
- (id)syncToken;

@end
