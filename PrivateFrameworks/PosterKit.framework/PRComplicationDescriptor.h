/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit
 */

@interface PRComplicationDescriptor : NSObject <NSCopying, NSSecureCoding> {
    ATXComplication * _suggestedComplication;
    NSString * _uniqueIdentifier;
    CHSWidget * _widget;
}

@property (nonatomic, readonly) bool hasMatchingDescriptor;
@property (nonatomic, retain) ATXComplication *suggestedComplication;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;
@property (nonatomic, retain) CHSWidget *widget;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)PRSWidget;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasMatchingDescriptor;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPRSWidget:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 widget:(id)arg2 suggestedComplication:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)layoutElement;
- (void)setSuggestedComplication:(id)arg1;
- (void)setWidget:(id)arg1;
- (id)suggestedComplication;
- (id)uniqueIdentifier;
- (id)widget;
- (id)widgetDescriptor;

@end