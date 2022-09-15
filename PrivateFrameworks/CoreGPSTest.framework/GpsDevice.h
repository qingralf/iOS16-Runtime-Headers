/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreGPSTest.framework/CoreGPSTest
 */

@interface GpsDevice : NSObject {
    void * _fTestDevice;
    struct Options { 
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
        } uartPortName; 
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
        } gnssDeviceLibraryName; 
        unsigned int logLevel; 
        unsigned int secondaryLogLevel; 
        unsigned long long logMask; 
        bool clearNvStore; 
        bool printNmeaMessage; 
        bool hostPassThroughMode; 
        bool doPeriodic; 
        bool doCw; 
        bool doModulated; 
        bool doRecordIQ; 
        bool doPowerMode; 
        bool doHostWakeGpio; 
        bool doTimeMarkGpio; 
        bool doCommPing; 
        bool doCommLoopback; 
        struct optional<int> { 
            union { 
                BOOL __null_state_; 
                int __val_; 
            } ; 
            bool __engaged_; 
        } bandLteFilter; 
        struct optional<bool> { 
            union { 
                BOOL __null_state_; 
                bool __val_; 
            } ; 
            bool __engaged_; 
        } l5NotchFilter; 
        struct optional<GnssHal::ExtensionsFire::FrequencyBandsSetting> { 
            union { 
                BOOL __null_state_; 
                unsigned char __val_; 
            } ; 
            bool __engaged_; 
        } rfFreqBand; 
        struct optional<GnssHal::ExtensionsFire::BlankingSetting> { 
            union { 
                BOOL __null_state_; 
                unsigned char __val_; 
            } ; 
            bool __engaged_; 
        } blanking; 
        int periodicDurationSec; 
        int cwDurationSec; 
        int cwBandwidthHz; 
        int integrationTimeMilliseconds; 
        unsigned char band; 
        union Subband { 
            int prn; 
            int fcn; 
        } subband; 
        int modulatedDurationSec; 
        int recordIQDurationSec; 
        int powerMode; 
        int hostWakeGpioTimeoutMs; 
        int timeMarkGpioTimeoutMs; 
        int commPingTimeoutMs; 
        int commLoopbackTimeoutSec; 
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
        } extraOptions; 
        int uartBaudRate; 
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
        } xmlFile; 
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
        } testJob; 
    }  _fTestOptions;
}

@property void*fTestDevice;
@property /* Warning: unhandled struct encoding: '{Options={basic_string<char' */ struct  fTestOptions; /* unknown property attribute:  std::allocator<char>>={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void*)fTestDevice;
- (struct Options { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3; unsigned int x4; unsigned long long x5; bool x6; bool x7; bool x8; bool x9; bool x10; })fTestOptions;
- (void)flushLogs;
- (bool)getGpsConfiguration:(struct { unsigned int x1; unsigned int x2; int x3; }*)arg1 error:(id*)arg2;
- (id)init:(id*)arg1;
- (void)setFTestDevice:(void*)arg1;
- (void)setFTestOptions:(struct Options { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3; unsigned int x4; unsigned long long x5; bool x6; bool x7; bool x8; bool x9; bool x10; })arg1;
- (bool)testApSignalGpio:(id*)arg1;
- (bool)testCommPing:(id)arg1 error:(id*)arg2;
- (bool)testCommPing:(id*)arg1 id:(id*)arg2 error:(id*)arg3;
- (bool)testExternalFreqAssistance:(id*)arg1;
- (bool)testGpsCw:(id)arg1 error:(id*)arg2;
- (bool)testGpsModulated:(id)arg1 gpsPrn:(int)arg2 error:(id*)arg3;
- (bool)testPeriodic:(id)arg1 error:(id*)arg2;
- (bool)testPowerMode:(unsigned char)arg1 error:(id*)arg2;
- (bool)testTimeMarkGpio:(id*)arg1;

@end