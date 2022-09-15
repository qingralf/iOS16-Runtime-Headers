/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CopresenceCore.framework/CopresenceCore
 */

@interface CPLink : NSObject <CPLinkProtocol, NSCopying, NSSecureCoding> {
    NSObject<OS_nw_connection> * _connection;
    int  _connectionState;
    CryptoHelper * _cryptoHelper;
    <CPLinkDelegate> * _delegate;
    unsigned char  _linkType;
    NSObject<OS_dispatch_queue> * _networkQueue;
    IDSGroupSessionUnicastParameter * _unicastParam;
}

@property (retain) NSObject<OS_nw_connection> *connection;
@property int connectionState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPLinkDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned char linkType;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *networkQueue;
@property (readonly) Class superclass;
@property (nonatomic, copy) IDSGroupSessionUnicastParameter *unicastParam;

+ (long long)_getIDSDataModelForLinkType:(unsigned char)arg1;
+ (unsigned int)_trafficClassForLinkPriority:(unsigned int)arg1;
+ (id)linkWithGroupSessionID:(id)arg1 localParticipantID:(unsigned long long)arg2 remoteParticipantID:(unsigned long long)arg3 dataMode:(long long)arg4 connectionIndex:(unsigned long long)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enableKeepAlive;
- (bool)_isUnreliableLink;
- (void)_readData:(id)arg1;
- (void)close;
- (id)connection;
- (int)connectionState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUnicastParameter:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isReady;
- (unsigned char)linkType;
- (id)networkQueue;
- (void)requestNWConnectionWithReply:(unsigned char)arg1 completion:(id /* block */)arg2;
- (void)resetTrafficPriority:(unsigned int)arg1;
- (void)sendData:(id)arg1 ofType:(unsigned char)arg2 completion:(id /* block */)arg3;
- (void)sendUnicastData:(id)arg1 ofType:(unsigned char)arg2 completion:(id /* block */)arg3;
- (void)setConnection:(id)arg1;
- (void)setConnectionState:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLinkType:(unsigned char)arg1;
- (void)setNetworkQueue:(id)arg1;
- (void)setUnicastParam:(id)arg1;
- (id)unicastParam;

@end