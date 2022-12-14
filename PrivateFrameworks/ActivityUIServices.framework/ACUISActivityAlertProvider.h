/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivityUIServices.framework/ActivityUIServices
 */

@interface ACUISActivityAlertProvider : NSObject <ACUISActivityAlertProviding> {
    long long  _action;
    NSString * _activityIdentifier;
    ACUISActivityAlertOptions * _options;
}

@property (nonatomic, readonly) long long action;
@property (nonatomic, readonly, copy) NSString *activityIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ACUISActivityAlertOptions *options;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_ActivityAlertAction:(long long)arg1;
- (long long)action;
- (id)activityIdentifier;
- (id)initWithActivityAlertProviding:(id)arg1;
- (id)options;

@end
