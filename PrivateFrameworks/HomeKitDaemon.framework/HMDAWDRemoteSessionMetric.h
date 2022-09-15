/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDAWDRemoteSessionMetric : HMMLogEvent <HMDAWDLogEvent> {
    bool  _authenticated;
    int  _closeReason;
    NSDate * _creation;
    int  _role;
    NSUUID * _sessionID;
    bool  _submitted;
}

@property (getter=isAuthenticated) bool authenticated;
@property (nonatomic, readonly) int closeReason;
@property (nonatomic, retain) NSDate *creation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int role;
@property (nonatomic, readonly) NSUUID *sessionID;
@property (nonatomic) bool submitted;
@property (readonly) Class superclass;

+ (int)closeReasonFromError:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (int)closeReason;
- (id)creation;
- (id)initWithClientMode:(bool)arg1 sessionID:(id)arg2;
- (bool)isAuthenticated;
- (id)metricForAWD;
- (void)open;
- (int)role;
- (id)sessionID;
- (void)setAuthenticated:(bool)arg1;
- (void)setCreation:(id)arg1;
- (void)setSubmitted:(bool)arg1;
- (bool)submitted;

@end