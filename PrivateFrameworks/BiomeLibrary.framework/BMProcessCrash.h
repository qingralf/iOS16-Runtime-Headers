/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMProcessCrash : BMEventBase <BMStoreData> {
    NSString * _appVersion;
    NSString * _bundleID;
    NSString * _bundleVersion;
    NSString * _coalitionName;
    BMProcessCrashException * _exception;
    NSString * _incidentID;
    NSString * _processName;
    NSString * _responsibleApp;
    BMProcessCrashTerminationReason * _terminationReason;
}

@property (nonatomic, readonly) NSString *appVersion;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) NSString *coalitionName;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BMProcessCrashException *exception;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *incidentID;
@property (nonatomic, readonly) NSString *processName;
@property (nonatomic, readonly) NSString *responsibleApp;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BMProcessCrashTerminationReason *terminationReason;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)appVersion;
- (id)bundleID;
- (id)bundleVersion;
- (id)coalitionName;
- (unsigned int)dataVersion;
- (id)description;
- (id)exception;
- (id)incidentID;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIncidentID:(id)arg1 processName:(id)arg2 bundleID:(id)arg3 appVersion:(id)arg4 bundleVersion:(id)arg5 exception:(id)arg6 terminationReason:(id)arg7 responsibleApp:(id)arg8;
- (id)initWithIncidentID:(id)arg1 processName:(id)arg2 bundleID:(id)arg3 appVersion:(id)arg4 bundleVersion:(id)arg5 exception:(id)arg6 terminationReason:(id)arg7 responsibleApp:(id)arg8 coalitionName:(id)arg9;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)processName;
- (id)responsibleApp;
- (id)serialize;
- (id)terminationReason;
- (void)writeTo:(id)arg1;

@end