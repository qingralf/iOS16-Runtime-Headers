/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSAccountDeviceInfoResult : NSObject {
    ACAccount * _account;
    NSDictionary * _rawResult;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) NSNumber *isBundleOwner;
@property (nonatomic, readonly) NSDictionary *rawResult;

- (void).cxx_destruct;
- (id)account;
- (id)description;
- (id)initWithAccount:(id)arg1 responseDictionary:(id)arg2;
- (id)isBundleOwner;
- (id)rawResult;

@end
