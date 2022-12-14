/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAPReportLogMsgRequest : GEOXPCRequest <GEOXPCRequest> {
    NSData * _logMsgData;
    unsigned long long  _uploadBatchId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *logMsgData;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long uploadBatchId;

+ (Class)replyClass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (bool)expectsReply;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (id)logMsgData;
- (void)setLogMsgData:(id)arg1;
- (void)setUploadBatchId:(unsigned long long)arg1;
- (unsigned long long)uploadBatchId;

@end
