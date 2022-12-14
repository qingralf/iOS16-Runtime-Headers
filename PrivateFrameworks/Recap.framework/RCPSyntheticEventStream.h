/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Recap.framework/Recap
 */

@interface RCPSyntheticEventStream : RCPEventStream <RCPCrownEventStreamComposer, RCPEventStreamComposer, RCPFluidSwipeGesturesEventStreamComposer, RCPNaturalInputCollectionEventStreamComposer, RCPPointerEventStreamComposer> {
    unsigned long long  _activePointCount;
    struct { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; unsigned char x5; unsigned int x6; bool x7; } * _activePoints;
    double  _currentTimeOffset;
    long long  _generationCount;
    struct CGSize { 
        double width; 
        double height; 
    }  _gsScreenPointSize;
    double  _gsScreenScaleFactor;
    RCPPointerTrackingChildEventStream * _pointerChildEventStream;
    double  _pointerFrequency;
    NSMutableArray * _processingEventBuffer;
    struct CGSize { 
        double width; 
        double height; 
    }  _screenSize;
    RCPEventSenderProperties * _senderProperties;
    long long  _touchFrequency;
    unsigned int  _transducerType;
}

@property (nonatomic) unsigned long long activePointCount;
@property (nonatomic, readonly) struct { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; unsigned char x5; unsigned int x6; bool x7; }*activePoints;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double defaultPressure;
@property (nonatomic, readonly) double defaultRadius;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { double x1; double x2; } gsScreenPointSize;
@property (nonatomic) double gsScreenScaleFactor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RCPPointerTrackingChildEventStream *pointerChildEventStream;
@property (nonatomic) double pointerFrequency;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } screenSize;
@property (nonatomic, retain) RCPEventSenderProperties *senderProperties;
@property (readonly) Class superclass;
@property (nonatomic) long long touchFrequency;
@property (nonatomic) unsigned int transducerType;

+ (id)eventStreamWithCLIArguments:(id)arg1;
+ (id)eventStreamWithEventActions:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_addIOHIDEventToProcessingBuffer:(struct __IOHIDEvent { }*)arg1;
- (struct __IOHIDEvent { }*)_createIOHIDGameControllerEventForDpadButton:(long long)arg1;
- (struct __IOHIDEvent { }*)_createIOHIDWithEventType:(long long)arg1;
- (struct __IOHIDEvent { }*)_createIOSButtonHIDEventWithButtonType:(long long)arg1 down:(bool)arg2;
- (struct __IOHIDEvent { }*)_createIOSButtonHIDEventWithPage:(unsigned int)arg1 usage:(unsigned int)arg2 down:(bool)arg3;
- (unsigned long long)_currentMachTime;
- (void)_delayBetweenMove:(int)arg1 elapsedTime:(double)arg2;
- (void)_dragWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 mask:(unsigned long long)arg2 endPoint:(struct CGPoint { double x1; double x2; })arg3 mask:(unsigned long long)arg4 duration:(double)arg5 tapAndWait:(double)arg6 lift:(bool)arg7;
- (void)_finalizeHomeButtonEvents;
- (void)_finalizePointerButtonMasks;
- (void)_finalizeProcessingEventBuffer;
- (void)_flickWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3;
- (void)_initScreenProperties;
- (void)_initScreenPropertiesForScreen:(id)arg1;
- (bool)_isEdgePoint:(struct CGPoint { double x1; double x2; })arg1 getMask:(unsigned int*)arg2;
- (void)_knobEventForOffset:(struct CGVector { double x1; double x2; })arg1 buttonMask:(unsigned int)arg2 oldButtonMask:(unsigned int)arg3;
- (void)_moveLastTouchPoint:(struct CGPoint { double x1; double x2; })arg1 eventMask:(unsigned long long)arg2;
- (struct CGPoint { double x1; double x2; })_normalizePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct __IOHIDEvent { }*)_parentZeroPointerEvent;
- (void)_pressButtonEventForIndex:(long long)arg1 down:(bool)arg2;
- (void)_setMajorRadiusForAllPoints:(double)arg1;
- (void)_setPressureForAllPoints:(double)arg1;
- (id)_splitStringIntoArrayOfCharacters:(id)arg1;
- (void)_tap:(struct CGPoint { double x1; double x2; })arg1 withPressure:(double)arg2;
- (void)_touchDownAtPoints:(struct CGPoint { double x1; double x2; }*)arg1 touchCount:(unsigned long long)arg2 pressure:(double)arg3 radius:(double)arg4 edgeMaskOptions:(const struct { unsigned int x1; bool x2; }*)arg5;
- (void)_updateTouchPoints:(struct CGPoint { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
- (void)_withPointerEventStreamAtFrequency:(long long)arg1 perform:(id /* block */)arg2;
- (void)_wrapInPointerParentAndAddToProcessingBuffer:(struct __IOHIDEvent { }*)arg1;
- (unsigned long long)activePointCount;
- (struct { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; unsigned char x5; unsigned int x6; bool x7; }*)activePoints;
- (void)advanceTime:(double)arg1;
- (void)beginButtonPressWithPage:(unsigned long long)arg1 usage:(unsigned long long)arg2;
- (void)composeDockGestureInMotion:(unsigned short)arg1 frequency:(unsigned long long)arg2 actionBlock:(id /* block */)arg3;
- (void)composeDockGestureOfFlavor:(unsigned short)arg1 motion:(unsigned short)arg2 frequency:(unsigned long long)arg3 actionBlock:(id /* block */)arg4;
- (void)composeNavigationGestureInMotion:(unsigned short)arg1 frequency:(unsigned long long)arg2 actionBlock:(id /* block */)arg3;
- (void)composeWithSender:(id)arg1 actionBlock:(id /* block */)arg2;
- (void)dealloc;
- (double)defaultPressure;
- (double)defaultRadius;
- (void)doubleFingerTap:(struct CGPoint { double x1; double x2; })arg1;
- (void)doubleTap:(struct CGPoint { double x1; double x2; })arg1;
- (void)dragWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3;
- (void)dragWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3 tapAndWait:(double)arg4 lift:(bool)arg5;
- (void)dragWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 mask:(unsigned long long)arg2 endPoint:(struct CGPoint { double x1; double x2; })arg3 mask:(unsigned long long)arg4 duration:(double)arg5;
- (void)edgeOrb:(struct CGPoint { double x1; double x2; })arg1;
- (void)edgeOrbSwipe:(struct CGPoint { double x1; double x2; })arg1 withEndLocation:(struct CGPoint { double x1; double x2; })arg2 withDuration:(double)arg3;
- (void)endButtonPressWithPage:(unsigned long long)arg1 usage:(unsigned long long)arg2;
- (void)flipRingerSwitchToValue:(bool)arg1;
- (struct CGSize { double x1; double x2; })gsScreenPointSize;
- (double)gsScreenScaleFactor;
- (id)init;
- (void)knobNudge:(struct CGVector { double x1; double x2; })arg1 buttonMask:(unsigned int)arg2 duration:(double)arg3;
- (void)liftUp:(struct CGPoint { double x1; double x2; })arg1;
- (void)liftUp:(struct CGPoint { double x1; double x2; })arg1 touchCount:(unsigned long long)arg2;
- (void)liftUpActivePointsByIndex:(id)arg1;
- (void)liftUpAtAllActivePoints;
- (void)liftUpAtAllActivePointsWithEventType:(long long)arg1;
- (void)liftUpAtPoints:(struct CGPoint { double x1; double x2; }*)arg1 touchCount:(unsigned long long)arg2;
- (void)moveToPoint:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2;
- (void)moveToPoints:(struct CGPoint { double x1; double x2; }*)arg1 touchCount:(unsigned long long)arg2 duration:(double)arg3;
- (void)moveToPoints:(struct CGPoint { double x1; double x2; }*)arg1 touchCount:(unsigned long long)arg2 pressure:(double)arg3 duration:(double)arg4;
- (void)moveToPoints:(struct CGPoint { double x1; double x2; }*)arg1 touchCount:(unsigned long long)arg2 pressure:(double)arg3 duration:(double)arg4 radius:(double)arg5;
- (void)multifingerDragWithPointArray:(struct CGPoint { double x1; double x2; }*)arg1 numPoints:(unsigned long long)arg2 duration:(double)arg3 numFingers:(unsigned long long)arg4;
- (void)peekAndPop:(struct CGPoint { double x1; double x2; })arg1 commit:(bool)arg2 duration:(double)arg3;
- (void)pinchCloseWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3;
- (void)pinchOpenWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3;
- (void)pointerBeginPressingButton:(long long)arg1;
- (id)pointerChildEventStream;
- (void)pointerDiscreteGesture:(id)arg1 duration:(double)arg2 frequency:(long long)arg3;
- (void)pointerDiscreteScroll:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2;
- (void)pointerDiscreteScroll:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2 frequency:(long long)arg3;
- (void)pointerEndPressingButton:(long long)arg1;
- (double)pointerFrequency;
- (void)pointerMoveByDelta:(struct CGVector { double x1; double x2; })arg1 duration:(double)arg2;
- (void)pointerMoveDelta:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2 frequency:(long long)arg3;
- (void)pointerMoveFromOriginPoint:(struct CGPoint { double x1; double x2; })arg1 toDestinationPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3 frequency:(long long)arg4;
- (void)pointerMoveToPoint:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2;
- (void)pointerPhasedScroll:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2;
- (void)pointerPhasedScroll:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2 frequency:(long long)arg3;
- (void)pointerRotation:(double)arg1 duration:(double)arg2 frequency:(long long)arg3;
- (void)pointerScale:(double)arg1 duration:(double)arg2 frequency:(long long)arg3;
- (void)pointerSetAbsolutePosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)pointerTranslatation:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2 frequency:(long long)arg3;
- (void)pressButtons:(id)arg1 duration:(double)arg2;
- (void)pressButtonsWithPages:(id)arg1 usages:(id)arg2 duration:(double)arg3;
- (void)pressDiscreteGameControllerButton:(long long)arg1 duration:(double)arg2;
- (void)rotate:(struct CGPoint { double x1; double x2; })arg1 withRadius:(double)arg2 rotation:(double)arg3 duration:(double)arg4 touchCount:(unsigned long long)arg5;
- (void)rotateCrown:(double)arg1 direction:(long long)arg2 duration:(double)arg3;
- (struct CGSize { double x1; double x2; })screenSize;
- (void)sendFlickWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3;
- (void)sendUnicodeString:(id)arg1;
- (void)sendUnicodeString:(id)arg1 synthesizePerCharacterEvents:(bool)arg2 durationBetweenEvents:(double)arg3;
- (void)sendUnicodeStringByCharacters:(id)arg1 durationBetweenEvents:(double)arg2;
- (id)senderProperties;
- (void)setActivePointCount:(unsigned long long)arg1;
- (void)setGsScreenPointSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setGsScreenScaleFactor:(double)arg1;
- (void)setPointerChildEventStream:(id)arg1;
- (void)setPointerFrequency:(double)arg1;
- (void)setSenderProperties:(id)arg1;
- (void)setTouchFrequency:(long long)arg1;
- (void)setTransducerType:(unsigned int)arg1;
- (void)stylusBarrelDoubleTap;
- (void)tap:(struct CGPoint { double x1; double x2; })arg1;
- (void)tapToWakeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)taps:(unsigned long long)arg1 location:(struct CGPoint { double x1; double x2; })arg2 withNumberOfTouches:(unsigned long long)arg3;
- (void)tapsNoLift:(unsigned long long)arg1 location:(struct CGPoint { double x1; double x2; })arg2 withNumberOfTouches:(unsigned long long)arg3;
- (void)touchDown:(struct CGPoint { double x1; double x2; })arg1;
- (void)touchDown:(struct CGPoint { double x1; double x2; })arg1 touchCount:(unsigned long long)arg2;
- (void)touchDownAtPoints:(struct CGPoint { double x1; double x2; }*)arg1 touchCount:(unsigned long long)arg2;
- (void)touchDownAtPoints:(struct CGPoint { double x1; double x2; }*)arg1 touchCount:(unsigned long long)arg2 pressure:(double)arg3;
- (void)touchDownAtPoints:(struct CGPoint { double x1; double x2; }*)arg1 touchCount:(unsigned long long)arg2 pressure:(double)arg3 radius:(double)arg4;
- (long long)touchFrequency;
- (double)touchMoveInterval;
- (void)touchTapDown:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned int)transducerType;
- (void)withExclusiveChildStream:(id)arg1 perform:(id /* block */)arg2;

@end
