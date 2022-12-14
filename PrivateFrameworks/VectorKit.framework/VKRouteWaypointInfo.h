/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRouteWaypointInfo : NSObject {
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _adjacentRouteCoordinate;
    bool  _isAtEnd;
    bool  _isAtStart;
    bool  _isOnSelectedRoute;
    unsigned long long  _legIndex;
    bool  _needsTextUpdate;
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _routeCoordinate;
    unsigned char  _type;
    GEOComposedWaypoint * _waypoint;
    unsigned char  _when;
}

@property (nonatomic, readonly) struct { double x1; double x2; double x3; } adjacentRouteCoordinate;
@property (nonatomic) bool isAtEnd;
@property (nonatomic) bool isAtStart;
@property (nonatomic) bool isOnSelectedRoute;
@property (nonatomic, readonly) unsigned long long legIndex;
@property (nonatomic) bool needsTextUpdate;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } routeCoordinate;
@property (nonatomic, readonly) GEOFeatureStyleAttributes *styleAttributes;
@property (nonatomic, readonly) unsigned char type;
@property (nonatomic, readonly) GEOComposedWaypoint *waypoint;
@property (nonatomic) unsigned char when;

+ (id)newRouteWaypointForWaypoint:(id)arg1 legIndex:(unsigned long long)arg2 routeCoordinate:(struct { double x1; double x2; double x3; })arg3 adjacentRouteCoordinate:(struct { double x1; double x2; double x3; })arg4;

- (void).cxx_destruct;
- (struct { double x1; double x2; double x3; })adjacentRouteCoordinate;
- (id)initWithWaypoint:(id)arg1 legIndex:(unsigned long long)arg2 routeCoordinate:(struct { double x1; double x2; double x3; })arg3 adjacentRouteCoordinate:(struct { double x1; double x2; double x3; })arg4 waypointType:(unsigned char)arg5;
- (bool)isAtEnd;
- (bool)isAtStart;
- (bool)isOnSelectedRoute;
- (unsigned long long)legIndex;
- (bool)needsTextUpdate;
- (struct { double x1; double x2; double x3; })routeCoordinate;
- (void)setIsAtEnd:(bool)arg1;
- (void)setIsAtStart:(bool)arg1;
- (void)setIsOnSelectedRoute:(bool)arg1;
- (void)setNeedsTextUpdate:(bool)arg1;
- (void)setWhen:(unsigned char)arg1;
- (id)styleAttributes;
- (unsigned char)type;
- (id)waypoint;
- (unsigned char)when;

@end
