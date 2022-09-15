/* Generated by RuntimeBrowser.
 */

@protocol GTFileWriterService

@required

- (void)abortSession:(unsigned long long)arg1;
- (void)beginTransferSessionWithFileEntries:(void *)arg1 basePath:(void *)arg2 device:(void *)arg3 config:(void *)arg4 sessionID:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 11: NSArray *, NSString *, NSUUID *, struct { unsigned int x1; unsigned int x2; unsigned int x3; }, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)finishSession:(unsigned long long)arg1;
- (void)initiateTransfer:(void *)arg1 basePath:(void *)arg2 device:(void *)arg3 config:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: NSArray *, NSString *, NSUUID *, struct { unsigned int x1; unsigned int x2; unsigned int x3; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)writeFileChunks:(void *)arg1 withData:(void *)arg2 session:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSArray *, NSData *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end