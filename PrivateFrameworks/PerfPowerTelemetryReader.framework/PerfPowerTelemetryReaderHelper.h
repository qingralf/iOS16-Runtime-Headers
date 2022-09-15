/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerfPowerTelemetryReader.framework/PerfPowerTelemetryReader
 */

@interface PerfPowerTelemetryReaderHelper : NSObject {
    NSXPCConnection * _connectionToServer;
}

@property (nonatomic, retain) NSXPCConnection *connectionToServer;

- (void).cxx_destruct;
- (void)closeXPCConnection;
- (id)connectionToServer;
- (id)createXPCConnection;
- (id)postDataRequest:(id)arg1 outError:(id*)arg2;
- (void)setConnectionToServer:(id)arg1;

@end