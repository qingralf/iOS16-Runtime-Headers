/* Generated by RuntimeBrowser.
 */

@protocol WFUIPresenterConnection <NSObject>

@required

- (<WFUIPresenterInterface> *)presenterWithErrorHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@optional

- (<WFUIPresenterHostInterface> *)host;
- (void)setHost:(id <WFUIPresenterHostInterface>)arg1;
- (<WFUIPresenterInterface> *)synchronousPresenterWithErrorHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
