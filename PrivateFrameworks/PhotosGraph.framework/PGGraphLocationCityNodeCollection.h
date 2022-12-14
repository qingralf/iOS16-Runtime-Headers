/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphLocationCityNodeCollection : PGGraphNamedLocationNodeCollection

@property (nonatomic, readonly) PGGraphAddressNodeCollection *addressNodes;
@property (nonatomic, readonly) PGGraphLocationCountryNodeCollection *countryNodes;
@property (nonatomic, readonly) PGGraphLocationCountyNodeCollection *countyNodes;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;
@property (nonatomic, readonly) PGGraphLocationStateNodeCollection *stateNodes;

+ (Class)nodeClass;

- (id)addressNodes;
- (id)countryNodes;
- (id)countyNodes;
- (id)momentNodes;
- (id)stateNodes;

@end
