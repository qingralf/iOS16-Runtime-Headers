/* Generated by RuntimeBrowser.
 */

@protocol COStateManagerLegacyServiceInterface

@required

- (void)isMediaSystemLeader:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)registerForMediaSystemLeaderChange;
- (void)requestCompositionForCluster:(void *)arg1 withCallback:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)unregisterForMediaSystemLeaderChange;

@end
