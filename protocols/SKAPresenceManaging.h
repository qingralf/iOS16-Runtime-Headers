/* Generated by RuntimeBrowser.
 */

@protocol SKAPresenceManaging <NSObject>

@required

- (void)channelReceivedIncomingPayloadUpdate:(NSData *)arg1 channel:(SKADatabaseChannel *)arg2;
- (void)createPresenceChannelForPresenceIdentifier:(void *)arg1 databaseContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSManagedObjectContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SKADatabaseChannel *, NSError *, void*
- (void)findOrCreatePresenceChannelForPresenceIdentifier:(void *)arg1 databaseContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSManagedObjectContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SKADatabaseChannel *, NSError *, void*
- (void)findPresenceChannelForPresenceIdentifier:(void *)arg1 databaseContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSManagedObjectContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SKADatabaseChannel *, NSError *, void*
- (void)presentDevicesForPresenceIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)releaseAllPresenceAssertionsAssociatedWithClient:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <SKAClientConnectionRepresentable> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)releasePresenceAssertionForPresenceIdentifier:(void *)arg1 client:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, <SKAClientConnectionRepresentable> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)retainPresenceAssertionForPresenceIdentifier:(void *)arg1 client:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, <SKAClientConnectionRepresentable> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
