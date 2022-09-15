/* Generated by RuntimeBrowser.
 */

@protocol PFMetadataImage

@required

- (NSNumber *)GIFDelayTime;
- (NSNumber *)altitude;
- (NSString *)artworkContentDescription;
- (NSNumber *)brightness;
- (NSString *)burstUuid;
- (NSString *)cameraSerialNumber;
- (struct CGImageMetadata { }*)cgImageMetadata;
- (NSDictionary *)cgImageProperties;
- (NSNumber *)colorSpace;
- (long long)customRendered;
- (NSString *)defaultProfileName;
- (NSString *)deferredPhotoProcessingIdentifier;
- (NSNumber *)digitalZoomRatio;
- (NSNumber *)exposureBias;
- (NSNumber *)exposureTime;
- (NSNumber *)fNumber;
- (NSString *)firmware;
- (NSNumber *)flashCompensation;
- (bool)flashFired;
- (NSNumber *)flashValue;
- (NSNumber *)focalLength;
- (NSNumber *)focalLengthIn35mm;
- (NSNumber *)focusDistance;
- (NSNumber *)focusMode;
- (NSArray *)focusPoints;
- (NSDate *)gpsDateTime;
- (NSNumber *)gpsHPositioningError;
- (NSString *)groupingUuid;
- (bool)hasCustomRendered;
- (bool)hasHDRGainMap;
- (NSNumber *)hdrGain;
- (id)hdrGainMap;
- (NSNumber *)hdrGainMapPercentageValue;
- (NSString *)imageCaptureRequestIdentifier;
- (NSData *)imageData;
- (NSNumber *)imageDirection;
- (NSString *)imageDirectionRef;
- (struct CGImageSource { }*)imageSource;
- (bool)isDeferredPhotoProxy;
- (bool)isFrontFacingCamera;
- (bool)isPhotoBooth;
- (bool)isPortrait;
- (bool)isSDOF;
- (bool)isScreenshot;
- (NSNumber *)iso;
- (NSArray *)keywords;
- (NSString *)lensMake;
- (NSNumber *)lensMaximumMM;
- (NSNumber *)lensMinimumMM;
- (NSString *)lensModel;
- (NSNumber *)lightSource;
- (NSNumber *)meteringMode;
- (NSString *)ownerName;
- (unsigned long long)photoProcessingFlags;
- (NSString *)photoProcessingIdentifier;
- (NSString *)portraitInLandscapeCamera;
- (NSString *)profileName;
- (NSNumber *)semanticStylePreset;
- (NSNumber *)semanticStyleRenderingVersion;
- (NSNumber *)semanticStyleToneBias;
- (NSNumber *)semanticStyleWarmthBias;
- (NSNumber *)speed;
- (NSString *)speedRef;
- (NSString *)userComment;
- (NSNumber *)whiteBalance;
- (NSNumber *)whiteBalanceIndex;

@end