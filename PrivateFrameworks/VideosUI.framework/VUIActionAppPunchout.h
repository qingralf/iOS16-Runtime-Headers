/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIActionAppPunchout : VUIAction {
    VUIAppContext * _appContext;
    bool  _isSensitiveURL;
    NSURL * _punchoutURL;
}

@property (nonatomic) VUIAppContext *appContext;
@property (nonatomic, readonly) bool isSensitiveURL;
@property (nonatomic, readonly) NSURL *punchoutURL;

- (void).cxx_destruct;
- (void)_openPunchoutURL:(id)arg1;
- (id)appContext;
- (id)initWithContextData:(id)arg1 appContext:(id)arg2;
- (bool)isSensitiveURL;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)punchoutURL;
- (void)setAppContext:(id)arg1;

@end