/* Generated by RuntimeBrowser.
 */

@protocol SHWorker <NSObject>

@required

- (bool)isRunning;
- (bool)managesRecordingSession;
- (void)setWorkerDelegate:(id <SHWorkerDelegate>)arg1;
- (oneway void)stop;
- (double)timeRequiredToPerformWork;
- (<SHWorkerDelegate> *)workerDelegate;

@end
