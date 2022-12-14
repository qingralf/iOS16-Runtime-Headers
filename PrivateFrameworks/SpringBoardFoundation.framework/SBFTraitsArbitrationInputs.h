/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFTraitsArbitrationInputs : NSObject <BSDescriptionProviding, NSCopying> {
    SBFTraitsArbitrationDeviceOrientationInputs * _deviceOrientationInputs;
    SBFTraitsArbitrationInterfaceIdiomInputs * _interfaceIdiomInputs;
    SBFTraitsArbitrationKeyboardInputs * _keyboardInputs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) SBFTraitsArbitrationDeviceOrientationInputs *deviceOrientationInputs;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) SBFTraitsArbitrationInterfaceIdiomInputs *interfaceIdiomInputs;
@property (nonatomic, readonly, copy) SBFTraitsArbitrationKeyboardInputs *keyboardInputs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)deviceOrientationInputs;
- (id)initWithInterfaceIdiomInputs:(id)arg1 deviceOrientationInputs:(id)arg2 keyboardInputs:(id)arg3;
- (id)interfaceIdiomInputs;
- (id)keyboardInputs;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
