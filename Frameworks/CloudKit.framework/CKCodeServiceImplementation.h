/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKCodeServiceImplementation : NSObject {
    NSNumber * _boxedDatabaseScope;
    CKContainerImplementation * _containerImplementation;
    NSOperationQueue * _operationQueue;
    NSURL * _serviceInstanceURL;
    NSString * _serviceName;
    NSObject<OS_dispatch_queue> * _underlyingDispatchQueue;
}

@property (nonatomic, readonly, copy) NSNumber *boxedDatabaseScope;
@property (nonatomic) CKContainerImplementation *containerImplementation;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (nonatomic, readonly, copy) NSURL *serviceInstanceURL;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *underlyingDispatchQueue;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)CKStatusReportArray;
- (id)_initWithContainerImplementation:(id)arg1 serviceName:(id)arg2 boxedDatabaseScope:(id)arg3 serviceInstanceURL:(id)arg4;
- (void)addOperation:(id)arg1 wrappingCodeService:(id)arg2 convenienceConfiguration:(id)arg3;
- (id)boxedDatabaseScope;
- (id)containerImplementation;
- (id)description;
- (id)operationQueue;
- (id)serviceInstanceURL;
- (id)serviceName;
- (void)setContainerImplementation:(id)arg1;
- (void)setUnderlyingDispatchQueue:(id)arg1;
- (id)underlyingDispatchQueue;

@end
