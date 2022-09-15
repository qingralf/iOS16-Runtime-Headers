/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeFoundation.framework/BiomeFoundation
 */

@interface BMPublicStreamUtilities : NSObject

// Image: /System/Library/PrivateFrameworks/BiomeFoundation.framework/BiomeFoundation

+ (id)allowedStreamWriteIdentifiersForStream:(long long)arg1;
+ (unsigned long long)domainForStream:(long long)arg1;
+ (long long)streamForStreamIdentifier:(id)arg1;
+ (id)streamIdentifierForStream:(long long)arg1;
+ (id)streamIdentifiers;
+ (bool)writeAllowedForStream:(long long)arg1 processIdentifier:(id)arg2;

// Image: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage

+ (id)storeConfigurationForStream:(long long)arg1;
+ (id)storeConfigurationForStream:(long long)arg1 protectionClass:(unsigned long long)arg2;
+ (id)streamPathForStream:(long long)arg1;

@end