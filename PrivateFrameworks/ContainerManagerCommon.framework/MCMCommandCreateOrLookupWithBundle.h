/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContainerManagerCommon.framework/ContainerManagerCommon
 */

@interface MCMCommandCreateOrLookupWithBundle : MCMCommand <MCMParametersCreateOrLookupWithBundle> {
    NSURL * _bundleURL;
    bool  _createIfNecessary;
    NSURL * _executableURL;
    bool  _issueSandboxExtension;
    const char * _sandboxToken;
    bool  _transient;
}

@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) bool createIfNecessary;
@property (nonatomic, readonly) NSURL *executableURL;
@property (nonatomic, readonly) bool issueSandboxExtension;
@property (nonatomic, readonly) const char *sandboxToken;
@property (nonatomic, readonly) bool transient;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (id)bundleURL;
- (bool)createIfNecessary;
- (id)executableURL;
- (void)execute;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (bool)issueSandboxExtension;
- (bool)preflightClientAllowed;
- (const char *)sandboxToken;
- (bool)transient;

@end