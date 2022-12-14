/* Generated by RuntimeBrowser.
 */

@protocol ICTableDelegate <CRUndoDelegate>

@optional

- (void)tableDidCreateColumnTextStorage:(TTTextStorage *)arg1;
- (void)tableDidInsertColumnID:(NSUUID *)arg1;
- (void)tableDidPopulateCellAtColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2;
- (void)tableWillRemoveColumnID:(NSUUID *)arg1;

@end
