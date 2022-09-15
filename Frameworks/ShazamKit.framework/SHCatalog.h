/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ShazamKit.framework/ShazamKit
 */

@interface SHCatalog : NSObject {
    NSString * __installationID;
}

@property (nonatomic, readonly, copy) NSString *_installationID;
@property (nonatomic, readonly) double maximumQuerySignatureDuration;
@property (nonatomic, readonly) double minimumQuerySignatureDuration;

+ (bool)_validateInstallationID:(id)arg1;

- (void).cxx_destruct;
- (double)_bufferDuration;
- (id)_createMatcher;
- (id)_createSessionDriver;
- (id)_initWithInstallationID:(id)arg1;
- (id)_installationID;
- (double)maximumQuerySignatureDuration;
- (double)minimumQuerySignatureDuration;

@end