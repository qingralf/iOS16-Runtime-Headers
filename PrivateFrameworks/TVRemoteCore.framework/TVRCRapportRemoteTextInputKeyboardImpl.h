/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface TVRCRapportRemoteTextInputKeyboardImpl : NSObject <RTIInputSystemPayloadDelegate, RTIInputSystemSessionDelegate, TVRXKeyboardImpl> {
    TVRCRPCompanionLinkClientWrapper * _companionLinkWrapper;
    TVRCKeyboardAttributes * _currentAttributes;
    RTIInputSystemSourceSession * _currentSession;
    bool  _editing;
    TVRXKeyboardController * _keyboardController;
}

@property (nonatomic, retain) TVRCRPCompanionLinkClientWrapper *companionLinkWrapper;
@property (nonatomic, retain) TVRCKeyboardAttributes *currentAttributes;
@property (nonatomic, retain) RTIInputSystemSourceSession *currentSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool editing;
@property (readonly) unsigned long long hash;
@property (nonatomic) TVRXKeyboardController *keyboardController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_receivedInputSourceSession:(id)arg1;
- (void)_stopObservingTelevisionEditingSession;
- (id)attributes;
- (id)companionLinkWrapper;
- (id)currentAttributes;
- (id)currentSession;
- (bool)editing;
- (void)handleTextActionPayload:(id)arg1;
- (void)inputSessionDidBegin:(id)arg1;
- (void)inputSessionDidDie:(id)arg1;
- (void)inputSessionDidEnd:(id)arg1;
- (bool)isEditing;
- (id)keyboardController;
- (void)sendReturnKey;
- (void)setCompanionLinkWrapper:(id)arg1;
- (void)setCurrentAttributes:(id)arg1;
- (void)setCurrentSession:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setKeyboardController:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextActionPayload:(id)arg1;
- (id)text;

@end