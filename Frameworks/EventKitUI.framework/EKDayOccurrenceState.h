/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayOccurrenceState : NSObject <EKMutableDayOccurrenceState> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _backgroundRect;
    long long  _birthdayCount;
    long long  _colorBackgroundStyle;
    bool  _didChange;
    UIColor * _displayColor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _estimatedTextFrame;
    bool  _isDimmed;
    bool  _isPerformingChanges;
    bool  _isProposedTime;
    bool  _isSelected;
    bool  _isVibrant;
    EKEvent * _occurrence;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    NSString * _participants;
    double  _topYBoundaryForText;
    UITraitCollection * _traitCollection;
    double  _travelTime;
    double  _travelTimeHeight;
    bool  _usesSmallText;
    double  _visibleHeight;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } backgroundRect;
@property (nonatomic) long long birthdayCount;
@property (nonatomic, readonly) UIImage *birthdayIcon;
@property (nonatomic) long long colorBackgroundStyle;
@property (nonatomic, readonly) double colorBarThickness;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIColor *displayColor;
@property (nonatomic, readonly) double enoughHeightForOneLine;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } estimatedTextFrame;
@property (nonatomic, readonly) unsigned long long fontCompressionDegree;
@property (nonatomic, readonly) bool hasNewTimeProposed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAllDay;
@property (nonatomic, readonly) bool isBirthday;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, readonly) bool isDeclined;
@property (nonatomic) bool isDimmed;
@property (nonatomic) bool isProposedTime;
@property (nonatomic) bool isSelected;
@property (nonatomic, readonly) bool isTentative;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic) bool isVibrant;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } languageAwareInsets;
@property (nonatomic, readonly) NSAttributedString *location;
@property (nonatomic, readonly) UIColor *locationTextColor;
@property (nonatomic, readonly) double minimumNaturalHeightAllText;
@property (nonatomic, readonly) bool needsReply;
@property (nonatomic, retain) EKEvent *occurrence;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic, readonly) NSString *participants;
@property (nonatomic, readonly) UIColor *participantsTextColor;
@property (nonatomic, readonly) UIFont *primaryTextFont;
@property (nonatomic, readonly) UIFont *secondaryTextFont;
@property (nonatomic, readonly) NSString *status;
@property (nonatomic, readonly) UIColor *statusTextColor;
@property (nonatomic, readonly) UIColor *strikethroughColor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } textSpace;
@property (nonatomic, readonly) NSString *time;
@property (nonatomic, readonly) UIColor *timeTextColor;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) UIColor *titleTextColor;
@property (nonatomic) double topYBoundaryForText;
@property (nonatomic, retain) UITraitCollection *traitCollection;
@property (nonatomic) double travelTime;
@property (nonatomic) double travelTimeHeight;
@property (nonatomic) bool usesSmallText;
@property (nonatomic) double visibleHeight;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultPadding;
+ (id)languageAwareInsetsCache;
+ (id)locationCache;
+ (bool)shouldShowTimeStringForOccurrence:(id)arg1;

- (void).cxx_destruct;
- (double)_verticalContentInset;
- (id)backgroundColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })backgroundRect;
- (long long)birthdayCount;
- (id)birthdayIcon;
- (long long)colorBackgroundStyle;
- (double)colorBarThickness;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayColor;
- (double)enoughHeightForOneLine;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })estimatedTextFrame;
- (unsigned long long)fontCompressionDegree;
- (bool)hasNewTimeProposed;
- (unsigned long long)hash;
- (id)init;
- (id)initWithOccurrenceView:(id)arg1;
- (bool)isAllDay;
- (bool)isBirthday;
- (bool)isCancelled;
- (bool)isDeclined;
- (bool)isDimmed;
- (bool)isEqual:(id)arg1;
- (bool)isProposedTime;
- (bool)isSelected;
- (bool)isTentative;
- (bool)isValid;
- (bool)isVibrant;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })languageAwareInsets;
- (id)location;
- (id)locationTextColor;
- (double)minimumNaturalHeightAllText;
- (bool)needsReply;
- (id)occurrence;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (id)participants;
- (id)participantsTextColor;
- (void)performChanges:(id /* block */)arg1;
- (void)performChangesWithItem:(id)arg1 viewContent:(id)arg2;
- (void)performChangesWithOccurrenceView:(id)arg1;
- (void)performChangesWithState:(id)arg1;
- (id)primaryTextFont;
- (id)secondaryTextFont;
- (void)setBackgroundRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBirthdayCount:(long long)arg1;
- (void)setColorBackgroundStyle:(long long)arg1;
- (void)setDisplayColor:(id)arg1;
- (void)setEstimatedTextFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsDimmed:(bool)arg1;
- (void)setIsProposedTime:(bool)arg1;
- (void)setIsSelected:(bool)arg1;
- (void)setIsVibrant:(bool)arg1;
- (void)setOccurrence:(id)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTopYBoundaryForText:(double)arg1;
- (void)setTraitCollection:(id)arg1;
- (void)setTravelTime:(double)arg1;
- (void)setTravelTimeHeight:(double)arg1;
- (void)setUsesSmallText:(bool)arg1;
- (void)setVisibleHeight:(double)arg1;
- (id)status;
- (id)statusTextColor;
- (id)strikethroughColor;
- (struct CGSize { double x1; double x2; })textSpace;
- (id)time;
- (id)timeTextColor;
- (id)title;
- (id)titleTextColor;
- (double)topYBoundaryForText;
- (id)traitCollection;
- (double)travelTime;
- (double)travelTimeHeight;
- (bool)usesSmallText;
- (double)visibleHeight;

@end
