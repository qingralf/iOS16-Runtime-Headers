/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSEngagementMessageEventServiceResponse : NSObject {
    AMSDialogRequest * _dialogRequest;
    NSDictionary * _dictionaryRepresentation;
    AMSEngagementRequest * _engagementRequest;
    AMSEngagementMessageRequest * _fullScreenMessageRequest;
    NSDictionary * _placementsMap;
    NSString * _serviceType;
}

@property (nonatomic, retain) AMSDialogRequest *dialogRequest;
@property (nonatomic, retain) NSDictionary *dictionaryRepresentation;
@property (nonatomic, retain) AMSEngagementRequest *engagementRequest;
@property (nonatomic, retain) AMSEngagementMessageRequest *fullScreenMessageRequest;
@property (nonatomic, retain) NSDictionary *placementRequests;
@property (nonatomic, retain) NSDictionary *placements;
@property (nonatomic, retain) NSDictionary *placementsMap;
@property (nonatomic, retain) NSString *serviceType;

- (void).cxx_destruct;
- (id)_placementRequestsWithDictionary:(id)arg1;
- (id)_placementsMapWithPayload:(id)arg1;
- (id)dialogRequest;
- (id)dictionaryRepresentation;
- (id)engagementRequest;
- (id)fullScreenMessageRequest;
- (id)initWithJSObject:(id)arg1;
- (id)placementRequests;
- (id)placements;
- (id)placementsMap;
- (id)serviceType;
- (void)setDialogRequest:(id)arg1;
- (void)setDictionaryRepresentation:(id)arg1;
- (void)setEngagementRequest:(id)arg1;
- (void)setFullScreenMessageRequest:(id)arg1;
- (void)setPlacementRequests:(id)arg1;
- (void)setPlacements:(id)arg1;
- (void)setPlacementsMap:(id)arg1;
- (void)setServiceType:(id)arg1;

@end
