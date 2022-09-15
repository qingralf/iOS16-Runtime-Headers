/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITextInputSessionDeletionAction : _UITextInputSessionAction {
    unsigned long long  _deletionCount;
    unsigned long long  _options;
}

@property (nonatomic) unsigned long long deletionCount;
@property (nonatomic) unsigned long long options;

- (bool)changedContent;
- (unsigned long long)deletionCount;
- (long long)mergeActionIfPossible:(id)arg1;
- (unsigned long long)options;
- (void)setDeletionCount:(unsigned long long)arg1;
- (void)setOptions:(unsigned long long)arg1;

@end