/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DeviceActivityConductor.framework/DeviceActivityConductor
 */

@interface DACActivityList : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray * _activeActivities;
    NSDate * _lastModified;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, readonly) NSMutableArray *activeActivities;
@property (nonatomic, readonly) NSDate *lastModified;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activityDeltaFromList:(id)arg1 completion:(id /* block */)arg2;
- (void)_addActivityEntry:(id)arg1;
- (id)_entryOfActivity:(id)arg1;
- (unsigned long long)_indexOfActivity:(id)arg1;
- (unsigned long long)_insertionIndex:(id)arg1;
- (void)_reconcileReasons;
- (bool)_removeActivity:(id)arg1 origin:(id)arg2;
- (unsigned long long)_stateOfActivity:(id)arg1;
- (unsigned long long)_stateOfActivityAtIndex:(unsigned long long)arg1;
- (void)_updateModificationDate;
- (void)_updateReason:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)_withLock:(id /* block */)arg1;
- (id)activeActivities;
- (unsigned long long)activityCount;
- (bool)addActivity:(id)arg1 requester:(id)arg2;
- (void)changesFromList:(id)arg1 info:(id /* block */)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateList:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualIgnoringLastModified:(id)arg1;
- (bool)isEqualToActivityList:(id)arg1;
- (id)lastModified;
- (id)listWithMerge:(id)arg1;
- (bool)removeActivity:(id)arg1 requester:(id)arg2;
- (void)splitLocalOnly:(id /* block */)arg1;
- (unsigned long long)stateOfActivity:(id)arg1;

@end