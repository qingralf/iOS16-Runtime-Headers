/* Generated by RuntimeBrowser.
 */

@protocol MKFAction <MKFModel, MKFActionPublicExtensions>

@required

- (<MKFActionSet> *)actionSet;
- (MKFActionDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (NSUUID *)modelID;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (NSDate *)writerTimestamp;

@end
