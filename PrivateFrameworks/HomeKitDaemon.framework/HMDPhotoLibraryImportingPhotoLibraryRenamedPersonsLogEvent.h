/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDPhotoLibraryImportingPhotoLibraryRenamedPersonsLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    long long  _numberOfRenamedPersons;
}

@property (nonatomic, readonly) NSString *accessoryIdentifier;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool logEventWithAppendedCommonDimensions;
@property (readonly) long long numberOfRenamedPersons;
@property (nonatomic, readonly) NSDictionary *serializedEvent;

- (id)eventName;
- (id)initWithNumberOfRenamedPersons:(long long)arg1;
- (long long)numberOfRenamedPersons;
- (id)serializedEvent;

@end
