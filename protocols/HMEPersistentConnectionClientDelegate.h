/* Generated by RuntimeBrowser.
 */

@protocol HMEPersistentConnectionClientDelegate <HMERouterClientDelegate>

@required

- (NSSet *)forwardingTopicsForTopics:(NSSet *)arg1;
- (void)sendChangeRegistrationsMessageWithAddedFilters:(void *)arg1 removedFilters:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@end
