/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNEspressoResources : NSObject {
    void * _context;
    NSString * _modelName;
    struct { 
        void *plan; 
        int network_index; 
    }  _network;
    NSString * _networkConfigurationName;
    void * _plan;
}

@property (readonly) void*context;
@property (readonly) NSString *modelName;
@property (readonly) struct { void *x1; int x2; } network;
@property (readonly) NSString *networkConfigurationName;
@property (readonly) void*plan;

- (void).cxx_destruct;
- (void*)context;
- (void)dealloc;
- (id)description;
- (void)free;
- (id)initWithModelName:(id)arg1 networkConfigurationName:(id)arg2 network:(struct { void *x1; int x2; })arg3 plan:(void*)arg4 context:(void*)arg5;
- (id)modelName;
- (struct { void *x1; int x2; })network;
- (id)networkConfigurationName;
- (void*)plan;

@end