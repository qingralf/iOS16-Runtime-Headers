/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLE5ExecutionStreamOperation : NSObject {
    NSString * _debugLabel;
    NSURL * _e5BundleURL;
    NSString * _functionName;
    <MLFeatureProvider> * _inputFeatures;
    NSArray * _inputPorts;
    struct e5rt_execution_stream_operation { } * _operationHandle;
    NSDictionary * _outputDescriptionsByName;
    NSArray * _outputPorts;
    long long  _state;
}

@property (readonly, copy) NSString *debugLabel;
@property (readonly, copy) NSURL *e5BundleURL;
@property (readonly, copy) NSString *functionName;
@property (retain) <MLFeatureProvider> *inputFeatures;
@property (copy) NSArray *inputPorts;
@property struct e5rt_execution_stream_operation { }*operationHandle;
@property (readonly) NSDictionary *outputDescriptionsByName;
@property (readonly) <MLFeatureProvider> *outputFeatures;
@property (copy) NSArray *outputPorts;
@property long long state;

- (void).cxx_destruct;
- (struct e5rt_execution_stream_operation { }*)_createOperationAndReturnError:(id*)arg1;
- (id)_inputPortNames;
- (id)_newArrayOfBoundedOutputPortsUsingOutputBackings:(id)arg1 error:(id*)arg2;
- (id)_newArrayOfInputPortsBoundToFeatures:(id)arg1 error:(id*)arg2;
- (id)_newArrayOfUnboundedPortsForPortNames:(id)arg1 featureDescriptionsByName:(id)arg2 portFactoryFunction:(int (*)arg3 error:(id*)arg4;
- (id)_outputPortNames;
- (void)dealloc;
- (id)debugLabel;
- (id)e5BundleURL;
- (id)functionName;
- (id)initWithContentsOfURL:(id)arg1 functionName:(id)arg2 outputDescriptionsByName:(id)arg3 debugLabel:(id)arg4;
- (id)inputFeatures;
- (id)inputPorts;
- (struct e5rt_execution_stream_operation { }*)operationHandle;
- (id)outputDescriptionsByName;
- (id)outputFeatures;
- (id)outputPorts;
- (bool)prepareAndReturnError:(id*)arg1;
- (void)reset;
- (void)setInputFeatures:(id)arg1;
- (void)setInputPorts:(id)arg1;
- (void)setOperationHandle:(struct e5rt_execution_stream_operation { }*)arg1;
- (void)setOutputPorts:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
