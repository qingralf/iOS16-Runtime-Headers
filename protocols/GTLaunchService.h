/* Generated by RuntimeBrowser.
 */

@protocol GTLaunchService

@required

- (NSDictionary *)launchReplayerWithConfiguration:(NSDictionary *)arg1;
- (void)resumeTaskForPid:(int)arg1;
- (void)symbolicatorSignatureForPid:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)terminateTaskForPid:(int)arg1;

@end
