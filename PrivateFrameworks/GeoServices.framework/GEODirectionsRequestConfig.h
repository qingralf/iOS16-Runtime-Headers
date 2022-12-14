/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionsRequestConfig : GEOServiceRequestDefaultConfig <GEOServiceRequestConfiguring> {
    GEODirectionsRequest * _request;
    NSNumber * _requestPriority;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)additionalHTTPHeaders;
- (id)additionalStatesForNetworkEvent;
- (id)additionalURLQueryItems;
- (struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })dataRequestKindForRequest:(id)arg1 traits:(id)arg2;
- (id)initWithRequest:(id)arg1 requestPriority:(id)arg2;
- (unsigned long long)multipathServiceType;
- (id)serviceTypeNumber;
- (unsigned long long)urlType;
- (bool)usesBackgroundURL;

@end
