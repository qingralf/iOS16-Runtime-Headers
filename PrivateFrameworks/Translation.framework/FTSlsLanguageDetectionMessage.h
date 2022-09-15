/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Translation.framework/Translation
 */

@interface FTSlsLanguageDetectionMessage : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct SlsLanguageDetectionMessage { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, readonly) FTAudioPacket *session_messageAsFTAudioPacket;
@property (nonatomic, readonly) FTFinishAudio *session_messageAsFTFinishAudio;
@property (nonatomic, readonly) FTLanguageDetectionResponse *session_messageAsFTLanguageDetectionResponse;
@property (nonatomic, readonly) FTStartLanguageDetectionRequest *session_messageAsFTStartLanguageDetectionRequest;
@property (nonatomic, readonly) long long session_message_type;

+ (Class)session_message_immutableClassForType:(long long)arg1;
+ (long long)session_message_typeForImmutableObject:(id)arg1;

- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::SlsLanguageDetectionMessage> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SlsLanguageDetectionMessage { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SlsLanguageDetectionMessage { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)session_message;
- (id)session_messageAsFTAudioPacket;
- (id)session_messageAsFTFinishAudio;
- (id)session_messageAsFTLanguageDetectionResponse;
- (id)session_messageAsFTStartLanguageDetectionRequest;
- (long long)session_message_type;

@end