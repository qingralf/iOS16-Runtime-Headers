/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFWorkflowRunDescriptor : NSObject <NSSecureCoding>

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void)createWorkflowWithEnvironment:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)donateRunInteractionWithDatabase:(id)arg1;
- (id)workflowFileDataWithDatabase:(id)arg1 error:(id*)arg2;
- (id)workflowReferenceWithDatabase:(id)arg1 error:(id*)arg2;

@end