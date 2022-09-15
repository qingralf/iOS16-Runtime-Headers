/* Generated by RuntimeBrowser.
 */

@protocol TSXKernelClockClient <NSObject>

@optional

- (void)didBeginClockGrandmasterChangeForClock:(TSXKernelClock *)arg1;
- (void)didBeginClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(TSXKernelClock *)arg3;
- (void)didChangeClockMasterForClock:(TSXKernelClock *)arg1;
- (void)didChangeLocalPortWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(TSXKernelClock *)arg3;
- (void)didChangeLockStateTo:(int)arg1 forClock:(TSXKernelClock *)arg2;
- (void)didEndClockGrandmasterChangeForClock:(TSXKernelClock *)arg1;
- (void)didEndClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(TSXKernelClock *)arg3;
- (void)didProcessSync:(TSXKernelClock *)arg1;
- (void)didResetClock:(TSXKernelClock *)arg1;
- (void)interruptedConnectionForClock:(TSXKernelClock *)arg1;
- (void)invalidatedConnectionForClock:(TSXKernelClock *)arg1;

@end