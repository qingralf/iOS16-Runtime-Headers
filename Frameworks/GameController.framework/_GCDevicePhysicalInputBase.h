/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCDevicePhysicalInputBase : NSObject <_GCDevicePhysicalInputViewState> {
    struct __CFArray { } * _additionalViews;
    <GCDevice> * _device;
    _GCDevicePhysicalInputElementsCollection * _elementCollection;
    unsigned long long  _elementCount;
    NSDictionary * _elementIndexByAlias;
    _GCDevicePhysicalInputFacade * _facade;
    _GCDevicePhysicalInputElementsArray * _indexedElementViews;
    id * _indexedElements;
    _GCDevicePhysicalInputStateTable * _viewProperties;
    _GCDevicePhysicalInputStateTable * _viewState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property <GCDevice> *device;
@property (readonly) unsigned long long hash;
@property (readonly) double lastEventLatency;
@property (readonly) double lastEventTimestamp;
@property (getter=isSnapshot, readonly) bool snapshot;
@property (readonly) Class superclass;

- (id)_initWithFacadeTemplate:(id)arg1 elementsTemplates:(id)arg2 context:(id)arg3;
- (void)dealloc;
- (id)device;
- (id)init;
- (bool)isSnapshot;
- (double)lastEventLatency;
- (double)lastEventTimestamp;
- (void)setDevice:(id)arg1;
- (id)view:(id)arg1 objectValueForSlot:(unsigned long long*)arg2;
- (unsigned long long)view:(id)arg1 primitiveValueForSlot:(unsigned long long*)arg2;
- (void)view:(id)arg1 setObjectValue:(id)arg2 forSlot:(unsigned long long*)arg3 policy:(unsigned long long)arg4;
- (void)view:(id)arg1 setPrimitiveValue:(unsigned long long)arg2 forSlot:(unsigned long long*)arg3;
- (id)view:(id)arg1 viewForSlot:(unsigned long long*)arg2;

@end