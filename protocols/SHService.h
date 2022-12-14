/* Generated by RuntimeBrowser.
 */

@protocol SHService <NSObject>

@required

+ (void)initializeGlobalServiceState;
+ (NSString *)machServiceName;

- (bool)isRunning;
- (<SHServiceDelegate> *)serviceDelegate;
- (void)setServiceDelegate:(id <SHServiceDelegate>)arg1;
- (bool)shouldStartWorker:(id <SHWorker>)arg1;
- (void)stop;
- (NSArray *)workers;

@end
