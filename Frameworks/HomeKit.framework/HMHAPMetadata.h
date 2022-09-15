/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMHAPMetadata : NSObject <HMProtoBufMerge> {
    NSDictionary * _hapCategoryMap;
    NSDictionary * _hapChrMap;
    NSDictionary * _hapSvcMap;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSNumber * _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *hapCategoryMap;
@property (nonatomic, retain) NSDictionary *hapChrMap;
@property (nonatomic, retain) NSDictionary *hapSvcMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) NSNumber *version;

+ (id)getSharedInstance;

- (void).cxx_destruct;
- (bool)applyProtoBufData:(id)arg1;
- (id)categoryForCategoryType:(id)arg1;
- (id)categoryForNumber:(id)arg1;
- (id)characteristicTypeDescription:(id)arg1;
- (id)hapCategoryMap;
- (id)hapChrMap;
- (id)hapSvcMap;
- (id)serviceTypeDescription:(id)arg1;
- (void)setHapCategoryMap:(id)arg1;
- (void)setHapChrMap:(id)arg1;
- (void)setHapSvcMap:(id)arg1;
- (void)setVersion:(id)arg1;
- (bool)shouldNotCacheCharacteristicOfType:(id)arg1;
- (id)version;

@end