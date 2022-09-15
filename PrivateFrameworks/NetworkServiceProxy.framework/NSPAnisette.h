/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPAnisette : NSObject <NSPAuthentication>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)authenticationFailure;
+ (id)description;
+ (void)sendRequestForTokens:(id)arg1 tokenFetchURLSession:(id)arg2 messageBody:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)sendRequestForTokens:(id)arg1 tokenFetchURLSession:(id)arg2 tokenActivationQuery:(id)arg3 completionHandler:(id /* block */)arg4;

@end