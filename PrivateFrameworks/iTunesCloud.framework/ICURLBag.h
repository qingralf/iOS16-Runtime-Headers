/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICURLBag : NSObject {
    NSArray * _GUIDURLRegexPatterns;
    NSSet * _GUIDURLSchemes;
    <AMSBagProtocol> * _amsBag;
    NSDictionary * _bagValues;
    NSMutableDictionary * _convertedActionsCache;
    NSDate * _expirationDate;
    NSDictionary * _fallbackValues;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _profileName;
    NSString * _profileVersion;
    NSDate * _requestDate;
    NSString * _serverCorrelationKey;
    NSString * _serverEnvironment;
    NSNumber * _sourceAccountDSID;
}

@property (nonatomic, retain) NSArray *GUIDURLRegexPatterns;
@property (nonatomic, retain) NSSet *GUIDURLSchemes;
@property (nonatomic, readonly, copy) NSDictionary *_allValues;
@property (nonatomic, readonly) NSDictionary *_propertyListRepresentation;
@property (nonatomic, readonly, copy) NSDictionary *allValues;
@property (nonatomic, copy) <AMSBagProtocol> *amsBag;
@property (nonatomic, copy) NSDictionary *bagValues;
@property (nonatomic, readonly) bool canPostKeybagSyncData;
@property (nonatomic, retain) NSMutableDictionary *convertedActionsCache;
@property (nonatomic, readonly) ICURLBagEnhancedAudioConfiguration *enhancedAudioConfiguration;
@property (setter=_setExpirationDate:, nonatomic, copy) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (nonatomic, copy) NSDictionary *fallbackValues;
@property (nonatomic, readonly) ICURLBagLibraryDAAPConfiguration *libraryDAAPConfiguration;
@property (nonatomic, readonly, copy) NSString *profileName;
@property (nonatomic, readonly, copy) NSString *profileVersion;
@property (nonatomic, readonly) ICURLBagRadioConfiguration *radioConfiguration;
@property (nonatomic, readonly, copy) NSDate *requestDate;
@property (nonatomic, readonly, copy) NSString *serverCorrelationKey;
@property (nonatomic, readonly, copy) NSString *serverEnvironment;
@property (nonatomic, readonly, copy) NSNumber *sourceAccountDSID;
@property (nonatomic, readonly, copy) NSString *storefrontHeaderSuffix;

+ (id)_allBagKeys;

- (void).cxx_destruct;
- (id)GUIDURLRegexPatterns;
- (id)GUIDURLSchemes;
- (id)_allValues;
- (id)_initWithDictionary:(id)arg1;
- (id)_initWithDictionary:(id)arg1 amsBag:(id)arg2 fallbackValues:(id)arg3 requestDate:(id)arg4 expirationDate:(id)arg5 serverCorrelationKey:(id)arg6 serverEnvironment:(id)arg7 profileName:(id)arg8 profileVersion:(id)arg9 sourceAccountDSID:(id)arg10;
- (id)_initWithPropertyListRepresentation:(id)arg1;
- (id)_knownIncorrectValues;
- (id)_knownMissingBagSubKeyValuesDictionary;
- (id)_knownMissingBagValuesDictionary;
- (id)_knownOptionalBagKeys;
- (id)_logAndReturnFallbackValueForMissingKey:(id)arg1;
- (id)_propertyListRepresentation;
- (void)_setExpirationDate:(id)arg1;
- (bool)_shouldMescalSignBodyForURL:(id)arg1 withSignatureConfiguration:(id)arg2;
- (id)_urlStringFromBagStringValue:(id)arg1;
- (void)_validateGUIDURLConfigIfNeeded;
- (id)_valueForBagKey:(id)arg1;
- (id)allValues;
- (id)amsBag;
- (id)arrayForBagKey:(id)arg1;
- (id)bagValues;
- (bool)boolValueForBagKey:(id)arg1;
- (bool)canPostKeybagSyncData;
- (id)convertedActionsCache;
- (void)createAMSSnapshotBagWithCompletion:(id /* block */)arg1;
- (id)dictionaryForBagKey:(id)arg1;
- (id)enhancedAudioConfiguration;
- (id)expirationDate;
- (id)fallbackValues;
- (bool)hasValueForBagKey:(id)arg1;
- (long long)int64ValueForBagKey:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isExpired;
- (bool)isTrustedHostForURL:(id)arg1;
- (id)libraryDAAPConfiguration;
- (id)mescalConfigurationForRequest:(id)arg1;
- (id)mescalConfigurationForRequestURL:(id)arg1;
- (id)mescalConfigurationForResponse:(id)arg1;
- (id)mescalConfigurationForResponseURL:(id)arg1;
- (id)numberForBagKey:(id)arg1;
- (id)profileName;
- (id)profileVersion;
- (id)radioConfiguration;
- (id)requestDate;
- (id)serverCorrelationKey;
- (id)serverEnvironment;
- (void)setAmsBag:(id)arg1;
- (void)setBagValues:(id)arg1;
- (void)setConvertedActionsCache:(id)arg1;
- (void)setFallbackValues:(id)arg1;
- (void)setGUIDURLRegexPatterns:(id)arg1;
- (void)setGUIDURLSchemes:(id)arg1;
- (bool)shouldAppendDeviceGUIDForURL:(id)arg1;
- (bool)shouldAppendMachineDataHeadersForURL:(id)arg1;
- (id)sourceAccountDSID;
- (id)storefrontHeaderSuffix;
- (id)stringForBagKey:(id)arg1;
- (id)urlForBagKey:(id)arg1;
- (id)valueForBagKey:(id)arg1;
- (id)valuesForBagKeys:(id)arg1;

@end
