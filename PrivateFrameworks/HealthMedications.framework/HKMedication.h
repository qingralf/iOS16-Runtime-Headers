/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthMedications.framework/HealthMedications
 */

@interface HKMedication : NSObject <NSCopying, NSSecureCoding> {
    bool  _hasActiveReminder;
    NSString * _name;
    NSString * _nickname;
    HKMedicationSchedule * _schedule;
    NSNumber * _strength;
    NSString * _unit;
}

@property (nonatomic, readonly) bool hasActiveReminder;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *nickname;
@property (nonatomic, readonly) HKMedicationSchedule *schedule;
@property (nonatomic, readonly, copy) NSNumber *strength;
@property (nonatomic, readonly, copy) NSString *unit;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasActiveReminder;
- (unsigned long long)hash;
- (id)init:(id)arg1 nickname:(id)arg2 hasActiveReminder:(bool)arg3 schedule:(id)arg4 unit:(id)arg5 strength:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)nickname;
- (id)schedule;
- (id)strength;
- (id)unit;

@end