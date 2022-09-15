/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIDVPAD.framework/CoreIDVPAD
 */

@interface PADVNFacePoseRequest : NSObject <PADVNRequestProtocol> {
    <PADAuditDataRepository> * _audit;
    <PADModelLoader> * _models;
    NSArray * _results;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *results;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_detectFaceBounds:(id)arg1 error:(id*)arg2;
- (struct __CVBuffer { }*)_obtainFaceCrop:(id)arg1 error:(id*)arg2;
- (void)_storeCrop:(struct __CVBuffer { }*)arg1 forFrame:(id)arg2 observation:(id)arg3;
- (id)init;
- (void)performOn:(id)arg1 error:(id*)arg2;
- (id)results;

@end