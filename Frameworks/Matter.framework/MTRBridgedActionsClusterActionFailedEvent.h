/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRBridgedActionsClusterActionFailedEvent : NSObject {
    NSNumber * _actionID;
    NSNumber * _error;
    NSNumber * _invokeID;
    NSNumber * _newState;
}

@property (nonatomic, retain) NSNumber *actionID;
@property (nonatomic, retain) NSNumber *error;
@property (nonatomic, retain) NSNumber *invokeID;
@property (getter=getNewState, nonatomic, retain) NSNumber *newState;

- (void).cxx_destruct;
- (id)actionID;
- (id)description;
- (id)error;
- (id)getNewState;
- (id)init;
- (id)invokeID;
- (void)setActionID:(id)arg1;
- (void)setError:(id)arg1;
- (void)setInvokeID:(id)arg1;
- (void)setNewState:(id)arg1;

@end