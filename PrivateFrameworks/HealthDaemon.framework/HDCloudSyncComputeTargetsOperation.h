/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncComputeTargetsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    HDSynchronousTaskGroup * _taskGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)finishedOperationTags;
+ (bool)shouldLogAtOperationEnd;
+ (bool)shouldLogAtOperationStart;

- (void).cxx_destruct;
- (void)main;
- (void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(bool)arg2 errors:(id)arg3;

@end
