/* Generated by RuntimeBrowser.
 */

@protocol CDBRecordIDMap <NSObject>

@required

- (const struct CalRecordID { }*)recordIDForExternalIdentifier:(NSString *)arg1;
- (const struct CalRecordID { }*)recordIDForUniqueIdentifier:(NSString *)arg1;
- (void)setExternalIdentifier:(NSString *)arg1 forRecordID:(const struct CalRecordID { }*)arg2;
- (void)setUniqueIdentifier:(NSString *)arg1 forRecordID:(const struct CalRecordID { }*)arg2;

@end