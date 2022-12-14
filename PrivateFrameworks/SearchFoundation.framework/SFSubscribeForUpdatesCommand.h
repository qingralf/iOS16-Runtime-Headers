/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFSubscribeForUpdatesCommand : SFCommand <NSCopying, NSSecureCoding, SFSubscribeForUpdatesCommand> {
    SFCloudChannelsRequestItem * _cloudChannelsRequestItem;
    SFDomainSubscriptionRequestItem * _domainSubscriptionRequestItem;
}

@property (nonatomic, retain) SFCloudChannelsRequestItem *cloudChannelsRequestItem;
@property (nonatomic, copy) NSString *commandDetail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, retain) SFDomainSubscriptionRequestItem *domainSubscriptionRequestItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cloudChannelsRequestItem;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)domainSubscriptionRequestItem;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)jsonData;
- (void)setCloudChannelsRequestItem:(id)arg1;
- (void)setDomainSubscriptionRequestItem:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (int)_cpCommandType;

@end
