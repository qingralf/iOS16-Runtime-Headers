/* Generated by RuntimeBrowser
   Image: /usr/lib/libAudioStatistics.dylib
 */

@interface CAReportingPerformanceObject : NSObject {
    NSDictionary * _configuration;
    NSString * _hostApplicationDisplayID;
    NSDictionary * _performanceMetrics;
    NSArray * _processIdentifiers;
    unsigned short  _serviceType;
    struct pc_session { } * _session;
}

@property (nonatomic, retain) NSDictionary *configuration;
@property (retain) NSString *hostApplicationDisplayID;
@property (nonatomic, readonly) NSDictionary *performanceMetrics;
@property (retain) NSArray *processIdentifiers;
@property (nonatomic) unsigned short serviceType;
@property struct pc_session { }*session;

- (void).cxx_destruct;
- (void)begin;
- (id)configuration;
- (id)endAndReturnPerformanceMetrics;
- (id)hostApplicationDisplayID;
- (id)initWithProcessIdentifiers:(id)arg1;
- (id)performanceMetrics;
- (id)processIdentifiers;
- (unsigned short)serviceType;
- (struct pc_session { }*)session;
- (void)setConfiguration:(id)arg1;
- (void)setHostApplicationDisplayID:(id)arg1;
- (void)setProcessIdentifiers:(id)arg1;
- (void)setServiceType:(unsigned short)arg1;
- (void)setSession:(struct pc_session { }*)arg1;

@end
