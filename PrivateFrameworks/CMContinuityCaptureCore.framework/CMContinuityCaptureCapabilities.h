/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMContinuityCaptureCore.framework/CMContinuityCaptureCore
 */

@interface CMContinuityCaptureCapabilities : NSObject <CMContinuityCaptureDictionaryRepresentable> {
    struct { 
        long long major; 
        long long minor; 
        long long patch; 
    }  _capabilitiesVersion;
    NSArray * _devicesCapabilities;
    bool  _inUse;
    bool  _userDisabled;
}

@property (nonatomic, readonly) struct { long long x1; long long x2; long long x3; } capabilitiesVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *devicesCapabilities;
@property (readonly) unsigned long long hash;
@property (readonly) bool inUse;
@property (readonly) Class superclass;
@property (readonly) bool userDisabled;

+ (id)capabilitiesForCurrentDevice;

- (void).cxx_destruct;
- (struct { long long x1; long long x2; long long x3; })capabilitiesVersion;
- (id)debugDescription;
- (id)description;
- (id)devicesCapabilities;
- (id)dictionaryRepresentation;
- (bool)inUse;
- (id)initWithCapabilitiesVersion:(struct { long long x1; long long x2; long long x3; })arg1 devicesCapabilities:(id)arg2 userDisabled:(bool)arg3 inUse:(bool)arg4;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)userDisabled;

@end
