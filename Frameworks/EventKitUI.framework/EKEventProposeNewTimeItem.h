/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventProposeNewTimeItem : EKEventDetailItem {
    UITableViewCell * _cell;
    bool  _cellNeedsUpdate;
    CalendarModel * _model;
}

+ (bool)eventShowsProposeTime:(id)arg1;

- (void).cxx_destruct;
- (void)_updateCellIfNeededForWidth:(double)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureWithCalendar:(id)arg1 preview:(bool)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (id)initWithModel:(id)arg1;
- (void)reset;
- (void)setCellPosition:(int)arg1;

@end