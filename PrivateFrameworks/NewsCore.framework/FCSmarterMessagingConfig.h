/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSmarterMessagingConfig : NSObject {
    NSDictionary * _engagementUpsellConfig;
    long long  _highChurnPropensitySegmentSetId;
    long long  _lowChurnPropensitySegmentSetId;
    long long  _maxEnableNotificationBubbleTipPresentations;
    long long  _maxSportsOnboardingBubbleTipPresentations;
    long long  _mediumChurnPropensitySegmentSetId;
    long long  _notificationBubbleTipPresentationsQuiescenceInterval;
    NSArray * _placementsBlocklist;
    NSArray * _segmentSetIdsAllowlist;
    long long  _sportsBubbleTipPresentationsQuiescenceInterval;
    bool  _todayFeedMastheadBannerEnabledForSubscribers;
}

@property (nonatomic, readonly, copy) NSDictionary *engagementUpsellConfig;
@property (nonatomic, readonly) long long highChurnPropensitySegmentSetId;
@property (nonatomic, readonly) long long lowChurnPropensitySegmentSetId;
@property (nonatomic, readonly) long long maxEnableNotificationBubbleTipPresentations;
@property (nonatomic, readonly) long long maxSportsOnboardingBubbleTipPresentations;
@property (nonatomic, readonly) long long mediumChurnPropensitySegmentSetId;
@property (nonatomic, readonly) long long notificationBubbleTipPresentationsQuiescenceInterval;
@property (nonatomic, readonly, copy) NSArray *placementsBlocklist;
@property (nonatomic, readonly, copy) NSArray *segmentSetIdsAllowlist;
@property (nonatomic, readonly) long long sportsBubbleTipPresentationsQuiescenceInterval;
@property (nonatomic, readonly) bool todayFeedMastheadBannerEnabledForSubscribers;

- (void).cxx_destruct;
- (id)engagementUpsellConfig;
- (long long)highChurnPropensitySegmentSetId;
- (id)initWithDictionary:(id)arg1;
- (long long)lowChurnPropensitySegmentSetId;
- (long long)maxEnableNotificationBubbleTipPresentations;
- (long long)maxSportsOnboardingBubbleTipPresentations;
- (long long)mediumChurnPropensitySegmentSetId;
- (long long)notificationBubbleTipPresentationsQuiescenceInterval;
- (id)placementsBlocklist;
- (id)segmentSetIdsAllowlist;
- (long long)sportsBubbleTipPresentationsQuiescenceInterval;
- (bool)todayFeedMastheadBannerEnabledForSubscribers;

@end
