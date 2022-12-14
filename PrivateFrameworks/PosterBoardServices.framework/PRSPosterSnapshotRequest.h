/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterBoardServices.framework/PosterBoardServices
 */

@interface PRSPosterSnapshotRequest : NSObject <BSXPCSecureCoding> {
    long long  _configurationType;
    NSString * _focusModeUUID;
    double  _imageScaleRelativeToScreen;
    unsigned long long  _maxCount;
    unsigned long long  _options;
    long long  _variant;
}

@property (nonatomic, readonly) long long configurationType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *focusModeUUID;
@property (readonly) unsigned long long hash;
@property (nonatomic) double imageScaleRelativeToScreen;
@property (nonatomic, readonly) unsigned long long maxCount;
@property (nonatomic, readonly) unsigned long long options;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long variant;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (long long)configurationType;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)focusModeUUID;
- (double)imageScaleRelativeToScreen;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithFocusModeUUID:(id)arg1 configurationType:(long long)arg2 variant:(long long)arg3 options:(unsigned long long)arg4 maxCount:(unsigned long long)arg5;
- (id)initWithFocusModeUUID:(id)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)maxCount;
- (unsigned long long)options;
- (void)setImageScaleRelativeToScreen:(double)arg1;
- (long long)variant;

@end
