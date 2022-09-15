/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSMetricsIdentifierStore : NSObject {
    ACAccount * _account;
    AMSProcessInfo * _clientInfo;
    NSString * _domain;
    bool  _includeAccountMatchStatus;
    double  _resetInterval;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic) bool includeAccountMatchStatus;
@property (nonatomic) double resetInterval;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

+ (id)_accountIdentifierForAccount:(id)arg1;
+ (id)_database;
+ (id)_sharedQueue;
+ (id)_sync;
+ (void)cleanupIdentifiers;
+ (id)identifierStoreWithAccount:(id)arg1 bagNamespace:(id)arg2 bag:(id)arg3;
+ (void)removeIdentifiersForAccount:(id)arg1;

- (void).cxx_destruct;
- (void)_generateFutureIdentifiersIfNeededForKeys:(id)arg1 storeInfo:(id)arg2 afterPeriod:(long long)arg3 inDatabase:(id)arg4 date:(id)arg5;
- (id)_generateIdentifierKey:(id)arg1 storeInfo:(id)arg2 period:(long long)arg3;
- (id)_generateStoreKey;
- (id)_identifierInfoForKey:(id)arg1 storeInfo:(id)arg2 period:(long long)arg3 inDatabase:(id)arg4 date:(id)arg5 setValue:(id)arg6 needsToSync:(bool*)arg7 error:(id*)arg8;
- (id)_identifierStoreInfoForKeys:(id)arg1 inDatabase:(id)arg2 date:(id)arg3 needsToSync:(bool*)arg4 error:(id*)arg5;
- (id)_identifiersForKeys:(id)arg1 currentDate:(id)arg2;
- (void)_setIdentifier:(id)arg1 withStartedDate:(id)arg2 forKey:(id)arg3;
- (id)account;
- (id)clientInfo;
- (id)domain;
- (id)generateEventFieldsForKeys:(id)arg1;
- (id)identifierForKey:(id)arg1;
- (id)identifierIfExistsForKey:(id)arg1;
- (bool)includeAccountMatchStatus;
- (void)reset;
- (double)resetInterval;
- (void)setAccount:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setIdentifier:(id)arg1 forKey:(id)arg2;
- (void)setIncludeAccountMatchStatus:(bool)arg1;
- (void)setResetInterval:(double)arg1;

// Image: /System/Library/PrivateFrameworks/JetEngine.framework/JetEngine

- (void)setIdentifier:(id)arg1 effectiveDate:(id)arg2 for:(id)arg3;

@end