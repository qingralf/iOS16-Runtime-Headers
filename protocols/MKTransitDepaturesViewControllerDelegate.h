/* Generated by RuntimeBrowser.
 */

@protocol MKTransitDepaturesViewControllerDelegate <NSObject>

@required

- (bool)transitDeparturesViewController:(MKTransitDeparturesViewController *)arg1 canSelectDepartureSequence:(id <GEOTransitDepartureSequence>)arg2 transitMapItem:(MKMapItem *)arg3 transitLine:(id <MKTransitLineMarker>)arg4 fromCell:(MKTableViewCell *)arg5;
- (void)transitDeparturesViewController:(MKTransitDeparturesViewController *)arg1 didSelectAttribution:(GEOAttribution *)arg2;
- (void)transitDeparturesViewController:(MKTransitDeparturesViewController *)arg1 didSelectConnectionInformation:(id <GEOTransitConnectionInfo>)arg2;
- (void)transitDeparturesViewController:(MKTransitDeparturesViewController *)arg1 didSelectDepartureSequence:(id <GEOTransitDepartureSequence>)arg2 transitMapItem:(MKMapItem *)arg3 transitLine:(id <MKTransitLineMarker>)arg4 fromCell:(MKTableViewCell *)arg5;
- (void)transitDeparturesViewController:(MKTransitDeparturesViewController *)arg1 didSelectTransitLine:(id <MKTransitLineMarker>)arg2 fromCell:(MKTableViewCell *)arg3;
- (void)transitDeparturesViewController:(MKTransitDeparturesViewController *)arg1 showIncidents:(NSArray *)arg2;
- (GEOMapServiceTraits *)transitDeparturesViewControllerTraits:(MKTransitDeparturesViewController *)arg1;

@end
