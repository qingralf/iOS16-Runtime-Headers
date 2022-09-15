/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFToggleAlarmContextualAction : WFContextualAction {
    NSString * _alarmIdentifier;
    NSString * _alarmName;
    unsigned long long  _operation;
}

@property (nonatomic, readonly, copy) NSString *alarmIdentifier;
@property (nonatomic, readonly, copy) NSString *alarmName;
@property (nonatomic, readonly) unsigned long long operation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alarmIdentifier;
- (id)alarmName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAlarmIdentifier:(id)arg1 alarmName:(id)arg2 operation:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)operation;
- (bool)showsUserInterfaceWhenRunning;
- (id)uniqueIdentifier;

@end