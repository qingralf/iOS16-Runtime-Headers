/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityFocusEngine.framework/AccessibilityFocusEngine
 */

@interface AXFocusManager : NSObject {
    AXElement * _cachedCurrentApplication;
    NSObject<OS_dispatch_queue> * _movementQueue;
    NSHashTable * _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    NSObject<OS_dispatch_queue> * _observersQueue;
    AXElement * _sceneForSuccessfulTypeaheadMovement;
    NSString * _typeaheadString;
}

@property (nonatomic, retain) AXElement *cachedCurrentApplication;
@property (nonatomic, readonly) AXElement *currentApplication;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *movementQueue;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } observersLock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *observersQueue;
@property (nonatomic, retain) AXElement *sceneForSuccessfulTypeaheadMovement;
@property (nonatomic, retain) NSString *typeaheadString;

- (void).cxx_destruct;
- (id)_currentScenes;
- (void)_enumerateObservers:(id /* block */)arg1;
- (bool)_focusOnScene:(id)arg1;
- (void)_handleFailedFocusMovementWithHeading:(unsigned long long)arg1 byGroup:(bool)arg2;
- (unsigned long long)_indexOfTypeaheadPIDInScenes:(id)arg1;
- (bool)_moveFocusInRemoteElement:(id)arg1 withHeading:(unsigned long long)arg2 byGroup:(bool)arg3;
- (bool)_moveFocusInScene:(id)arg1 withHeading:(unsigned long long)arg2 queryString:(id)arg3;
- (void)_moveFocusWithHeading:(unsigned long long)arg1 byGroup:(bool)arg2 queryString:(id)arg3 shouldWrap:(bool)arg4;
- (bool)_moveFocusWithHeading:(unsigned long long)arg1 byGroup:(bool)arg2 shouldWrap:(bool)arg3;
- (id)_moveSceneFocusInDirection:(long long)arg1;
- (void)_moveToElementWithHeading:(unsigned long long)arg1 queryString:(id)arg2;
- (bool)_recursiveMoveFocusInScene:(id)arg1 withHeading:(unsigned long long)arg2 byGroup:(bool)arg3;
- (bool)_recursiveMoveFocusInScene:(id)arg1 withHeading:(unsigned long long)arg2 queryString:(id)arg3;
- (void)_verifyPIDForTypeahead;
- (void)addObserver:(id)arg1;
- (id)cachedCurrentApplication;
- (id)currentApplication;
- (id)currentElement;
- (id)currentScene;
- (void)focusOnSceneForTypeahead;
- (id)init;
- (void)moveFocusInsideForward:(bool)arg1;
- (void)moveFocusInsideForward:(bool)arg1 shouldWrap:(bool)arg2;
- (void)moveFocusWithHeading:(unsigned long long)arg1 byGroup:(bool)arg2;
- (void)moveFocusWithHeading:(unsigned long long)arg1 queryString:(id)arg2;
- (id)movementQueue;
- (id)observers;
- (struct os_unfair_lock_s { unsigned int x1; })observersLock;
- (id)observersQueue;
- (void)removeObserver:(id)arg1;
- (id)sceneForSuccessfulTypeaheadMovement;
- (void)setCachedCurrentApplication:(id)arg1;
- (void)setMovementQueue:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setObserversLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setObserversQueue:(id)arg1;
- (void)setSceneForSuccessfulTypeaheadMovement:(id)arg1;
- (void)setTypeaheadString:(id)arg1;
- (id)typeaheadString;

@end