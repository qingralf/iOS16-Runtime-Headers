/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAccountWebServiceAccountUserInfoResponse : PKAccountWebServiceResponse {
    bool  _billingAddressReadOnly;
    CNContact * _primaryUser;
    bool  _useLegacyUpdateAPI;
}

@property (nonatomic, readonly) bool billingAddressReadOnly;
@property (nonatomic, readonly) CNContact *primaryUser;
@property (nonatomic, readonly) bool useLegacyUpdateAPI;

+ (bool)jsonDataOptional;

- (void).cxx_destruct;
- (id)_stringValueFromDictionary:(id)arg1 key:(id)arg2 isOptional:(bool)arg3;
- (bool)billingAddressReadOnly;
- (id)initWithData:(id)arg1;
- (id)primaryUser;
- (bool)useLegacyUpdateAPI;

@end
