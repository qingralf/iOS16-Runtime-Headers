/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDTaskServerRegistry : NSObject {
    HDDaemon * _daemon;
    NSMutableSet * _loadedPluginURLs;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _taskServerClassesByTaskIdentifier;
    NSMutableDictionary * _taskServerObserversByUUID;
    NSMapTable * _taskServersByUUID;
}

@property (nonatomic, readonly) HDDaemon *daemon;

- (void).cxx_destruct;
- (Class)_taskServerClassForIdentifier:(id)arg1;
- (void)addObserver:(id)arg1 forTaskServerUUID:(id)arg2 queue:(id)arg3;
- (id)createTaskServerEndpointForIdentifier:(id)arg1 taskUUID:(id)arg2 configuration:(id)arg3 client:(id)arg4 connectionQueue:(id)arg5 error:(id*)arg6;
- (id)daemon;
- (void)didCreateTaskServer:(id)arg1;
- (id)initWithDaemon:(id)arg1;
- (bool)loadTaskServersFromPluginAtURL:(id)arg1 error:(id*)arg2;
- (bool)registerTaskServerClass:(Class)arg1 error:(id*)arg2;
- (bool)registerTaskServerClasses:(id)arg1 error:(id*)arg2;
- (bool)registerTaskServerClassesWithProvider:(id)arg1 error:(id*)arg2;
- (void)removeObserver:(id)arg1 forTaskServerUUID:(id)arg2;
- (void)removeTaskServerObserver:(id)arg1;
- (void)taskServerDidInvalidate:(id)arg1;
- (id)taskServerForTaskUUID:(id)arg1;

@end
