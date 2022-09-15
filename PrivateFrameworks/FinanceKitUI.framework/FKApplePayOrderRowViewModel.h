/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FinanceKitUI.framework/FinanceKitUI
 */

@interface FKApplePayOrderRowViewModel : NSObject {
    id /* block */  _cellConfigurationHandler;
    NSString * _fulfillmentIdentifier;
    NSString * _orderIdentifier;
    NSString * _orderTypeIdentifier;
}

@property (nonatomic, readonly, copy) id /* block */ cellConfigurationHandler;
@property (nonatomic, readonly, copy) NSString *fulfillmentIdentifier;
@property (nonatomic, readonly, copy) NSString *orderIdentifier;
@property (nonatomic, readonly, copy) NSString *orderTypeIdentifier;
@property (nonatomic, readonly, copy) NSString *subtitleText;
@property (nonatomic, readonly, copy) NSString *titleText;

- (void).cxx_destruct;
- (id /* block */)cellConfigurationHandler;
- (void)configureCell:(id)arg1;
- (id)fulfillmentIdentifier;
- (id)initWithOrderTypeIdentifier:(id)arg1 orderIdentifier:(id)arg2 fulfillmentIdentifier:(id)arg3 cellConfigurationHandler:(id /* block */)arg4;
- (id)orderIdentifier;
- (id)orderTypeIdentifier;
- (id)subtitleText;
- (id)titleText;

@end