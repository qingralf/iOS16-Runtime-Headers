/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmbeddedDataReset.framework/EmbeddedDataReset
 */

@interface DDRResetOptions : NSObject <NSSecureCoding> {
    bool  _disallowProximitySetup;
    bool  _eraseDataPlan;
    bool  _hideProgress;
}

@property (nonatomic) bool disallowProximitySetup;
@property (nonatomic) bool eraseDataPlan;
@property (nonatomic) bool hideProgress;

+ (bool)supportsSecureCoding;

- (bool)disallowProximitySetup;
- (void)encodeWithCoder:(id)arg1;
- (bool)eraseDataPlan;
- (bool)hideProgress;
- (id)initWithCoder:(id)arg1;
- (void)setDisallowProximitySetup:(bool)arg1;
- (void)setEraseDataPlan:(bool)arg1;
- (void)setHideProgress:(bool)arg1;

@end