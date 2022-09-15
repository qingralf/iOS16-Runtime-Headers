/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CHIPPlugin.framework/CHIPPlugin
 */

@interface CHIPPluginPairing : HMFObject <NSCopying> {
    NSNumber * _fabricID;
    NSNumber * _fabricIndex;
    NSString * _fabricLabel;
    NSNumber * _nodeID;
    NSData * _rootPublicKey;
    NSNumber * _vendorID;
    NSString * _vendorName;
}

@property (readonly) NSNumber *fabricID;
@property (readonly) NSNumber *fabricIndex;
@property (readonly, copy) NSString *fabricLabel;
@property (readonly) NSNumber *nodeID;
@property (readonly) NSData *rootPublicKey;
@property (readonly) NSNumber *vendorID;
@property (readonly, copy) NSString *vendorName;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fabricID;
- (id)fabricIndex;
- (id)fabricLabel;
- (unsigned long long)hash;
- (id)initWithCHIPFabricDescriptor:(id)arg1 vendorName:(id)arg2;
- (id)initWithNodeID:(id)arg1 fabricID:(id)arg2 fabricIndex:(id)arg3 fabricLabel:(id)arg4 rootPublicKey:(id)arg5 vendorID:(id)arg6 vendorName:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)nodeID;
- (id)rootPublicKey;
- (id)vendorID;
- (id)vendorName;

@end