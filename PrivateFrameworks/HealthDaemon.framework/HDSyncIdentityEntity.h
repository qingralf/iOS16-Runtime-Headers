/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSyncIdentityEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)concreteIdentityForIdentity:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)databaseTable;
+ (id)insertOrLookupConcreteIdentityForIdentity:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (id)uniquedColumns;

- (id)concreteIdentityWithTransaction:(id)arg1 error:(id*)arg2;

@end
