/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Seeding.framework/Seeding
 */

@interface SDSeedProgramMigrator : NSObject

+ (bool)_enrollInSeedProgramFromCookie;
+ (void)_removeObsoleteAudiences;
+ (void)_removeObsoleteCatalogs;
+ (bool)fixupSeedProgramSettings;
+ (void)migrateSeedProgramSettings;

@end