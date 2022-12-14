/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
 */

@interface DRSRequest : NSObject <DRSDSRequestObject> {
    NSString * _build;
    NSNumber * _cachedLogSize;
    NSDictionary * _contextDictionary;
    NSData * _contextDictionaryData;
    unsigned char  _decisionServerDecision;
    NSString * _errorDescription;
    bool  _hasBeenCountedByTelemetry;
    bool  _isExpedited;
    NSString * _issueCategory;
    NSString * _issueDescription;
    NSString * _logPath;
    NSString * _logType;
    NSDate * _requestDate;
    NSUUID * _requestID;
    unsigned long long  _requestMCT;
    unsigned long long  _requestState;
    NSString * _teamID;
    unsigned short  _uploadAttemptCount;
    unsigned long long  _uploadID;
}

@property (nonatomic, readonly) NSString *build;
@property (nonatomic, retain) NSNumber *cachedLogSize;
@property (nonatomic, readonly) NSDictionary *contextDictionary;
@property (nonatomic, readonly) NSData *contextDictionaryData;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned char decisionServerDecision;
@property (nonatomic, readonly) NSString *decisionServerDecisionString;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *errorDescription;
@property (nonatomic, readonly) unsigned long long expectedType;
@property (nonatomic, readonly) NSArray *fileNames;
@property (nonatomic, readonly) NSArray *filePaths;
@property (nonatomic, readonly) NSArray *fileURLs;
@property (nonatomic, readonly) NSString *functionName;
@property (nonatomic) bool hasBeenCountedByTelemetry;
@property (nonatomic, readonly) bool hasUploadableContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isExpedited;
@property (nonatomic, readonly) NSString *issueCategory;
@property (nonatomic, readonly) NSString *issueDescription;
@property (nonatomic, retain) NSString *logPath;
@property (nonatomic, readonly) NSNumber *logSize;
@property (nonatomic, readonly) unsigned long long logSizeLimitBytes;
@property (nonatomic, retain) NSString *logType;
@property (nonatomic, readonly) <DRSDecisionServerBatchRequest> *pbBatchInstance;
@property (nonatomic, readonly) Class pbBatchResponseClass;
@property (nonatomic, readonly) PBRequest *pbRequest;
@property (nonatomic, readonly) NSDate *requestDate;
@property (nonatomic, readonly) NSUUID *requestID;
@property (nonatomic, readonly) unsigned long long requestMCT;
@property (nonatomic, readonly) unsigned char requestOutcome;
@property (nonatomic, readonly) NSString *requestOutcomeString;
@property (nonatomic) unsigned long long requestState;
@property (nonatomic, readonly) NSString *requestStateString;
@property (nonatomic, readonly) NSString *requestType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *teamID;
@property (nonatomic, readonly) NSUUID *uniqueID;
@property (nonatomic) unsigned short uploadAttemptCount;
@property (nonatomic, readonly) unsigned long long uploadID;

+ (Class)_moClass;
+ (id)_requestWithRequestMO_ON_MOC_QUEUE:(id)arg1;
+ (bool)cleanRequestRecordsFromPersistentContainer:(id)arg1 removeFiles:(bool)arg2 removeRecord:(bool)arg3 matchingPredicate:(id)arg4 errorOut:(id*)arg5;
+ (id)entityName;
+ (bool)isExpeditedTeamID:(id)arg1 issueCategory:(id)arg2;
+ (id)leastRecentDateFirstSortDescriptor;
+ (id)mostRecentDateFirstSortDescriptor;
+ (unsigned long long)requestCountForFilterPredicate:(id)arg1 context:(id)arg2 fetchLimit:(unsigned long long)arg3 errorOut:(id*)arg4;
+ (id)requestForMessage:(id)arg1;
+ (id)requestsForFilterPredicate:(id)arg1 context:(id)arg2 sortDescriptors:(id)arg3 fetchLimit:(unsigned long long)arg4 errorOut:(id*)arg5;
+ (id)requiredSystemResourceName;
+ (id)unreportedTerminalRequestsFromContext:(id)arg1 sortDescriptors:(id)arg2 fetchLimit:(unsigned long long)arg3 errorOut:(id*)arg4;
+ (id)uploadedBytesSinceDate:(id)arg1 context:(id)arg2 errorOut:(id*)arg3;

- (void).cxx_destruct;
- (void)_configureRequestMO:(id)arg1;
- (bool)_deleteLog;
- (id)_initWithRequestMO_ON_MOC_QUEUE:(id)arg1;
- (bool)_markLogsAsPurgeableWithUrgencyWithDeleteFallback:(unsigned long long)arg1;
- (bool)_updateLogFileStateForTransitionFromPreviousState:(unsigned long long)arg1;
- (bool)_updateLogStateToExpectedState:(unsigned char)arg1;
- (id)build;
- (id)cachedLogSize;
- (id)contextDictionary;
- (id)contextDictionaryData;
- (id)debugDescription;
- (unsigned char)decisionServerDecision;
- (id)decisionServerDecisionString;
- (id)errorDescription;
- (unsigned long long)expectedType;
- (id)fileAssets;
- (id)fileNames;
- (id)filePaths;
- (id)fileURLs;
- (id)functionName;
- (bool)hasBeenCountedByTelemetry;
- (bool)hasUploadableContent;
- (id)initWithXPCDict:(id)arg1;
- (bool)isEqualToRequest:(id)arg1;
- (bool)isExpedited;
- (id)issueCategory;
- (id)issueDescription;
- (id)jsonCompatibleDictionaryRepresentationVerbose:(bool)arg1;
- (id)logPath;
- (id)logSize;
- (unsigned long long)logSizeLimitBytes;
- (id)logType;
- (id)newRequestMOInContext_ON_MOC_QUEUE:(id)arg1;
- (id)pbBatchInstance;
- (Class)pbBatchResponseClass;
- (id)pbRequest;
- (bool)performOnReceiptWork:(id)arg1 dampeningOutcome:(unsigned long long)arg2;
- (id)protoFileDescription;
- (id)protoRequestDescription;
- (id)recordRepresentation;
- (id)replyForMessage:(id)arg1;
- (id)requestDate;
- (id)requestID;
- (unsigned long long)requestMCT;
- (unsigned char)requestOutcome;
- (id)requestOutcomeString;
- (unsigned long long)requestState;
- (id)requestStateString;
- (id)requestType;
- (void)setCachedLogSize:(id)arg1;
- (void)setDecisionServerDecision:(unsigned char)arg1;
- (void)setHasBeenCountedByTelemetry:(bool)arg1;
- (void)setLogPath:(id)arg1;
- (void)setLogType:(id)arg1;
- (void)setRequestState:(unsigned long long)arg1;
- (void)setUploadAttemptCount:(unsigned short)arg1;
- (id)targetContainerName;
- (id)teamID;
- (id)uniqueID;
- (void)updateContextWithRequest_ON_MOC_QUEUE:(id)arg1;
- (bool)updateToState:(unsigned long long)arg1 errorDescription:(id)arg2 errorOut:(id*)arg3;
- (void)uploadAbortedDueToLogSize;
- (void)uploadAbortedDueToMissingLog;
- (unsigned short)uploadAttemptCount;
- (void)uploadCompleteWithError:(id)arg1;
- (void)uploadDeniedByDecisionServerWithReason:(id)arg1;
- (void)uploadFailedDueToReason:(id)arg1;
- (unsigned long long)uploadID;
- (id)uploadRequest;
- (bool)uploadStarted;

@end
