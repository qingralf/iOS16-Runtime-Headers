/* Generated by RuntimeBrowser.
 */

@protocol PSCloudSyncDelegate <NSObject>

@required

- (void)isCloudSyncEnabled:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@optional

- (bool)hasMergeConflict;
- (void)resolveMergeConflict:(unsigned long long)arg1;
- (void)setCloudSyncEnabled:(bool)arg1;

@end
