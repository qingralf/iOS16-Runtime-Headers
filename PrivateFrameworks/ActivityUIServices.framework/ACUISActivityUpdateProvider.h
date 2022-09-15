/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivityUIServices.framework/ActivityUIServices
 */

@interface ACUISActivityUpdateProvider : NSObject <ACUISActivityUpdateProviding> {
    NSString * _activityIdentifier;
    ACUISActivityHostViewController * _platterHostViewController;
    ACUISActivityPresentationOptions * _presentationOptions;
    NSString * _sceneOwnerBundleIdentifier;
    long long  _state;
    ACUISSystemApertureSceneHandle * _systemApertureSceneHandle;
    <_TtP18ActivityUIServices23ActivityUpdateProviding_> * _updateProviding;
}

@property (nonatomic, readonly, copy) NSString *activityIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ACUISActivityHostViewController *platterHostViewController;
@property (nonatomic, readonly) ACUISActivityPresentationOptions *presentationOptions;
@property (nonatomic, readonly, copy) NSString *sceneOwnerBundleIdentifier;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) ACUISSystemApertureSceneHandle *systemApertureSceneHandle;

- (void).cxx_destruct;
- (long long)_activityState:(long long)arg1;
- (id)activityIdentifier;
- (id)initWithActivityUpdateProviding:(id)arg1;
- (id)platterHostViewController;
- (id)presentationOptions;
- (id)sceneOwnerBundleIdentifier;
- (void)setState:(long long)arg1;
- (long long)state;
- (id)systemApertureSceneHandle;

@end