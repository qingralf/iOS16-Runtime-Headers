/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUSessionNowPlayingView : UIView {
    MRUSessionArtworkView * _artworkView;
    MRUEqualizerView * _equalizerView;
    MRUSessionNowPlayingHeaderView * _headerView;
    MRUSessionAccessoryView * _leadingView;
    MRUVisualStylingProvider * _stylingProvider;
    MRUNowPlayingTimeControlsView * _timeControlsView;
    MRUSessionAccessoryView * _trailingView;
    MRUNowPlayingTransportControlsView * _transportControlsView;
    MRUWaveformView * _waveformView;
}

@property (nonatomic, readonly) MRUSessionArtworkView *artworkView;
@property (nonatomic, readonly) MRUEqualizerView *equalizerView;
@property (nonatomic, readonly) MRUSessionNowPlayingHeaderView *headerView;
@property (nonatomic, readonly) MRUSessionAccessoryView *leadingView;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic, readonly) MRUNowPlayingTimeControlsView *timeControlsView;
@property (nonatomic, readonly) MRUSessionAccessoryView *trailingView;
@property (nonatomic, readonly) MRUNowPlayingTransportControlsView *transportControlsView;
@property (nonatomic, readonly) MRUWaveformView *waveformView;

- (void).cxx_destruct;
- (id)artworkView;
- (id)equalizerView;
- (id)headerView;
- (id)initWithWaveformView:(id)arg1;
- (void)layoutSubviews;
- (id)leadingView;
- (double)preferredHeightForBottomSafeArea;
- (void)setStylingProvider:(id)arg1;
- (id)stylingProvider;
- (id)timeControlsView;
- (id)trailingView;
- (id)transportControlsView;
- (void)updateVisibilty;
- (id)waveformView;

@end
