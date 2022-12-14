/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSSnapshotBag : NSObject <AMSBagProtocol, NSSecureCoding> {
    NSDate * _creationDate;
    AMSBagFrozenDataSource * _dataSource;
    struct optional<AMSCore::Bag> { 
        union { 
            BOOL __null_state_; 
            struct Bag { 
                int (**_vptr$ILoggable)(); 
                struct shared_ptr<AMSCore::IBagDataSource> { 
                    struct IBagDataSource {} *__ptr_; 
                    struct __shared_weak_count {} *__cntrl_; 
                } mDataSource; 
            } __val_; 
        } ; 
        bool __engaged_; 
    }  _underlyingBag;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, retain) AMSBagFrozenDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) AMSProcessInfo *processInfo;
@property (nonatomic, readonly, copy) NSString *profile;
@property (nonatomic, readonly, copy) NSString *profileVersion;
@property (readonly) Class superclass;
@property (nonatomic) struct optional<AMSCore::Bag> { union { BOOL x_1_1_1; struct Bag { int (**x_2_2_1)(); struct shared_ptr<AMSCore::IBagDataSource> { struct IBagDataSource {} *x_2_3_1; struct __shared_weak_count {} *x_2_3_2; } x_2_2_2; } x_1_1_2; } x1; bool x2; } underlyingBag;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)URLForKey:(id)arg1 account:(id)arg2;
- (id)_initWithDataSource:(id)arg1;
- (id)_initWithSnapshotBag:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)boolForKey:(id)arg1;
- (id)compile;
- (void)createSnapshotWithCompletion:(id /* block */)arg1;
- (id)creationDate;
- (id)dataSource;
- (id)dictionaryForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)init;
- (id)initWithBag:(struct Bag { int (**x1)(); struct shared_ptr<AMSCore::IBagDataSource> { struct IBagDataSource {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)integerForKey:(id)arg1;
- (bool)isExpired;
- (bool)isLoaded;
- (id)profile;
- (id)profileVersion;
- (void)setDataSource:(id)arg1;
- (void)setUnderlyingBag:(struct optional<AMSCore::Bag> { union { BOOL x_1_1_1; struct Bag { int (**x_2_2_1)(); struct shared_ptr<AMSCore::IBagDataSource> { struct IBagDataSource {} *x_2_3_1; struct __shared_weak_count {} *x_2_3_2; } x_2_2_2; } x_1_1_2; } x1; bool x2; })arg1;
- (id)stringForKey:(id)arg1;
- (struct optional<AMSCore::Bag> { union { BOOL x_1_1_1; struct Bag { int (**x_2_2_1)(); struct shared_ptr<AMSCore::IBagDataSource> { struct IBagDataSource {} *x_2_3_1; struct __shared_weak_count {} *x_2_3_2; } x_2_2_2; } x_1_1_2; } x1; bool x2; })underlyingBag;

@end
