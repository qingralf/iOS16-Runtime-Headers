/* Generated by RuntimeBrowser.
 */

@protocol AMSCookieServiceInterface <NSObject>

@required

- (void)getCookiesForAccount:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)updateCookiesWithCookiesToAdd:(void *)arg1 cookiesToRemove:(void *)arg2 forAccount:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 10: NSArray *, NSArray *, ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
