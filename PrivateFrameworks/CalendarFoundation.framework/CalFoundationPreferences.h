/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalFoundationPreferences : NSObject {
    CalPreferences * _preferences;
}

@property (nonatomic, readonly) bool logAutoFlush;
@property (nonatomic, readonly) NSString *logFilePath;
@property (nonatomic, readonly) NSArray *logSimpleConfiguration;
@property (nonatomic) double simulatedDateForNowOffset;
@property (nonatomic, retain) NSString *stopTimeDemoMode;
@property (nonatomic, readonly) bool stopTimeDemoModeActive;
@property (nonatomic, readonly) NSDateComponents *stopTimeDemoModeComponents;

+ (id)shared;

- (void).cxx_destruct;
- (id)init;
- (bool)logAutoFlush;
- (id)logFilePath;
- (id)logSimpleConfiguration;
- (void)setSimulatedDateForNowOffset:(double)arg1;
- (void)setStopTimeDemoMode:(id)arg1;
- (double)simulatedDateForNowOffset;
- (id)stopTimeDemoMode;
- (bool)stopTimeDemoModeActive;
- (id)stopTimeDemoModeComponents;

@end