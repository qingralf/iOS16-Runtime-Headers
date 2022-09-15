/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StatusKitAgentCore.framework/StatusKitAgentCore
 */

@interface ChannelActivityPollingRequest : PBRequest <NSCopying> {
    AuthCredential * _authCredential;
    ChannelIdentity * _channelIdentity;
    struct { 
        unsigned int requestFlag : 1; 
    }  _has;
    int  _requestFlag;
    NSData * _uuid;
}

@property (nonatomic, retain) AuthCredential *authCredential;
@property (nonatomic, retain) ChannelIdentity *channelIdentity;
@property (nonatomic, readonly) bool hasAuthCredential;
@property (nonatomic, readonly) bool hasChannelIdentity;
@property (nonatomic) bool hasRequestFlag;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic) int requestFlag;
@property (nonatomic, retain) NSData *uuid;

- (void).cxx_destruct;
- (int)StringAsRequestFlag:(id)arg1;
- (id)authCredential;
- (id)channelIdentity;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAuthCredential;
- (bool)hasChannelIdentity;
- (bool)hasRequestFlag;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)requestFlag;
- (id)requestFlagAsString:(int)arg1;
- (void)setAuthCredential:(id)arg1;
- (void)setChannelIdentity:(id)arg1;
- (void)setHasRequestFlag:(bool)arg1;
- (void)setRequestFlag:(int)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end