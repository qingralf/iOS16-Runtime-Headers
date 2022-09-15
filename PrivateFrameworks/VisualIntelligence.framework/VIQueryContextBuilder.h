/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualIntelligence.framework/VisualIntelligence
 */

@interface VIQueryContextBuilder : NSObject {
    NSString * _applicationIdentifier;
    NSArray * _catalogIDs;
    NSString * _countryCode;
    NSString * _featureIdentifier;
    long long  _imageType;
    NSURL * _imageURL;
    bool  _includeLowConfidenceRegions;
    NSString * _locale;
    CLLocation * _location;
    <MTLDevice> * _preferredMetalDevice;
    unsigned long long  _queryID;
    NSURL * _referralURL;
    NSString * _teamID;
    double  _uiScale;
}

- (void).cxx_destruct;
- (id)build;
- (id)setApplicationIdentifer:(id)arg1;
- (id)setCatalogIDs:(id)arg1;
- (id)setCountryCode:(id)arg1;
- (id)setFeatureIdentifier:(id)arg1;
- (id)setImageType:(long long)arg1;
- (id)setImageURL:(id)arg1;
- (id)setIncludeLowConfidenceRegions:(bool)arg1;
- (id)setLocale:(id)arg1;
- (id)setLocation:(id)arg1;
- (id)setPreferredMetalDevice:(id)arg1;
- (id)setQueryID:(unsigned long long)arg1;
- (id)setReferralURL:(id)arg1;
- (id)setTeamID:(id)arg1;
- (id)setUIScale:(double)arg1;

@end