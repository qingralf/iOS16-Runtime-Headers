/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMMediaGroupsController : NSObject <HMFLogging, HMFObject, NSSecureCoding> {
    _HMContext * _context;
    <HMMediaGroupsControllerDataSource> * _dataSource;
    <HMMediaGroupsControllerDelegate> * _delegate;
    NSUUID * _identifier;
    NSDictionary * _identifierToGroupMap;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (retain) _HMContext *context;
@property <HMMediaGroupsControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property <HMMediaGroupsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *hf_psgGroups;
@property (readonly) NSUUID *identifier;
@property (copy) NSDictionary *identifierToGroupMap;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)logCategory;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__updateGroup:(id)arg1 name:(id)arg2 destinations:(id)arg3 completion:(id /* block */)arg4;
- (id)attributeDescriptions;
- (id)availableDestinationsForDestination:(id)arg1;
- (id)availableDestinatonsForGroup:(id)arg1;
- (void)callCompletionHandler:(id /* block */)arg1;
- (void)callCompletionHandler:(id /* block */)arg1 error:(id)arg2;
- (void)callCompletionHandler:(id /* block */)arg1 group:(id)arg2;
- (void)callCompletionHandler:(id /* block */)arg1 group:(id)arg2 error:(id)arg3;
- (void)configureWithContext:(id)arg1 dataSource:(id)arg2;
- (id)context;
- (id /* block */)createGroupResponseHandlerWithPayload:(id)arg1 completion:(id /* block */)arg2;
- (void)createGroupWithName:(id)arg1 destinations:(id)arg2 completion:(id /* block */)arg3;
- (id)dataSource;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupForDestination:(id)arg1;
- (id)groups;
- (id)identifier;
- (id)identifierToGroupMap;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 groups:(id)arg2;
- (id)logIdentifier;
- (id)mediaProfilesForGroup:(id)arg1;
- (bool)mergeWithNewController:(id)arg1;
- (void)notifyClientOfDidReceiveGroup:(id)arg1;
- (void)notifyClientOfRemovedGroup:(id)arg1;
- (id)privateDescription;
- (void)removeGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)setContext:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdentifierToGroupMap:(id)arg1;
- (void)settingsForGroup:(id)arg1 completion:(id /* block */)arg2;
- (id)shortDescription;
- (void)subscribeToAllGroups;
- (void)unconfigure;
- (void)updateGroup:(id)arg1 destinations:(id)arg2 completion:(id /* block */)arg3;
- (void)updateGroup:(id)arg1 name:(id)arg2 completion:(id /* block */)arg3;
- (void)updateGroup:(id)arg1 name:(id)arg2 destinations:(id)arg3 completion:(id /* block */)arg4;
- (id /* block */)updateGroupResponseHandlerWithGroup:(id)arg1 payload:(id)arg2 completion:(id /* block */)arg3;
- (id)updateGroupsRequestPayloadWithIdentifier:(id)arg1 name:(id)arg2 destinations:(id)arg3;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_psgGroups;

@end