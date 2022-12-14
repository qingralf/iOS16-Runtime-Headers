/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
 */

@interface NotificationsClassifierOutput : NSObject <MLFeatureProvider> {
    NSDictionary * _classProbability;
    long long  _predictedValue;
}

@property (nonatomic, retain) NSDictionary *classProbability;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic) long long predictedValue;

- (void).cxx_destruct;
- (id)classProbability;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithPredictedValue:(long long)arg1 classProbability:(id)arg2;
- (long long)predictedValue;
- (void)setClassProbability:(id)arg1;
- (void)setPredictedValue:(long long)arg1;

@end
