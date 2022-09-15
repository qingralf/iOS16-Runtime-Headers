/* Generated by RuntimeBrowser.
 */

@protocol CSVTUIAudioSession

@required

- (unsigned long long)audioSource;
- (float)averagePower;
- (bool)hasAudioRoute;
- (bool)hasCorrectAudioRoute;
- (bool)isRecording;
- (bool)prepareRecord;
- (void)releaseAudioSession;
- (void)resetEndPointer;
- (void)setDelegate:(id <CSVTUIAudioSessionDelegate>)arg1;
- (void)setEndpointerDelegate:(id <Endpointer>)arg1;
- (bool)startRecording;
- (void)stopRecording;
- (void)updateAudioRecorderForTrainingDevice:(unsigned long long)arg1 deviceUUIDs:(NSArray *)arg2;
- (void)updateMeters;

@end