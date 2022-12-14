/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriSetup.framework/SiriSetup
 */

@interface SiriSetup.VoiceOptionsView : NSObject <SUICVoiceSelectionDisplaying, UITableViewDataSource, UITableViewDelegate> {
    void cellReuseIdentifier;
    void tableView;
    void viewModel;
    void voiceSelectionEventHandler;
    void voiceSelectionViewModelProvider;
}

@property (nonatomic, retain) <SUICVoiceSelectionEventHandling> *voiceSelectionEventHandler;
@property (nonatomic, retain) <SUICVoiceSelectionViewModelProviding> *voiceSelectionViewModelProvider;

- (void).cxx_destruct;
- (id)init;
- (void)setVoiceSelectionEventHandler:(id)arg1;
- (void)setVoiceSelectionViewModelProvider:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)voiceSelectionEventHandler;
- (void)voiceSelectionViewModelDidChange;
- (id)voiceSelectionViewModelProvider;

@end
