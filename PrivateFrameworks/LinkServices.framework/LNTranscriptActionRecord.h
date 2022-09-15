/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices
 */

@interface LNTranscriptActionRecord : NSObject <BMStoreData, NSSecureCoding> {
    LNAction * _action;
    LNActionOutput * _actionOutput;
    NSString * _bundleIdentifier;
    NSString * _clientLabel;
    NSDate * _executionDate;
    NSUUID * _executionUUID;
    NSArray * _predictions;
    LNAction * _resolvedAction;
    unsigned short  _source;
}

@property (nonatomic, readonly, copy) LNAction *action;
@property (nonatomic, readonly, copy) LNActionOutput *actionOutput;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *clientLabel;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDate *executionDate;
@property (nonatomic, readonly, copy) NSUUID *executionUUID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *predictions;
@property (nonatomic, readonly, copy) LNAction *resolvedAction;
@property (nonatomic) unsigned short source;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)actionOutput;
- (id)bundleIdentifier;
- (id)clientLabel;
- (unsigned int)dataVersion;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)executionDate;
- (id)executionUUID;
- (unsigned long long)hash;
- (id)initWithAction:(id)arg1 resolvedAction:(id)arg2 bundleIdentifier:(id)arg3 actionOutput:(id)arg4 executionUUID:(id)arg5 source:(unsigned short)arg6 executionDate:(id)arg7 clientLabel:(id)arg8 predictions:(id)arg9;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)predictions;
- (id)resolvedAction;
- (id)serialize;
- (void)setBundleIdentifier:(id)arg1;
- (void)setSource:(unsigned short)arg1;
- (unsigned short)source;

@end