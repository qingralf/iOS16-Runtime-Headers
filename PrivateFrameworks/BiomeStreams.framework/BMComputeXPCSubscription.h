/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
 */

@interface BMComputeXPCSubscription : NSObject <NSSecureCoding> {
    id /* block */  _block;
    NSString * _client;
    NSXPCConnection * _connection;
    BMDSL * _graph;
    NSString * _identifier;
    NSSet * _streamIdentifiers;
    BMDSLSubscriber * _subscriber;
    unsigned long long  _token;
    NSObject<OS_os_transaction> * _transaction;
    bool  _waking;
}

@property (nonatomic, readonly) id /* block */ block;
@property (nonatomic, copy) NSString *client;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, readonly) BMDSL *graph;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) NSSet *streamIdentifiers;
@property (nonatomic, readonly) BMDSLSubscriber *subscriber;
@property (nonatomic, readonly) unsigned long long token;
@property (nonatomic, retain) NSObject<OS_os_transaction> *transaction;
@property (nonatomic, readonly) bool waking;

+ (id)new;
+ (id)storageForIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)XPCEvent;
- (id /* block */)block;
- (id)client;
- (id)connection;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)graph;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 client:(id)arg2 waking:(bool)arg3 DSLGraph:(id)arg4 block:(id /* block */)arg5;
- (id)initWithIdentifier:(id)arg1 client:(id)arg2 waking:(bool)arg3 DSLGraph:(id)arg4 subscriber:(id)arg5 block:(id /* block */)arg6;
- (id)initWithToken:(unsigned long long)arg1 descriptor:(id)arg2;
- (void)setClient:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setTransaction:(id)arg1;
- (id)streamIdentifiers;
- (id)subscriber;
- (unsigned long long)token;
- (id)transaction;
- (bool)waking;

@end