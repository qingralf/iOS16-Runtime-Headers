/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCDevicePhysicalInputDirectionPadElement : _GCDevicePhysicalInputElement <GCDirectionPadElement> {
    unsigned long long  _downInputSlot;
    long long  _gamepadEventDownValueField;
    long long  _gamepadEventLeftValueField;
    long long  _gamepadEventRightValueField;
    long long  _gamepadEventUpValueField;
    unsigned long long  _leftInputSlot;
    unsigned long long  _rightInputSlot;
    unsigned long long  _upInputSlot;
    unsigned long long  _xAxisSlot;
    unsigned long long  _yAxisSlot;
}

@property (readonly) NSSet *aliases;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <GCLinearInput><GCPressedStateInput> *down;
@property (readonly) unsigned long long hash;
@property (readonly) <GCLinearInput><GCPressedStateInput> *left;
@property (readonly) NSString *localizedName;
@property (readonly) <GCLinearInput><GCPressedStateInput> *right;
@property (readonly) NSString *sfSymbolsName;
@property (readonly) Class superclass;
@property (readonly) <GCLinearInput><GCPressedStateInput> *up;
@property (readonly) <GCAxisInput> *xAxis;
@property (readonly) <GCAxisInput> *yAxis;

- (id)description;
- (id)down;
- (unsigned long long)handleGamepadEvent:(id)arg1 withTimestamp:(double)arg2;
- (id)initWith:(id)arg1 context:(id)arg2;
- (id)initWithIdentifier:(id)arg1 configuration:(id)arg2;
- (bool)isEqualToElement:(id)arg1;
- (id)left;
- (void)onCommitInvokeCallbacks:(unsigned long long)arg1;
- (id)right;
- (id)up;
- (id)xAxis;
- (id)yAxis;

@end
