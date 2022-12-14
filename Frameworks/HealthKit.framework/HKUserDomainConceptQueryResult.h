/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKUserDomainConceptQueryResult : NSObject <NSCopying, NSSecureCoding> {
    HKUserDomainConcept * _concept;
    long long  _rawAnchor;
}

@property (nonatomic, readonly, copy) HKQueryAnchor *anchor;
@property (nonatomic, readonly, copy) HKUserDomainConcept *concept;
@property (nonatomic, readonly) long long rawAnchor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchor;
- (id)concept;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConcept:(id)arg1 rawAnchor:(long long)arg2;
- (long long)rawAnchor;

@end
