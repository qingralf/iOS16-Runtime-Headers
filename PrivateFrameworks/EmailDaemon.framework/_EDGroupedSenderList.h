/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface _EDGroupedSenderList : NSObject {
    id /* block */  _comparator;
    NSMutableDictionary * _groupsBySender;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableOrderedSet * _orderedGroups;
}

@property (nonatomic, readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)_checkConsistencyAndRebuildIfNecessary;
- (void)addGroupedSender:(id)arg1;
- (unsigned long long)count;
- (id)groupedSenderAtIndex:(unsigned long long)arg1;
- (id)groupedSenderForSenderAddress:(id)arg1;
- (id)initWithSortDescriptors:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)orderedGroupedSendersWithLimit:(unsigned long long)arg1;
- (void)removeGroupedSender:(id)arg1;

@end