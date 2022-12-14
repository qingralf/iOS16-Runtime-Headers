/* Generated by RuntimeBrowser.
 */

@protocol PHATask <NSObject>

@required

- (bool)currentPlatformIsSupported;
- (NSString *)name;
- (double)period;
- (bool)runWithGraphManager:(PGManager *)arg1 progressReporter:(MAProgressReporter *)arg2 error:(id*)arg3;
- (bool)shouldRunWithGraphManager:(PGManager *)arg1;

@optional

- (unsigned long long)version;

@end
