/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContainerManagerCommon.framework/ContainerManagerCommon
 */

@interface MCMCommandGetPrimordialDataContainer : MCMCommand <MCMParametersGetPrimordialDataContainer> {
    bool  _extension;
    unsigned int  _platform;
    bool  _useCodeSignDatabase;
}

@property (getter=isExtension, nonatomic, readonly) bool extension;
@property (nonatomic, readonly) unsigned int platform;
@property (nonatomic, readonly) bool useCodeSignDatabase;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (bool)isExtension;
- (unsigned int)platform;
- (bool)preflightClientAllowed;
- (bool)useCodeSignDatabase;

@end