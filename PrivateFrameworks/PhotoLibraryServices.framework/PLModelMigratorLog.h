/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLModelMigratorLog : NSObject {
    NSDateFormatter * _dateFormatter;
}

+ (id)new;
+ (id)openLoggerAtURL:(id)arg1 logRotate:(bool)arg2;
+ (id)setup;

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)init;
- (id)initWithLogFileURL:(id)arg1 logRotate:(bool)arg2;
- (void)logWithPack:(struct os_log_pack_s { unsigned long long x1; struct timespec { long long x_2_1_1; long long x_2_1_2; } x2; void *x3; void *x4; char *x5; unsigned char x6[0]; }*)arg1 fromCodeLocation:(struct { char *x1; int x2; })arg2 type:(unsigned char)arg3;

@end