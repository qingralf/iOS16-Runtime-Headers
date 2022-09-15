/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIActionPlayParams : NSObject {
    id /* block */  _completion;
    bool  _isRentAndWatchNow;
    VUIMediaInfo * _mediaInfo;
    long long  _watchType;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) bool isRentAndWatchNow;
@property (nonatomic, retain) VUIMediaInfo *mediaInfo;
@property (nonatomic) long long watchType;

+ (id)playParamsWithMediaInfo:(id)arg1 watchType:(long long)arg2 isRentAndWatchNow:(bool)arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (id /* block */)completion;
- (bool)isRentAndWatchNow;
- (id)mediaInfo;
- (void)setCompletion:(id /* block */)arg1;
- (void)setIsRentAndWatchNow:(bool)arg1;
- (void)setMediaInfo:(id)arg1;
- (void)setWatchType:(long long)arg1;
- (long long)watchType;

@end