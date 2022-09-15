/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorLocalZoneID : HMFObject <HMBLocalZoneID> {
    NSData * _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *labels;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSData *token;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithToken:(id)arg1;
- (id)labels;
- (id)name;
- (id)token;

@end