/* Generated by RuntimeBrowser.
 */

@protocol CNContactHeaderViewDelegate <NSObject>

@required

- (CNContactViewCache *)contactViewCache;
- (void)headerPhotoDidUpdate;
- (void)headerView:(CNContactHeaderView *)arg1 didAcceptDropOfImageData:(NSData *)arg2;
- (void)headerViewDidPickPreferredChannel:(NSString *)arg1;
- (void)headerViewDidUpdateLabelSizes;
- (bool)isNicknameProhibited;
- (UIViewController *)viewControllerForHeaderView:(CNContactHeaderView *)arg1;

@end
