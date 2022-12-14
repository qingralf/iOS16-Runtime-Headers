/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SocialLayer.framework/SocialLayer
 */

@interface SLDCloudKitReaderHighlightService : NSObject <SLDCloudKitReaderHighlightService, SLDService>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)remoteObjectProtocol;
+ (void)setupInterface:(id)arg1;
+ (id)sharedService;

- (void)addApplicationIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (id)applicationIdentifierForCurrentConnection;
- (void)lostConnection:(id)arg1;
- (void)receivedConnection:(id)arg1;
- (void)syncableSocialHighlightsForApplicationIdentifier:(id)arg1 reply:(id /* block */)arg2;

@end
