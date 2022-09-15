/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivityKit.framework/ActivityKit
 */

@interface ACActivityPresentationOptions : NSObject <NSCopying> {
    bool  _isUserDismissalAllowedOnLockScreen;
    bool  _showsAuthorizationOptions;
}

@property (nonatomic) bool showsAuthorizationOptions;
@property (getter=isUserDismissalAllowedOnLockScreen, nonatomic) bool userDismissalAllowedOnLockScreen;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initFromSwift:(bool)arg1;
- (bool)isUserDismissalAllowedOnLockScreen;
- (void)setShowsAuthorizationOptions:(bool)arg1;
- (void)setUserDismissalAllowedOnLockScreen:(bool)arg1;
- (bool)showsAuthorizationOptions;

@end