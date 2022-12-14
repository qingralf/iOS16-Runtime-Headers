/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCSessionStatsController : NSObject {
    double  _averageInterCallbackDuration;
    int  _bytesReceivedToReport;
    int  _bytesSentToReport;
    VCConnectionManager * _connectionManager;
    bool  _didReceiveServerStatsResponse;
    unsigned int  _downlinkMostRecentSendTimestamp;
    unsigned int  _downlinkServerStatsByteUsed;
    AVCStatisticsCollector * _downlinkStatisticsCollector;
    bool  _enableStatsReceiveThread;
    bool  _enableStatsReporting;
    double  _lastHealthPrintTime;
    double  _lastPacketReceiveCallbackTime;
    int  _lastProcessedBytesReceived;
    int  _lastProcessedBytesSent;
    double  _lastStatsReportTime;
    double  _lastTimeReceiveStatsFailed;
    double  _lastTriggerRateControlTime;
    double  _lastUpdateTime;
    NSObject<OS_dispatch_source> * _localSessionStatsTimemoutSource;
    int  _maxReceivedRate;
    int  _maxSentRate;
    double  _maxStatsTransportStreamQueueTime;
    int  _minReceivedRate;
    int  _minSentRate;
    unsigned int  _numStatsDroppedDueToLinkID;
    unsigned int  _numStatsDroppedDueToStatsID;
    unsigned int  _numStatsDroppedDueToTooLate;
    unsigned int  _numStatsProcessed;
    unsigned int  _numStatsTriggeredForDownlink;
    unsigned int  _numStatsTriggeredForUplink;
    unsigned int  _previousTotalPacketReceived;
    unsigned int  _previousTotalPacketSent;
    struct { 
        double responseTime; 
        unsigned char linkID; 
        unsigned short statsIdentifier; 
        unsigned short remoteTimestamp; 
        unsigned short serverPacketInterval; 
        unsigned short uplinkBandwidthSample; 
        unsigned short totalRemoteMediaPacketSent; 
        unsigned short totalRemoteMediaPacketReceived; 
    }  _remoteStats;
    id  _reportingAgentWeak;
    unsigned short  _statsArrayIndex;
    unsigned int  _statsNoResponseCounter;
    struct tagVCRealTimeThread { unsigned int x1; unsigned int x2; struct _opaque_pthread_mutex_t { long long x_3_1_1; BOOL x_3_1_2[56]; } x3; id x4; int (*x5)(); void *x6; struct OpaqueFigThread {} *x7; int x8; BOOL x9[60]; unsigned int x10; unsigned int x11; } * _statsReceiveThread;
    double  _statsReportingInterval;
    unsigned int  _statsRequestCounter;
    unsigned int  _statsResponseCounter;
    unsigned short  _streamID;
    double  _totalStatsTransportStreamQueueTime;
    VCTransportStreamGFT * _transportStream;
    unsigned int  _uplinkMostRecentSendTimestamp;
    unsigned int  _uplinkServerStatsByteUsed;
    AVCStatisticsCollector * _uplinkStatisticsCollector;
    <VCSessionStatsControllerDelegate> * _weakDelegate;
}

@property (readonly) id reportingAgent;
@property (nonatomic) double statsReportingInterval;

- (void)calculateInterCallbackDurationWithTime:(double)arg1;
- (void)dealloc;
- (void)deregisterPeriodicTask;
- (void)flushRealTimeReportingStats;
- (void)handleRemoteSessionStats:(struct { unsigned char x1; double x2; unsigned char x3[1472]; int x4; int x5; struct tagVCIDSChannelDataFormat { unsigned short x_6_1_1[12]; unsigned char x_6_1_2; bool x_6_1_3; unsigned short x_6_1_4; unsigned char x_6_1_5; bool x_6_1_6; bool x_6_1_7; unsigned long long x_6_1_8; bool x_6_1_9; bool x_6_1_10; bool x_6_1_11; unsigned short x_6_1_12; struct { unsigned short x_13_2_1; unsigned short x_13_2_2; unsigned short x_13_2_3; unsigned short x_13_2_4; unsigned short x_13_2_5; } x_6_1_13; bool x_6_1_14; bool x_6_1_15; bool x_6_1_16; unsigned long long x_6_1_17; bool x_6_1_18; unsigned short x_6_1_19; bool x_6_1_20; bool x_6_1_21; } x6; }*)arg1;
- (void)healthPrintForServerStats;
- (id)initWithDelegate:(id)arg1 connectionManager:(id)arg2 uplinkStatsCollector:(id)arg3 downlinkStatsCollector:(id)arg4 reportingAgent:(struct opaqueRTCReporting { }*)arg5 transportSessionID:(unsigned int)arg6 streamID:(unsigned short)arg7 mediaQueue:(struct tagVCMediaQueue { }*)arg8;
- (bool)isRemoteSessionStatsTooLateWithStatsId:(unsigned short)arg1;
- (void)periodicTask:(void*)arg1;
- (void)registerPeriodicTask;
- (id)reportingAgent;
- (void)reset;
- (void)resetHealthPrintCounters;
- (void)sendLocalStats;
- (void)setStatsReportingInterval:(double)arg1;
- (void)startLocalSessionStatsReceive;
- (void)startLocalSessionStatsSend;
- (void)startLocalSessionStatsUpdate;
- (void)statsReceiveStatsPayload;
- (double)statsReportingInterval;
- (void)stopLocalSessionStatsUpdate;
- (unsigned short)translateTimestampFromMicro:(double)arg1;
- (void)triggerRateControlWithLocalSessionStats:(struct { double x1; unsigned char x2; unsigned short x3; unsigned int x4; unsigned int x5; unsigned int x6; })arg1 time:(double)arg2 forUplink:(bool)arg3 forDownlink:(bool)arg4 fromVCRCExternalThread:(bool)arg5;
- (void)updateRemoteSessionStats:(struct { double x1; unsigned char x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; })arg1;

@end
