/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioSessionServer.framework/AudioSessionServer
 */

@interface AVAudioSessionRemoteXPCClient : NSObject <SessionManagerXPCProtocol> {
    struct ProcessInfo { 
        struct ProcessToken { 
            unsigned int mValue; 
        } token; 
        NSXPCConnection *xpcConnection; 
        AVAudioSessionXPCClientRelay *mClientRelay; 
        struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
            struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                struct __rep { 
                    union { 
                        struct __long { 
                            char *__data_; 
                            unsigned long long __size_; 
                            unsigned long long __cap_; 
                        } __l; 
                        struct __short { 
                            BOOL __data_[23]; 
                            struct { 
                                unsigned char __size_; 
                            } ; 
                        } __s; 
                        struct __raw { 
                            unsigned long long __words[3]; 
                        } __r; 
                    } ; 
                } __value_; 
            } __r_; 
        } mProcessName; 
    }  _clientProcess;
    AVAudioSessionXPCClientRelay * _clientRelay;
    struct reply_watchdog_factory { 
        bool mDebugging; 
        int mDefaultTimeoutMS; 
        struct function<void ()>="__f_"{__value_func<void ()>="__buf_"{type="__lx"[24C] {} mTimeoutHandler; 
        void *__f_; 
    }  _defaultReplyWatchdogFactory;
    bool  _invalidated;
    struct reply_watchdog_factory { 
        bool mDebugging; 
        int mDefaultTimeoutMS; 
        struct function<void ()>="__f_"{__value_func<void ()>="__buf_"{type="__lx"[24C] {} mTimeoutHandler; 
        void *__f_; 
    }  _longReplyWatchdogFactory;
    const char * _replyWatchdogFunctionName;
    struct time_point<std::chrono::system_clock, std::chrono::duration<long long, std::ratio<1, 1000000>>> { 
        struct duration<long long, std::ratio<1, 1000000>> { 
            long long __rep_; 
        } __d_; 
    }  _replyWatchdogMinTimestamp;
    AVAudioSessionXPCServer * _server;
    <AVAudioSessionServerDelegate> * _serverDelegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)activateSession:(unsigned int)arg1 options:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)addMXNotificationListener:(unsigned int)arg1 notificationName:(id)arg2 reply:(id /* block */)arg3;
- (id)clientRelay;
- (void)createProxySession:(unsigned int)arg1 reply:(id /* block */)arg2;
- (void)createSession:(unsigned long long)arg1 siblingSessionID:(unsigned int)arg2 nameOrDeviceUID:(id)arg3 reply:(id /* block */)arg4;
- (void)deactivateSession:(unsigned int)arg1 options:(unsigned long long)arg2 priority:(id)arg3 reply:(id /* block */)arg4;
- (void)dealloc;
- (void)destroySession:(unsigned int)arg1 reply:(id /* block */)arg2;
- (void)getDeferredMessages:(unsigned int)arg1 reply:(id /* block */)arg2;
- (void)getIOControllerPeriod:(unsigned int)arg1 decoupledInput:(bool)arg2 reply:(id /* block */)arg3;
- (void)getMXPropertyGenericPipe:(unsigned int)arg1 propertyName:(id)arg2 reply:(id /* block */)arg3;
- (void)getProperty:(unsigned int)arg1 propertyName:(id)arg2 MXProperty:(bool)arg3 reply:(id /* block */)arg4;
- (id)initWithServer:(id)arg1 process:(struct ProcessInfo { struct ProcessToken { unsigned int x_1_1_1; } x1; id x2; id x3; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_4_1_1; } x4; })arg2 delegate:(id)arg3;
- (void)invalidate;
- (void)pingWithReply:(id /* block */)arg1;
- (void)removeMXNotificationListener:(unsigned int)arg1 notificationName:(id)arg2 reply:(id /* block */)arg3;
- (void)setMXPropertyGenericPipe:(unsigned int)arg1 values:(id)arg2 reply:(id /* block */)arg3;
- (struct tuple<NSError *, NSDictionary *> { struct __tuple_impl<std::__tuple_indices<0, 1>, NSError *, NSDictionary *> { id x_1_1_1; id x_1_1_2; } x1; })setPriorityPropertiesMX:(unsigned int)arg1 token:(const struct { unsigned int x1[8]; }*)arg2 values:(id)arg3;
- (void)setProperties:(unsigned int)arg1 values:(id)arg2 MXProperties:(bool)arg3 reply:(id /* block */)arg4;
- (id)setPropertiesMX:(unsigned int)arg1 token:(const struct { unsigned int x1[8]; }*)arg2 values:(id)arg3;
- (void)setSession:(unsigned int)arg1 decoupledInput:(bool)arg2 hasIOEventListeners:(bool)arg3 reply:(id /* block */)arg4;
- (void)silenceOutput:(unsigned int)arg1 options:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)simulatePrimarySessionCreationInsideServerWithReply:(id /* block */)arg1;
- (void)sleepWithReply:(unsigned int)arg1 reply:(id /* block */)arg2;
- (void)updateMicrophonePermissionWithReply:(id /* block */)arg1;
- (void)verifySessionExists:(unsigned int)arg1 reply:(id /* block */)arg2;
- (struct World { }*)world;

@end
