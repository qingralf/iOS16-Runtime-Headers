/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventShowInCalendarDetailItem : EKEventDetailItem {
    EKUITableViewCell * _cell;
    EKDayPreviewController * _containedDayViewController;
    EKEvent * _eventCopy;
    CalendarModel * _model;
    NSDate * _proposedTime;
}

@property (nonatomic, retain) NSDate *proposedTime;

- (void).cxx_destruct;
- (void)_createNewEventCopy;
- (void)_datesForPreviewViewControllerWithStartDate:(id*)arg1 endDate:(id*)arg2;
- (id)_dayPreviewViewController;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureWithCalendar:(id)arg1 preview:(bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (id)initWithModel:(id)arg1;
- (id)proposedTime;
- (void)refreshCopiedEvents;
- (void)reset;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (void)setProposedTime:(id)arg1;

@end
