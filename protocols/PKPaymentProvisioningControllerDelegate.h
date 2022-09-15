/* Generated by RuntimeBrowser.
 */

@protocol PKPaymentProvisioningControllerDelegate <NSObject>

@optional

- (void)metadataUpdatedOnCredenitals;
- (void)paymentPassUpdatedOnCredential:(PKPaymentCredential *)arg1;
- (void)preflightRequirementsUpdated:(unsigned long long)arg1 displaybleError:(NSError *)arg2;
- (void)provisioningControllerUpdatedAccounts:(PKPaymentProvisioningController *)arg1;
- (void)provisioningControllerUpdatedProducts:(PKPaymentProvisioningController *)arg1;

@end