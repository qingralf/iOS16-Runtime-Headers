/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMTranscoderAgent.framework/IMTranscoderAgent
 */

@interface IMTranscodingAgentController : NSObject {
    NSArray * _fallbackTranscoders;
    NSObject<OS_dispatch_queue> * _previewGenerationQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _transcoders;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_findTranscoderForUTI:(id)arg1;
- (void)_registerTranscoders;
- (void)decodeiMessageAppPayload:(id)arg1 bundleID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)generatePreview:(id)arg1 previewURL:(id)arg2 balloonBundleID:(id)arg3 constraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg4 completionBlock:(id /* block */)arg5;
- (void)generatePreviewMetadata:(id)arg1 destinationURL:(id)arg2 constraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg3 completionBlock:(id /* block */)arg4;
- (void)generateSafeRender:(id)arg1 constraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg2 completionBlock:(id /* block */)arg3;
- (void)generateSnapshotForMessageGUID:(id)arg1 payloadURL:(id)arg2 balloonBundleID:(id)arg3 isFromMe:(bool)arg4 completionBlock:(id /* block */)arg5;
- (id)init;
- (bool)shouldProcessFileTransfer:(id)arg1 utiType:(id)arg2 transcoderUserInfo:(id)arg3 target:(long long)arg4 allowUnfilteredUTIs:(id)arg5 fileSizeLimit:(unsigned long long)arg6;
- (void)sizePreview:(id)arg1 constraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg2 completionBlock:(id /* block */)arg3;
- (void)transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 commonCapabilities:(id)arg6 maxDimension:(unsigned long long)arg7 transcoderUserInfo:(id)arg8 fallback:(bool)arg9 representations:(long long)arg10 completionBlock:(id /* block */)arg11;
- (void)transcodeFileTransferData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 fallBack:(bool)arg4 completionBlock:(id /* block */)arg5;

@end
