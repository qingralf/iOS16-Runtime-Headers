/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISheetPresentationControllerAppearance : NSObject <NSSecureCoding> {
    NSString * __largestUndimmedDetentIdentifier;
    bool  __prefersDimmingVisible;
}

@property (getter=_isDimmingAlwaysVisible, nonatomic, readonly) bool _dimmingAlwaysVisible;
@property (nonatomic, readonly) NSString *_largestUndimmedDetentIdentifier;
@property (nonatomic, readonly) bool _prefersDimmingVisible;

+ (id)appearancePreferringDimmingVisible:(bool)arg1;
+ (id)appearanceWithLargestUndimmedDetentIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isDimmingAlwaysVisible;
- (id)_largestUndimmedDetentIdentifier;
- (bool)_prefersDimmingVisible;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end