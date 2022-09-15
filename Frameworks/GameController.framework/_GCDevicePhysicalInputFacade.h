/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCDevicePhysicalInputFacade : _GCDevicePhysicalInputView <GCDevicePhysicalInput, GCDevicePhysicalInputStateDiff> {
    _GCDevicePhysicalInputBase * _impl;
}

@property (readonly) GCPhysicalInputElementCollection *axes;
@property (readonly) GCPhysicalInputElementCollection *buttons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <GCDevice> *device;
@property (readonly) GCPhysicalInputElementCollection *dpads;
@property (copy) id /* block */ elementValueDidChangeHandler;
@property (readonly) GCPhysicalInputElementCollection *elements;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ inputStateAvailableHandler;
@property long long inputStateQueueDepth;
@property (readonly) double lastEventLatency;
@property (readonly) double lastEventTimestamp;
@property (readonly) Class superclass;
@property (readonly) GCPhysicalInputElementCollection *switches;

- (id)axes;
- (id)buttons;
- (id)capture;
- (long long)changeForElement:(id)arg1;
- (id)changedElements;
- (id)device;
- (id)dpads;
- (id /* block */)elementValueDidChangeHandler;
- (id)elements;
- (id)init;
- (id)initWith:(id)arg1 context:(id)arg2;
- (id /* block */)inputStateAvailableHandler;
- (long long)inputStateQueueDepth;
- (double)lastEventLatency;
- (double)lastEventTimestamp;
- (id)nextInputState;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setElementValueDidChangeHandler:(id /* block */)arg1;
- (void)setInputStateAvailableHandler:(id /* block */)arg1;
- (void)setInputStateQueueDepth:(long long)arg1;
- (id)switches;

@end