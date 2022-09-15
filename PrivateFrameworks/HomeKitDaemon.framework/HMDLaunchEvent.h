/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDLaunchEvent : HMMLogEvent <HMDDiagnosticReportLogging, HMMCoreAnalyticsLogging> {
    NSDate * _XPCMessageTransportStartedDate;
    HMFActivity * _activity;
    bool  _hasUncommittedAndPushedRecords;
    bool  _hasUncommittedRecords;
    long long  _numUncommittedAndPushedRecords;
    long long  _numUncommittedRecords;
    unsigned long long  _systemUptimeMillisecondsRecordedAtLaunch;
}

@property (nonatomic, readonly) NSString *accessoryIdentifier;
@property (retain) HMFActivity *activity;
@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (readonly, copy) NSString *diagnosticReportEventType;
@property (readonly) double diagnosticReportThreshold;
@property (nonatomic, readonly) NSString *eventName;
@property bool hasUncommittedAndPushedRecords;
@property bool hasUncommittedRecords;
@property (nonatomic, readonly) bool logEventWithAppendedCommonDimensions;
@property long long numUncommittedAndPushedRecords;
@property long long numUncommittedRecords;
@property (nonatomic, readonly) NSDictionary *serializedEvent;
@property (readonly) unsigned long long systemUptimeMillisecondsRecordedAtLaunch;

- (void).cxx_destruct;
- (id)activity;
- (id)diagnosticReportEventSubType;
- (id)diagnosticReportEventType;
- (double)diagnosticReportThreshold;
- (id)eventName;
- (bool)hasUncommittedAndPushedRecords;
- (bool)hasUncommittedRecords;
- (id)init;
- (void)markXPCMessageTransportStarted;
- (long long)numUncommittedAndPushedRecords;
- (long long)numUncommittedRecords;
- (id)serializedEvent;
- (void)setActivity:(id)arg1;
- (void)setHasUncommittedAndPushedRecords:(bool)arg1;
- (void)setHasUncommittedRecords:(bool)arg1;
- (void)setNumUncommittedAndPushedRecords:(long long)arg1;
- (void)setNumUncommittedRecords:(long long)arg1;
- (unsigned long long)systemUptimeMillisecondsRecordedAtLaunch;
- (void)updateDiagnosticReportSignature:(id)arg1;

@end