/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard
 */

@interface PBFWallpaperKitBridge : NSObject

@property (nonatomic, readonly) bool dataMigratorDeterminedLegacyWallpaperMigrationRequired;
@property (nonatomic, readonly) NSString *defaultWallpaperIdentifier;
@property (nonatomic, readonly) bool shouldInstallCollectionsPosterAsDefaultLockScreenWallpaper;

+ (id)defaultBridge;

- (void)clearLegacyWallpaperMigrationKeys;
- (bool)dataMigratorDeterminedLegacyWallpaperMigrationRequired;
- (id)defaultWallpaperIdentifier;
- (bool)shouldInstallCollectionsPosterAsDefaultLockScreenWallpaper;

@end