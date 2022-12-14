/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataSessionTask : NSObject <GEODataSessionTask, GEODataSessionTaskDelegate> {
    NSObject<OS_os_activity> * _activity;
    <GEODataSessionTask> * _completedSubtask;
    <GEODataSessionTaskDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _didStart;
    double  _endTime;
    struct { 
        int type; 
        union { 
            int raw; 
            int tile; 
            int placeRequest; 
        } subtype; 
    }  _requestKind;
    GEODataSession * _session;
    NSObject<OS_dispatch_queue> * _sessionIsolation;
    double  _startTime;
    GEODataURLSessionTask * _urlTask;
    bool  _willSendRequestDelegateCalled;
}

@property (nonatomic, readonly) NSObject<OS_os_activity> *activity;
@property (nonatomic, readonly) GEOClientMetrics *clientMetrics;
@property (nonatomic, retain) <GEODataSessionTask> *completedSubtask;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GEODataSessionTaskDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSURL *downloadedFileURL;
@property (nonatomic, readonly) double elapsedTime;
@property (nonatomic, readonly) NSString *entityTag;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) bool failedDueToCancel;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long incomingPayloadSize;
@property (nonatomic, readonly) double loadTime;
@property (nonatomic, readonly) bool mptcpNegotiated;
@property (nonatomic, readonly) NSURL *originalRequestURL;
@property (nonatomic, readonly) unsigned long long outgoingPayloadSize;
@property (nonatomic, readonly) <NSObject> *parsedResponse;
@property float priority;
@property (nonatomic, readonly) bool protocolBufferHasPreamble;
@property (nonatomic, readonly) NSData *receivedData;
@property (nonatomic, readonly) unsigned long long receivedDataLength;
@property (nonatomic, readonly) bool receivedRNFNotification;
@property (nonatomic, readonly) NSString *remoteAddressAndPort;
@property (nonatomic, readonly) <GEORequestCounterTicket> *requestCounterTicket;
@property (nonatomic, readonly) struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } requestKind;
@property (nonatomic, readonly) unsigned long long requestedMultipathServiceType;
@property (nonatomic, readonly) long long responseSource;
@property (nonatomic) GEODataSession *session;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sessionIsolation;
@property (readonly) Class superclass;
@property (nonatomic, retain) GEODataURLSessionTask *urlTask;

- (void).cxx_destruct;
- (void)_didCompleteSubtask:(id)arg1;
- (id)activity;
- (void)cancel;
- (id)clientMetrics;
- (id)completedSubtask;
- (void)dataSession:(id)arg1 didCompleteTask:(id)arg2;
- (void)dataSession:(id)arg1 shouldConvertDataTask:(id)arg2 toDownloadTaskForEstimatedResponseSize:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)dataSession:(id)arg1 willSendRequest:(id)arg2 forTask:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)debugDescription;
- (id)delegate;
- (id)delegateQueue;
- (id)description;
- (bool)didValidateEntityTagForData:(id*)arg1 entityTag:(id*)arg2;
- (id)downloadedFileURL;
- (double)elapsedTime;
- (id)entityTag;
- (id)error;
- (bool)failedDueToCancel;
- (bool)getHeaderValue:(id*)arg1 forField:(id)arg2;
- (unsigned long long)incomingPayloadSize;
- (id)initWithSession:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 requestKind:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg4 requestCounterTicket:(id)arg5;
- (double)loadTime;
- (double)loadTimeIncludingTask:(id)arg1;
- (bool)mptcpNegotiated;
- (id)originalRequestURL;
- (unsigned long long)outgoingPayloadSize;
- (id)parsedResponse;
- (float)priority;
- (bool)protocolBufferHasPreamble;
- (id)receivedData;
- (unsigned long long)receivedDataLength;
- (bool)receivedRNFNotification;
- (id)remoteAddressAndPort;
- (id)requestCounterTicket;
- (struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })requestKind;
- (unsigned long long)requestedMultipathServiceType;
- (long long)responseSource;
- (id)session;
- (id)sessionIsolation;
- (void)setCompletedSubtask:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPriority:(float)arg1;
- (void)setSession:(id)arg1;
- (void)setUrlTask:(id)arg1;
- (void)start;
- (id)urlTask;
- (bool)validateTileResponse:(bool)arg1 error:(id*)arg2;
- (bool)validateTransportWithError:(id*)arg1;

@end
