/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
 */

@interface STStatusDomainDataChangeRecord : NSObject {
    BSMutableIntegerMap * _cachedCurrentDataByDomain;
    BSMutableIntegerMap * _entriesByDomain;
    BSMutableIntegerMap * _fallbackDataByClientKeyByDomain;
}

@property (nonatomic, readonly) BSIntegerSet *domainsWithData;

- (void).cxx_destruct;
- (void)addDiff:(id)arg1 forClientKey:(id)arg2 domain:(unsigned long long)arg3;
- (id)currentDataForDomain:(unsigned long long)arg1;
- (id)domainsWithData;
- (id)fallbackDataForClientKey:(id)arg1 domain:(unsigned long long)arg2;
- (id)init;
- (void)removeAllEntriesForClientKey:(id)arg1 domain:(unsigned long long)arg2;
- (void)setData:(id)arg1 forClientKey:(id)arg2 domain:(unsigned long long)arg3;
- (void)setFallbackData:(id)arg1 forClientKey:(id)arg2 domain:(unsigned long long)arg3;

@end
