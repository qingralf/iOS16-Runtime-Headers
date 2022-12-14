/* Generated by RuntimeBrowser.
 */

@protocol PADFaceActionSequenceClassifier <PADFrameMonitor>

@required

- (NSNumber *)assessment;
- (NSArray *)assessmentsFAC;
- (NSArray *)faceprintsID;
- (NSArray *)gestureSequence;
- (void)restartGesture;
- (void)setFACOption:(long long)arg1;
- (void)skipGesture:(bool)arg1;
- (void)skipRecordedGesture;
- (void)startLivenessCheck:(void *)arg1 gestureTypes:(void *)arg2 minNumberOfGestures:(void *)arg3 processSingleBuffer:(void *)arg4 onGestureStart:(void *)arg5 onIncorrectGestureDetected:(void *)arg6 onGesturesFinished:(void *)arg7; // needs 7 arg types, found 21: NSArray *, NSArray *, unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, void*, id /* block */, void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (NSArray *)timestampsFAC;
- (NSArray *)timestampsID;

@end
