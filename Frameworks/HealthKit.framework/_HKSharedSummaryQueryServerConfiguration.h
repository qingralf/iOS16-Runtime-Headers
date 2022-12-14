/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKSharedSummaryQueryServerConfiguration : HKQueryServerConfiguration {
    NSString * _package;
    HKSharedSummaryTransaction * _transaction;
}

@property (nonatomic, copy) NSString *package;
@property (nonatomic, copy) HKSharedSummaryTransaction *transaction;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)package;
- (void)setPackage:(id)arg1;
- (void)setTransaction:(id)arg1;
- (id)transaction;

@end
