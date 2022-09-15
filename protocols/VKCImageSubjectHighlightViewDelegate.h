/* Generated by RuntimeBrowser.
 */

@protocol VKCImageSubjectHighlightViewDelegate

@required

- (bool)isSubjectHighlightShowingLivePhoto:(VKCImageSubjectHighlightView *)arg1 delegateHasImplementation:(bool*)arg2;
- (UIViewController *)presentingViewControllerForSubjectHighlightView:(VKCImageSubjectHighlightView *)arg1;
- (void)subjectHighlightView:(VKCImageSubjectHighlightView *)arg1 livePhotoShouldPlay:(bool)arg2;
- (bool)subjectHighlightView:(VKCImageSubjectHighlightView *)arg1 shouldBeginInteractionAtPoint:(struct CGPoint { double x1; double x2; })arg2 withType:(unsigned long long)arg3;
- (void)subjectHighlightView:(VKCImageSubjectHighlightView *)arg1 willBeginInteractionAtPoint:(struct CGPoint { double x1; double x2; })arg2 withType:(unsigned long long)arg3;
- (NSURL *)tempPNGURLForSubjectHighlightView:(VKCImageSubjectHighlightView *)arg1;

@end