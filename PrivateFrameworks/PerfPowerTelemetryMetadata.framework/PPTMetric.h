/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerfPowerTelemetryMetadata.framework/PerfPowerTelemetryMetadata
 */

@interface PPTMetric : NSObject {
    PPTCadence * _cadence;
    NSString * _category;
    int  _datatype;
    int  _deviceCapability;
    int  _directionality;
    int  _enabledPopulation;
    int  _mode;
    NSString * _name;
    int  _obfuscation;
    PPTRounding * _rounding;
    PPTSource * _source;
    int  _storage;
    NSString * _subsystem;
    unsigned int  _timeToLive;
    PPTUnit * _unit;
    double  _version;
}

@property (readonly) PPTCadence *cadence;
@property (readonly) NSString *category;
@property (readonly) int datatype;
@property (readonly) int deviceCapability;
@property (readonly) int directionality;
@property (readonly) int enabledPopulation;
@property (readonly) int mode;
@property (readonly) NSString *name;
@property (readonly) int obfuscation;
@property (readonly) PPTRounding *rounding;
@property (readonly) PPTSource *source;
@property (readonly) int storage;
@property (readonly) NSString *subsystem;
@property (readonly) unsigned int timeToLive;
@property (readonly) PPTUnit *unit;
@property (readonly) double version;

+ (bool)isValidCategory:(id)arg1;
+ (bool)isValidDatatype:(int)arg1;
+ (bool)isValidDeviceCapability:(int)arg1;
+ (bool)isValidDirectionality:(int)arg1;
+ (bool)isValidMetricJSON:(id)arg1;
+ (bool)isValidMode:(int)arg1;
+ (bool)isValidName:(id)arg1;
+ (bool)isValidObfuscation:(int)arg1;
+ (bool)isValidPopulation:(int)arg1;
+ (bool)isValidStorage:(int)arg1;
+ (bool)isValidSubsystem:(id)arg1;
+ (bool)isValidTTL:(unsigned int)arg1;
+ (bool)isValidVersion:(double)arg1;
+ (id)jsonDataWithMetrics:(id)arg1;
+ (id)metricWithJSONObject:(id)arg1;
+ (id)metricWithProto:(id)arg1;
+ (id)metricsWithJSONData:(id)arg1;
+ (id)metricsWithPlist:(id)arg1;

- (void).cxx_destruct;
- (id)cadence;
- (id)category;
- (int)datatype;
- (int)deviceCapability;
- (int)directionality;
- (int)enabledPopulation;
- (id)init;
- (id)initWithName:(id)arg1 subsystem:(id)arg2 category:(id)arg3 version:(double)arg4 datatype:(int)arg5 unit:(id)arg6 cadence:(id)arg7 directionality:(int)arg8 storage:(int)arg9 timeToLive:(unsigned int)arg10 mode:(int)arg11 source:(id)arg12 deviceCapability:(int)arg13 population:(int)arg14 rounding:(id)arg15 obfuscation:(int)arg16;
- (id)initWithName:(id)arg1 version:(double)arg2 datatype:(int)arg3 unit:(id)arg4 baseMetric:(id)arg5;
- (id)initWithName:(id)arg1 version:(double)arg2 datatype:(int)arg3 unit:(id)arg4 rounding:(id)arg5 obfuscation:(int)arg6 baseMetric:(id)arg7;
- (id)json;
- (int)mode;
- (id)name;
- (int)obfuscation;
- (id)proto;
- (id)rounding;
- (id)source;
- (int)storage;
- (id)subsystem;
- (unsigned int)timeToLive;
- (id)unit;
- (double)version;

@end
