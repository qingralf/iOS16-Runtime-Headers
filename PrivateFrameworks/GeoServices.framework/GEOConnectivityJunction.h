/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOConnectivityJunction : NSObject {
    struct GeoCodecsConnectivityJunction { unsigned int x1; unsigned int x2; struct GeoCodecsPointFeature {} *x3; } * _junction;
}

@property (nonatomic, readonly) unsigned int pointsOnRoadCount;
@property (nonatomic, readonly) unsigned int pointsOnRoadIndex;

- (id)init:(struct GeoCodecsConnectivityJunction { unsigned int x1; unsigned int x2; struct GeoCodecsPointFeature {} *x3; }*)arg1;
- (unsigned int)pointsOnRoadCount;
- (unsigned int)pointsOnRoadIndex;

@end
