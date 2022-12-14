/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSchedulerActivity : NSObject <NSCopying> {
    CKContainer * _container;
    CKContainerID * _containerID;
    NSDate * _earliestStartDate;
    unsigned long long  _expectedTransferSizeBytes;
    NSString * _identifier;
    long long  _priority;
    NSArray * _relatedApplicationBundleIdentifiers;
    bool  _shouldDefer;
    bool  _userRequestedBackupTask;
    NSObject<OS_xpc_object> * _xpcActivity;
    NSObject<OS_xpc_object> * _xpcActivityCriteriaOverrides;
}

@property (nonatomic, copy) NSDictionary *additionalXPCActivityCriteria;
@property (nonatomic, retain) CKContainer *container;
@property (nonatomic, copy) CKContainerID *containerID;
@property (nonatomic, copy) NSDate *earliestStartDate;
@property (nonatomic) unsigned long long expectedTransferSizeBytes;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) CKContainer *nullableContainer;
@property (nonatomic) long long priority;
@property (nonatomic, copy) NSArray *relatedApplicationBundleIdentifiers;
@property (nonatomic) bool shouldDefer;
@property (nonatomic, copy) NSDictionary *undeprecatedAdditionalXPCActivityCriteria;
@property (nonatomic) bool userRequestedBackupTask;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcActivity;
@property (nonatomic, copy) NSObject<OS_xpc_object> *xpcActivityCriteriaOverrides;

+ (id)defaultRelatedApplicationBundleIdentifiersForContainer:(id)arg1;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)additionalXPCActivityCriteria;
- (id)container;
- (id)containerID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)earliestStartDate;
- (unsigned long long)expectedTransferSizeBytes;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 container:(id)arg2 containerID:(id)arg3 priority:(long long)arg4;
- (id)initWithIdentifier:(id)arg1 container:(id)arg2 priority:(long long)arg3;
- (id)initWithIdentifier:(id)arg1 containerID:(id)arg2 priority:(long long)arg3;
- (id)nullableContainer;
- (long long)priority;
- (id)relatedApplicationBundleIdentifiers;
- (void)setAdditionalXPCActivityCriteria:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setContainerID:(id)arg1;
- (void)setEarliestStartDate:(id)arg1;
- (void)setExpectedTransferSizeBytes:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setRelatedApplicationBundleIdentifiers:(id)arg1;
- (void)setShouldDefer:(bool)arg1;
- (void)setUndeprecatedAdditionalXPCActivityCriteria:(id)arg1;
- (void)setUserRequestedBackupTask:(bool)arg1;
- (void)setXpcActivity:(id)arg1;
- (void)setXpcActivityCriteriaOverrides:(id)arg1;
- (bool)shouldDefer;
- (id)undeprecatedAdditionalXPCActivityCriteria;
- (bool)userRequestedBackupTask;
- (id)xpcActivity;
- (id)xpcActivityCriteriaOverrides;

@end
