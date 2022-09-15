/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BacklightServicesHost.framework/BacklightServicesHost
 */

@interface BLSHPendingEventToPerform : NSObject <BLSHPendingOperation> {
    bool  _completed;
    BLSHPresentationDateSpecifier * _initialSpecifier;
    bool  _started;
    BLSBacklightChangeEvent * _triggerEvent;
    bool  _updatedInitialState;
}

@property (getter=isCompleted) bool completed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) BLSHPresentationDateSpecifier *initialSpecifier;
@property (getter=isStarted) bool started;
@property (readonly) Class superclass;
@property (readonly) BLSBacklightChangeEvent *triggerEvent;
@property (readonly) long long type;
@property (getter=didUpdateInitialState) bool updatedInitialState;

- (void).cxx_destruct;
- (id)description;
- (bool)didUpdateInitialState;
- (id)initWithTriggerEvent:(id)arg1 withInitialSpecifier:(id)arg2;
- (id)initialSpecifier;
- (bool)isCompleted;
- (bool)isStarted;
- (void)setCompleted:(bool)arg1;
- (void)setStarted:(bool)arg1;
- (void)setUpdatedInitialState:(bool)arg1;
- (id)triggerEvent;
- (long long)type;

@end