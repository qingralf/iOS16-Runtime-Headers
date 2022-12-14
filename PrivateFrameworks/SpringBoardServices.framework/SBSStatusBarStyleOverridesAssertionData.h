/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSStatusBarStyleOverridesAssertionData : NSObject <BSDescriptionProviding, NSSecureCoding> {
    bool  _exclusive;
    int  _pid;
    bool  _showsWhenForeground;
    unsigned long long  _statusBarStyleOverrides;
    NSString * _statusString;
    NSString * _uniqueIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExclusive, nonatomic) bool exclusive;
@property (readonly) unsigned long long hash;
@property (nonatomic) int pid;
@property (nonatomic) bool showsWhenForeground;
@property (nonatomic) unsigned long long statusBarStyleOverrides;
@property (nonatomic, copy) NSString *statusString;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatusBarStyleOverrides:(unsigned long long)arg1 forPID:(int)arg2 exclusive:(bool)arg3 showsWhenForeground:(bool)arg4;
- (id)initWithStatusBarStyleOverrides:(unsigned long long)arg1 forPID:(int)arg2 exclusive:(bool)arg3 showsWhenForeground:(bool)arg4 uniqueIdentifier:(id)arg5;
- (bool)isExclusive;
- (int)pid;
- (void)setExclusive:(bool)arg1;
- (void)setPid:(int)arg1;
- (void)setShowsWhenForeground:(bool)arg1;
- (void)setStatusBarStyleOverrides:(unsigned long long)arg1;
- (void)setStatusString:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (bool)showsWhenForeground;
- (unsigned long long)statusBarStyleOverrides;
- (id)statusString;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)uniqueIdentifier;

@end
