/* Generated by RuntimeBrowser.
 */

@protocol CPBackgroundSessionManagerXPCClient

@required

- (void)beginWithRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: TUConversationActivityCreateSessionRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)endWithActivity:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: TUConversationActivity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)updateShare:(void *)arg1 activityID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CKShare *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
