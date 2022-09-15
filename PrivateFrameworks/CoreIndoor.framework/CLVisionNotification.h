/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@interface CLVisionNotification : NSObject <NSSecureCoding> {
    unsigned long long  _arSessionState;
    int  _notificationType;
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
    }  _serializedVIOEstimation;
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
    }  _serializedVLLocalizationResult;
}

@property (nonatomic, readonly) unsigned long long arSessionState;
@property (nonatomic, readonly) int notificationType;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{basic_string<char' */ struct  serializedVIOEstimation; /* unknown property attribute:  std::allocator<char>>={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{basic_string<char' */ struct  serializedVLLocalizationResult; /* unknown property attribute:  std::allocator<char>>={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}} */

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)arSessionState;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithARSessionState:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedVIOEstimation:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg1;
- (id)initWithSerializedVLLocalizationResult:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg1;
- (int)notificationType;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })serializedVIOEstimation;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })serializedVLLocalizationResult;

@end