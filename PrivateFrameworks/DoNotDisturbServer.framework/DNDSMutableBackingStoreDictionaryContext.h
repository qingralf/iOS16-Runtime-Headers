/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSMutableBackingStoreDictionaryContext : DNDSBackingStoreDictionaryContext

@property (nonatomic, retain) <DNDSApplicationIdentifierMapping> *applicationIdentifierMapper;
@property (nonatomic, retain) NSArray *arrayHealingSource;
@property (nonatomic, retain) <DNDSContactProviding> *contactProvider;
@property (nonatomic) unsigned long long destination;
@property (nonatomic, retain) NSDictionary *healingSource;
@property (nonatomic) unsigned long long partitionType;
@property (nonatomic) bool redactSensitiveData;

- (void)setApplicationIdentifierMapper:(id)arg1;
- (void)setArrayHealingSource:(id)arg1;
- (void)setContactProvider:(id)arg1;
- (void)setDestination:(unsigned long long)arg1;
- (void)setHealingSource:(id)arg1;
- (void)setPartitionType:(unsigned long long)arg1;
- (void)setRedactSensitiveData:(bool)arg1;

@end