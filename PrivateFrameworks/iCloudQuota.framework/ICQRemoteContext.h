/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

@interface ICQRemoteContext : NSObject <NSSecureCoding> {
    NSData * _flowOptionsData;
    ICQOffer * _offer;
    NSData * _preloadedRemoteUIData;
}

@property (nonatomic, readonly) NSData *flowOptionsData;
@property (nonatomic, readonly) ICQOffer *offer;
@property (nonatomic, readonly) NSData *preloadedRemoteUIData;

+ (id)ICQContextFromRemoteAlertContext:(id)arg1;
+ (id)contextFromDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_serializedData;
- (void)encodeWithCoder:(id)arg1;
- (id)flowOptionsData;
- (id)initWithCoder:(id)arg1;
- (id)initWithOffer:(id)arg1 flowOptionsData:(id)arg2 preloadedRemoteUIData:(id)arg3;
- (id)offer;
- (id)preloadedRemoteUIData;
- (id)toDictionary;

@end