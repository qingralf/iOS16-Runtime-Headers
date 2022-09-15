/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSBagValue : NSObject <JetEngine.AnyAMSBagValue> {
    ACAccount * _account;
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
    }  _bag;
    <AMSBagDataSourceProtocol> * _dataSource;
    NSString * _key;
    NSArray * _transformBlocks;
    unsigned long long  _valueType;
}

@property (nonatomic, copy) ACAccount *account;
@property (nonatomic) struct optional<AMSCore::Bag> { union { BOOL x_1_1_1; struct Bag { int (**x_2_2_1)(); struct shared_ptr<AMSCore::IBagDataSource> { struct IBagDataSource {} *x_2_3_1; struct __shared_weak_count {} *x_2_3_2; } x_2_2_2; } x_1_1_2; } x1; bool x2; } bag;
@property (nonatomic) <AMSBagDataSourceProtocol> *dataSource;
@property (nonatomic, retain) NSString *key;
@property (getter=isLoaded, nonatomic, readonly) bool loaded;
@property (nonatomic, retain) NSArray *transformBlocks;
@property (nonatomic) unsigned long long valueType;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

+ (id)_NSErrorFromError:(const void*)arg1;
+ (bool)_value:(id)arg1 isKindOfValueType:(unsigned long long)arg2;
+ (id)_valueFromDictionary:(id)arg1 forBagKey:(id)arg2;
+ (id)bagValueWithKey:(id)arg1 valueType:(unsigned long long)arg2 valuePromise:(id)arg3;
+ (id)failingBagValueWithKey:(id)arg1 valueType:(unsigned long long)arg2 error:(id)arg3;
+ (id)frozenBagValueWithKey:(id)arg1 value:(id)arg2 valueType:(unsigned long long)arg3;
+ (id)globalBagValueStorage;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_applyTransformsToValue:(id)arg1 index:(long long)arg2 completion:(id /* block */)arg3;
- (void)_handleFailureWithError:(const void*)arg1 completion:(id /* block */)arg2;
- (void)_handleSuccessWithValue:(id)arg1 isDefault:(bool)arg2 completion:(id /* block */)arg3;
- (id)_processedDefaultValue:(id)arg1;
- (id)account;
- (struct optional<AMSCore::Bag> { union { BOOL x_1_1_1; struct Bag { int (**x_2_2_1)(); struct shared_ptr<AMSCore::IBagDataSource> { struct IBagDataSource {} *x_2_3_1; struct __shared_weak_count {} *x_2_3_2; } x_2_2_2; } x_1_1_2; } x1; bool x2; })bag;
- (id)dataSource;
- (id)initWithBag:(struct Bag { int (**x1)(); struct shared_ptr<AMSCore::IBagDataSource> { struct IBagDataSource {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; })arg1 key:(id)arg2 valueType:(unsigned long long)arg3 account:(id)arg4;
- (id)initWithDataSource:(id)arg1 key:(id)arg2 valueType:(unsigned long long)arg3;
- (id)initWithDataSource:(id)arg1 key:(id)arg2 valueType:(unsigned long long)arg3 account:(id)arg4;
- (bool)isLoaded;
- (id)key;
- (void)setAccount:(id)arg1;
- (void)setBag:(struct optional<AMSCore::Bag> { union { BOOL x_1_1_1; struct Bag { int (**x_2_2_1)(); struct shared_ptr<AMSCore::IBagDataSource> { struct IBagDataSource {} *x_2_3_1; struct __shared_weak_count {} *x_2_3_2; } x_2_2_2; } x_1_1_2; } x1; bool x2; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setTransformBlocks:(id)arg1;
- (void)setValueType:(unsigned long long)arg1;
- (id)transformBlocks;
- (id)transformWithBlock:(id /* block */)arg1;
- (id)valuePromise;
- (unsigned long long)valueType;
- (void)valueWithCompletion:(id /* block */)arg1;
- (id)valueWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation

- (void)asyncValueOnQueue:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)asyncValuePromise;
- (id)asyncValuePromiseOnQueue:(id)arg1;
- (void)asyncValueWithCompletion:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit

- (void)wlk_quietValueWithCompletion:(id /* block */)arg1;
- (id)wlk_quietValueWithError:(id*)arg1;

@end