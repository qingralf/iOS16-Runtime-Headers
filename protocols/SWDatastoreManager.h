/* Generated by RuntimeBrowser.
 */

@protocol SWDatastoreManager <NSObject>

@required

- (void)addObserver:(id <SWDatastoreObserver>)arg1;
- (SWDatastore *)datastore;
- (void)removeObserver:(id <SWDatastoreObserver>)arg1;
- (void)updateDatastore:(void *)arg1 originatingSession:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: SWDatastore *, <SWSession> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end