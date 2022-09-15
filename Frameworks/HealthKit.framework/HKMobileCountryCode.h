/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKMobileCountryCode : NSObject {
    NSString * _ISOCode;
    NSString * _code;
    bool  _overridden;
}

@property (nonatomic, readonly, copy) NSString *ISOCode;
@property (nonatomic, readonly, copy) NSString *code;
@property (getter=isOverridden, nonatomic, readonly) bool overridden;
@property (nonatomic, readonly) long long provenance;

- (void).cxx_destruct;
- (id)ISOCode;
- (id)code;
- (id)description;
- (id)initWithMobileCountryCode:(id)arg1 ISOCode:(id)arg2 isOverridden:(bool)arg3;
- (bool)isOverridden;
- (long long)provenance;

@end