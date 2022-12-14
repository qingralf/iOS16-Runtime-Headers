/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
 */

@interface ASAuthorizationSingleSignOnRequest : ASAuthorizationOpenIDRequest {
    NSArray * _authorizationOptions;
    bool  _userInterfaceEnabled;
}

@property (nonatomic, copy) NSArray *authorizationOptions;
@property (getter=isUserInterfaceEnabled, nonatomic) bool userInterfaceEnabled;

- (void).cxx_destruct;
- (id)authorizationOptions;
- (id)initWithProvider:(id)arg1;
- (bool)isUserInterfaceEnabled;
- (void)setAuthorizationOptions:(id)arg1;
- (void)setUserInterfaceEnabled:(bool)arg1;
- (bool)supportsStyle:(long long)arg1;

@end
