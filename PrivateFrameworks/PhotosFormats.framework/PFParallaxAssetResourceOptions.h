/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFParallaxAssetResourceOptions : NSObject {
    bool  _aspectFit;
    id /* block */  _canHandleAdjustmentData;
    id /* block */  _downloadProgressHandler;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    bool  _networkAccessAllowed;
    bool  _nonUserInitiatedDownload;
    NSObject<OS_dispatch_queue> * _resultHandlerQueue;
}

@property (nonatomic) bool aspectFit;
@property (nonatomic, copy) id /* block */ canHandleAdjustmentData;
@property (nonatomic, copy) id /* block */ downloadProgressHandler;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic) bool networkAccessAllowed;
@property (nonatomic) bool nonUserInitiatedDownload;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *resultHandlerQueue;

- (void).cxx_destruct;
- (bool)aspectFit;
- (id /* block */)canHandleAdjustmentData;
- (id /* block */)downloadProgressHandler;
- (struct CGSize { double x1; double x2; })imageSize;
- (bool)networkAccessAllowed;
- (bool)nonUserInitiatedDownload;
- (id)resultHandlerQueue;
- (void)setAspectFit:(bool)arg1;
- (void)setCanHandleAdjustmentData:(id /* block */)arg1;
- (void)setDownloadProgressHandler:(id /* block */)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setNonUserInitiatedDownload:(bool)arg1;
- (void)setResultHandlerQueue:(id)arg1;

@end
