/* Generated by RuntimeBrowser.
 */

@protocol SKProductPageExtensionServiceInterface <NSObject>

@required

- (void)clientLookupItemDidLoad:(AMSLookupItem *)arg1 parameters:(NSDictionary *)arg2;
- (void)setAskToBuy:(bool)arg1;
- (void)setCancelButtonTitle:(NSString *)arg1;
- (void)setPreview:(NSNumber *)arg1;
- (void)setPromptString:(NSString *)arg1;
- (void)setRightBarButtonTitle:(NSString *)arg1;
- (void)setShowsRightBarButton:(bool)arg1;
- (void)setShowsStoreButton:(bool)arg1;
- (void)setUsageContext:(NSString *)arg1;
- (void)setVisibleInClientWindow:(NSNumber *)arg1;
- (void)setupWithClientBundleID:(NSString *)arg1 bagType:(long long)arg2;

@end
