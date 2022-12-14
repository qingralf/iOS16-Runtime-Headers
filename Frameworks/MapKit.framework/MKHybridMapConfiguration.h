/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKHybridMapConfiguration : MKMapConfiguration {
    MKPointOfInterestFilter * _pointOfInterestFilter;
    bool  _showsTraffic;
}

@property (nonatomic, copy) MKPointOfInterestFilter *pointOfInterestFilter;
@property (nonatomic) bool showsTraffic;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addObserver:(id)arg1 options:(unsigned long long)arg2 context:(void*)arg3;
- (void)_removeObserver:(id)arg1 context:(void*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)inheritStateFromMapView:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithElevationStyle:(long long)arg1;
- (id)initWithLandscape:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHybridMapConfiguration:(id)arg1;
- (id)pointOfInterestFilter;
- (void)setPointOfInterestFilter:(id)arg1;
- (void)setShowsTraffic:(bool)arg1;
- (bool)showsTraffic;
- (void)updateMapViewState:(id)arg1;

@end
