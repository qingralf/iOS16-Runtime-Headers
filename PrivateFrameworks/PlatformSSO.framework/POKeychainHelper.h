/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlatformSSO.framework/PlatformSSO
 */

@interface POKeychainHelper : NSObject

- (int)addTokens:(id)arg1 metaData:(id)arg2 toKeychainForService:(id)arg3 username:(id)arg4;
- (int)removeTokensFromKeychainWithService:(id)arg1 username:(id)arg2;
- (int)retrieveTokensFromKeychainForService:(id)arg1 username:(id)arg2 returningTokens:(id*)arg3 metaData:(id*)arg4;

@end
