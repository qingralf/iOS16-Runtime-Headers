/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKNanoReplyGenerator : NSObject

+ (void)_contextualRepliesForMessage:(id)arg1 senderMessages:(id)arg2 recipients:(id)arg3 time:(id)arg4 languageCode:(id)arg5 languageCodeChangeDate:(id)arg6 loadAsync:(bool)arg7 includeDynamicSuggestions:(bool)arg8 completion:(id /* block */)arg9;
+ (void)_repliesForMessage:(id)arg1 senderMessages:(id)arg2 recipients:(id)arg3 time:(id)arg4 languageCode:(id)arg5 languageCodeChangeDate:(id)arg6 loadAsync:(bool)arg7 completion:(id /* block */)arg8;
+ (void)primeResponseKitIfNeeded;
+ (id)repliesForMessage:(id)arg1 senderMessages:(id)arg2 recipients:(id)arg3 time:(id)arg4 languageCode:(id)arg5 languageCodeChangeDate:(id)arg6;
+ (void)repliesForMessage:(id)arg1 senderMessages:(id)arg2 recipients:(id)arg3 time:(id)arg4 languageCode:(id)arg5 languageCodeChangeDate:(id)arg6 completion:(id /* block */)arg7;

@end
