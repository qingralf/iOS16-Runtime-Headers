/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UINavigationBarTitleRenamerSession : NSObject {
    _UINavigationBarTitleRenamer * _attachedRenamer;
    _UINavigationItemRenameHandler * _renameHandler;
    NSString * _title;
}

@property (nonatomic) _UINavigationBarTitleRenamer *attachedRenamer;
@property (nonatomic, readonly) UINavigationItem *navigationItem;
@property (nonatomic, readonly) _UINavigationItemRenameHandler *renameHandler;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)_sanitizedTitleForTitle:(id)arg1;
- (void)_textFieldDidEndEditingWithText:(id)arg1;
- (bool)_textFieldShouldEndEditingWithText:(id)arg1;
- (id)_willBeginRenamingWithText:(id)arg1 selectedRange:(inout struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (void)_willBeginRenamingWithTextField:(id)arg1;
- (id)attachedRenamer;
- (id)initWithRenameHandler:(id)arg1 suggestedTitle:(id)arg2;
- (id)navigationItem;
- (id)renameHandler;
- (void)setAttachedRenamer:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end