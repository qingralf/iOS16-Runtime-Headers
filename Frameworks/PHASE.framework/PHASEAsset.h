/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PHASE.framework/PHASE
 */

@interface PHASEAsset : NSObject {
    PHASEAssetRegistry * _assetRegistry;
    NSString * _identifier;
}

@property PHASEAssetRegistry *assetRegistry;
@property (readonly) NSString *identifier;
@property (readonly) NSString *uid;

+ (id)new;

- (void).cxx_destruct;
- (id)assetRegistry;
- (id)identifier;
- (id)init;
- (id)initWithUID:(id)arg1 assetRegistry:(id)arg2;
- (void)setAssetRegistry:(id)arg1;
- (void)setUid:(id)arg1;
- (id)uid;

@end
