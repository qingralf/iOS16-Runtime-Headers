/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSQLiteTableSearchResultEnumerator : NSEnumerator {
    id  _entry;
    bool  _enumerationStarted;
    NSError * _error;
    CKSQLiteCompiledStatement * _statement;
    CKSQLiteTable * _table;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, retain) CKSQLiteCompiledStatement *statement;

- (void).cxx_destruct;
- (id)cksqlcs_appendSQLConstantValueToString:(id)arg1;
- (void)dealloc;
- (id)error;
- (id)initWithTable:(id)arg1 statement:(id)arg2;
- (void)invalidate;
- (id)nextObject;
- (void)setStatement:(id)arg1;
- (id)statement;

@end
