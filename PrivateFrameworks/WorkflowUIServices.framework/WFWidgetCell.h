/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/WorkflowUIServices
 */

@interface WFWidgetCell : WFFloatingView {
    NSTimer * _clearCompletedTimer;
    bool  _completingSuccessfully;
    WFFloatingViewConfiguration * _currentConfiguration;
    <WFWidgetCellDelegate> * _delegate;
    bool  _enabled;
    UIImageView * _iconView;
    struct CGSize { 
        double width; 
        double height; 
    }  _iconViewSize;
    long long  _lastKnownWidgetFamily;
    UITextView * _nameView;
    NSProgress * _progress;
    WFWorkflowProgressView * _progressView;
    long long  _runningState;
    WFWorkflowDescriptor * _workflowDescriptor;
    NSString * _workflowIdentifier;
}

@property (nonatomic, retain) NSTimer *clearCompletedTimer;
@property (nonatomic) bool completingSuccessfully;
@property (nonatomic, retain) WFFloatingViewConfiguration *currentConfiguration;
@property (nonatomic) <WFWidgetCellDelegate> *delegate;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic) struct CGSize { double x1; double x2; } iconViewSize;
@property (nonatomic, readonly) bool isRTL;
@property (nonatomic) long long lastKnownWidgetFamily;
@property (nonatomic, retain) UITextView *nameView;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, readonly) WFWorkflowProgressView *progressView;
@property (nonatomic) long long runningState;
@property (nonatomic, readonly) WFWorkflowDescriptor *workflowDescriptor;
@property (nonatomic, readonly, copy) NSString *workflowIdentifier;

// Image: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/WorkflowUIServices

- (void).cxx_destruct;
- (id)clearCompletedTimer;
- (bool)completingSuccessfully;
- (void)configureWithWorkflow:(id)arg1 cornerRadius:(double)arg2 family:(long long)arg3;
- (id)currentConfiguration;
- (id)delegate;
- (id)description;
- (bool)enabled;
- (void)handleTap:(id)arg1;
- (id)iconView;
- (struct CGSize { double x1; double x2; })iconViewSize;
- (id)init;
- (bool)isMultiline;
- (bool)isRTL;
- (long long)lastKnownWidgetFamily;
- (void)layoutSubviews;
- (id)nameView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)progress;
- (id)progressView;
- (void)resetProgressState;
- (void)resetToEmptyState;
- (long long)runningState;
- (void)setClearCompletedTimer:(id)arg1;
- (void)setCompletingSuccessfully:(bool)arg1;
- (void)setCurrentConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIconView:(id)arg1;
- (void)setIconViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLastKnownWidgetFamily:(long long)arg1;
- (void)setNameView:(id)arg1;
- (void)setProgress:(id)arg1;
- (bool)touchIsInView:(id)arg1 event:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (bool)touchesContainNonIndirectTouch:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)workflowDescriptor;
- (id)workflowIdentifier;

// Image: /System/Library/AccessibilityBundles/WorkflowUIServices.axbundle/WorkflowUIServices

+ (Class)safeCategoryBaseClass;

- (id)_axWorkflowCellName;
- (id)accessibilityLabel;
- (bool)isAccessibilityElement;
- (void)setRunningState:(long long)arg1;

@end
