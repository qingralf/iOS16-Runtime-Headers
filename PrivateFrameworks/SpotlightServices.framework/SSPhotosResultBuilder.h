/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface SSPhotosResultBuilder : SSResultBuilder {
    bool  _isSyndicated;
    NSArray * _matchedPeople;
    NSArray * _namesOfPeopleInPhoto;
    NSArray * _peopleInPhoto;
    NSArray * _personPhotoIdentifiersOfPeopleInPhoto;
    NSString * _photoIdentifier;
}

@property (nonatomic) bool isSyndicated;
@property (nonatomic, retain) NSArray *matchedPeople;
@property (nonatomic, retain) NSArray *namesOfPeopleInPhoto;
@property (nonatomic, retain) NSArray *peopleInPhoto;
@property (nonatomic, retain) NSArray *personPhotoIdentifiersOfPeopleInPhoto;
@property (nonatomic, retain) NSString *photoIdentifier;

+ (id)bundleId;
+ (bool)isCoreSpotlightResult;
+ (bool)supportsResult:(id)arg1;

- (void).cxx_destruct;
- (id)appBundleId;
- (id)buildCommand;
- (id)buildImageCardSection;
- (id)buildInlineCardSections;
- (id)buildResult;
- (id)buildThumbnail;
- (id)initWithResult:(id)arg1;
- (bool)isSyndicated;
- (id)matchedPeople;
- (id)namesOfPeopleInPhoto;
- (id)peopleInPhoto;
- (id)personPhotoIdentifiersOfPeopleInPhoto;
- (id)photoIdentifier;
- (void)populateMatchedPeopleInPhoto;
- (void)setIsSyndicated:(bool)arg1;
- (void)setMatchedPeople:(id)arg1;
- (void)setNamesOfPeopleInPhoto:(id)arg1;
- (void)setPeopleInPhoto:(id)arg1;
- (void)setPersonPhotoIdentifiersOfPeopleInPhoto:(id)arg1;
- (void)setPhotoIdentifier:(id)arg1;
- (id)subclassBuildHorizontallyScrollingCardSection;

@end
