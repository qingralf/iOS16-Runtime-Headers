/* Generated by RuntimeBrowser.
 */

@protocol VCDaemonXPCInterface <VCVoiceShortcutManagerXPCInterface>

@required

- (void)getSortedVisibleFoldersWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getSortedVisibleWorkflowsByNameWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getSortedVisibleWorkflowsInCollection:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: WFWorkflowCollection *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getSortedWorkflowsWithQuery:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: WFWorkflowQuery *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end