/* Generated by RuntimeBrowser.
 */

@protocol MKMapViewRouteContextUpdates <NSObject>

@required

- (void)_setAlternateRouteContextAnnotationETAComparison:(unsigned char)arg1 forRoute:(GEOComposedRoute *)arg2;
- (void)_setRouteContextAnnotationFocus:(bool)arg1 forRoute:(GEOComposedRoute *)arg2;
- (void)_setRouteContextAnnotationText:(NSString *)arg1 advisoryStyleAttributes:(GEOStyleAttributes *)arg2 forRoute:(GEOComposedRoute *)arg3;
- (void)_setRouteContextAnnotationText:(NSString *)arg1 tollCurrency:(unsigned char)arg2 forRoute:(GEOComposedRoute *)arg3;
- (void)_setRouteContextAnnotationTexts:(NSArray *)arg1 forLegsInRoute:(GEOComposedRoute *)arg2;
- (void)_setRouteContextInspectedSegmentIndex:(unsigned long long)arg1 inspectedStepIndex:(unsigned long long)arg2;
- (void)_updateChargingStationTexts;

@end