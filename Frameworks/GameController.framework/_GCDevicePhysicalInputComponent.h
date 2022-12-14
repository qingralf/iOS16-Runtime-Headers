/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCDevicePhysicalInputComponent : NSObject <GCDeviceComponent, _GCGamepadEventSink> {
    <GCDevice> * _device;
    id  _gamepadEventObservation;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    _GCDevicePhysicalInputBase * _physicalInput;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)capture;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 defaultPhysicalInput:(id)arg2;
- (void)setDevice:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setGamepadEventSource:(id)arg1;

@end
