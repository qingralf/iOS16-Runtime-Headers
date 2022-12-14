/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFRunShortcutErrorEvent : WFEvent {
    NSString * _actionIdentifier;
    bool  _didRunRemotely;
    NSString * _errorCode;
    NSString * _errorDomain;
    NSString * _key;
}

@property (nonatomic, copy) NSString *actionIdentifier;
@property (nonatomic) bool didRunRemotely;
@property (nonatomic, copy) NSString *errorCode;
@property (nonatomic, copy) NSString *errorDomain;
@property (nonatomic, copy) NSString *key;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (bool)didRunRemotely;
- (id)errorCode;
- (id)errorDomain;
- (id)key;
- (void)setActionIdentifier:(id)arg1;
- (void)setDidRunRemotely:(bool)arg1;
- (void)setErrorCode:(id)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setKey:(id)arg1;

@end
