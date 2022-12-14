/* Generated by RuntimeBrowser.
 */

@protocol PREResponsesProtocol

@required

- (void)preResponseItemsForMessage:(void *)arg1 maximumResponses:(void *)arg2 conversationHistory:(void *)arg3 forContext:(void *)arg4 time:(void *)arg5 language:(void *)arg6 recipientHandles:(void *)arg7 modelFilePath:(void *)arg8 modelConfigPath:(void *)arg9 espressoBinFilePath:(void *)arg10 vocabFilePath:(void *)arg11 registerDisplayed:(void *)arg12 includeCustomResponses:(void *)arg13 includeResponsesToRobots:(void *)arg14 completion:(void *)arg15; // needs 15 arg types, found 21: NSString *, unsigned long long, NSArray *, NSString *, NSDate *, NSString *, NSArray *, NSString *, NSString *, NSString *, NSString *, bool, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)registerResponse:(NSString *)arg1 position:(NSNumber *)arg2 isCanned:(bool)arg3 isUsingQuickResponses:(bool)arg4 locale:(NSString *)arg5 modelConfigPath:(NSString *)arg6 vocabPath:(NSString *)arg7;

@end
