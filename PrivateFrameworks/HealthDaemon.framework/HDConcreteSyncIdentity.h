/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDConcreteSyncIdentity : NSObject <NSCopying> {
    HDSyncIdentityEntity * _entity;
    HDSyncIdentity * _identity;
}

@property (nonatomic, readonly, copy) HDSyncIdentityEntity *entity;
@property (nonatomic, readonly, copy) HDSyncIdentity *identity;

+ (id)new;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)entity;
- (unsigned long long)hash;
- (id)identity;
- (id)init;
- (bool)isEqual:(id)arg1;

@end