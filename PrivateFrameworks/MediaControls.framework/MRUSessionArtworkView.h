/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUSessionArtworkView : MRUArtworkView {
    unsigned long long  _currentState;
    NSString * _currentStateName;
    NSString * _itemIdentifier;
    bool  _loading;
    bool  _needsTransition;
    bool  _onScreen;
    CCUICAPackageView * _packageView;
    bool  _playing;
    bool  _transitioning;
}

@property (nonatomic) unsigned long long currentState;
@property (nonatomic, retain) NSString *currentStateName;
@property (nonatomic, retain) NSString *itemIdentifier;
@property (getter=isLoading, nonatomic) bool loading;
@property (nonatomic) bool needsTransition;
@property (getter=isOnScreen, nonatomic) bool onScreen;
@property (nonatomic, retain) CCUICAPackageView *packageView;
@property (getter=isPlaying, nonatomic) bool playing;
@property (getter=isTransitioning, nonatomic) bool transitioning;

- (void).cxx_destruct;
- (unsigned long long)currentState;
- (id)currentStateName;
- (id)description;
- (id)init;
- (bool)isLoading;
- (bool)isOnScreen;
- (bool)isPlaying;
- (bool)isTransitioning;
- (id)itemIdentifier;
- (void)layoutSubviews;
- (bool)needsTransition;
- (id)packageView;
- (void)setArtworkImage:(id)arg1;
- (void)setCatalog:(id)arg1;
- (void)setCurrentImage:(id)arg1 animated:(bool)arg2;
- (void)setCurrentState:(unsigned long long)arg1;
- (void)setCurrentStateName:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setLoading:(bool)arg1;
- (void)setNeedsTransition:(bool)arg1;
- (void)setOnScreen:(bool)arg1;
- (void)setPackageView:(id)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setTransitioning:(bool)arg1;
- (void)transitionToImage:(id)arg1;
- (void)updatePackageState;

@end
