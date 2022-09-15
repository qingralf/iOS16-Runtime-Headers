/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLE5IOPort : NSObject {
    <MLE5PortBinder> * _binder;
    MLFeatureDescription * _featureDescription;
    MLFeatureValue * _inputFeatureValue;
    NSString * _name;
    struct e5rt_io_port { } * _portHandle;
}

@property (retain) <MLE5PortBinder> *binder;
@property (readonly) MLFeatureDescription *featureDescription;
@property (retain) MLFeatureValue *featureValue;
@property (readonly) NSString *name;
@property (readonly) struct e5rt_io_port { }*portHandle;

- (void).cxx_destruct;
- (id)binder;
- (void)dealloc;
- (id)description;
- (id)featureDescription;
- (id)featureValue;
- (id)initWithPortHandle:(struct e5rt_io_port { }*)arg1 name:(id)arg2 featureDescription:(id)arg3;
- (id)name;
- (struct e5rt_io_port { }*)portHandle;
- (bool)prepareAndReturnError:(id*)arg1;
- (void)setBinder:(id)arg1;
- (void)setFeatureValue:(id)arg1;

@end