/* Generated by RuntimeBrowser.
 */

@protocol POExtensionRegistrationProtocol <NSObject>

@required

- (void)beginDeviceRegistrationUsingOptions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)beginUserRegistrationUsingUserName:(void *)arg1 authenticationMethod:(void *)arg2 options:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, int, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*

@optional

- (void)registrationDidComplete;

@end
