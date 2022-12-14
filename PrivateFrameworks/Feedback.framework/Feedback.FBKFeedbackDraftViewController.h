/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Feedback.framework/Feedback
 */

@interface Feedback.FBKFeedbackDraftViewController : UIViewController <Feedback.FeedbackClientProtocol, _EXHostViewControllerDelegate, _EXQueryObserverDelegate> {
    void _xpcConnection;
    void delegate;
    void extensionObserver;
    void form;
    void hostViewController;
    void showsCompletionPage;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didFailSubmissionWithError:(id)arg1;
- (void)didRequestViewDismissalWithSaved:(bool)arg1;
- (void)draftDirtyStateUpdated:(bool)arg1;
- (void)feedbackDidBeginSubmission;
- (void)feedbackDidCompleteWithResponseType:(long long)arg1 responseID:(id)arg2 completedForm:(id)arg3;
- (void)feedbackDidFailToAttachURL:(id)arg1 nsError:(id)arg2;
- (void)feedbackRestartDidFailWithError:(id)arg1;
- (void)hostViewController:(id)arg1 didBeginHosting:(id)arg2;
- (void)hostViewController:(id)arg1 didFailToHost:(id)arg2 error:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)observerDidUpdate:(id)arg1;

@end
