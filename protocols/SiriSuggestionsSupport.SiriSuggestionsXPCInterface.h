/* Generated by RuntimeBrowser.
 */

@protocol SiriSuggestionsSupport.SiriSuggestionsXPCInterface

@required

- (void)refreshServiceWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)submitFor:(void *)arg1 propertyKey:(void *)arg2 propertyValue:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)suggestNextWithRequestId:(void *)arg1 extraStateStoreProperties:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*

@end