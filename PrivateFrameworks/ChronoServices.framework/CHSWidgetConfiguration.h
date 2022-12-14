/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
 */

@interface CHSWidgetConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSArray * _containerDescriptors;
    CHSWidgetMetricsSpecification * _metricsSpecification;
}

@property (nonatomic, readonly, copy) NSArray *containerDescriptors;
@property (nonatomic, readonly, copy) CHSWidgetMetricsSpecification *metricsSpecification;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)containerDescriptors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerDescriptors:(id)arg1 metricsSpecification:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)metricsSpecification;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
