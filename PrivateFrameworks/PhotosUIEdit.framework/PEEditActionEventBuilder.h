/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIEdit.framework/PhotosUIEdit
 */

@interface PEEditActionEventBuilder : NSObject {
    PEEditAction * _action;
    NSString * _actionDescription;
    NSArray * _assets;
    bool  _hasError;
}

@property (nonatomic, retain) PEEditAction *action;
@property (nonatomic, retain) NSString *actionDescription;
@property (nonatomic, retain) NSArray *assets;
@property (nonatomic) bool hasError;

- (void).cxx_destruct;
- (id)action;
- (id)actionDescription;
- (id)assets;
- (id)buildEvent;
- (bool)hasError;
- (void)setAction:(id)arg1;
- (void)setActionDescription:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setHasError:(bool)arg1;

@end