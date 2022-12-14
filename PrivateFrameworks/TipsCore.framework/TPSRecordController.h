/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
 */

@interface TPSRecordController : NSObject <_TPSXPCExportable> {
    TPSRecordDataProvider * _dataProvider;
    _TPSXPCConnection * _xpcConnection;
}

@property (nonatomic) TPSRecordDataProvider *dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) _TPSXPCConnection *xpcConnection;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_destroyXPCConnection;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)dataProvider;
- (id)exportedInterface;
- (void)persistRecord:(id)arg1;
- (void)persistRecords:(id)arg1;
- (void)persistRecordsFromTipsd:(id)arg1;
- (id)recordQueue;
- (id)remoteInterface;
- (void)setDataProvider:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
