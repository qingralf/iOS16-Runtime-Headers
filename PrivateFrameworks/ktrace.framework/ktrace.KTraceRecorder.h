/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ktrace.framework/ktrace
 */

@interface ktrace.KTraceRecorder : NSObject

+ (bool)ktraceRecord:(struct ktrace_recording { char *x1; char *x2; char *x3; struct __sFILE {} *x4; struct __sFILE {} *x5; id /* block */ x6; unsigned int x7; }*)arg1 args:(id)arg2 error:(id*)arg3;
+ (bool)listPlansToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 flags:(unsigned int)arg2 error:(id*)arg3;

- (id)init;

@end
