/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRShareCopyOperation : BRShareOperation {
    id /* block */  _rootShareCopyCompletionBlock;
    id /* block */  _shareCopyCompletionBlock;
}

@property (copy) id /* block */ rootShareCopyCompletionBlock;
@property (copy) id /* block */ shareCopyCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithURL:(id)arg1;
- (void)main;
- (id /* block */)rootShareCopyCompletionBlock;
- (void)setRootShareCopyCompletionBlock:(id /* block */)arg1;
- (void)setShareCopyCompletionBlock:(id /* block */)arg1;
- (id /* block */)shareCopyCompletionBlock;

@end