/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADOperationGroup : NSObject {
    ClientConnection * _conn;
}

@property (nonatomic, readonly) ClientConnection *conn;

+ (bool)requiresEventAccess;
+ (id)whitelistedBundles;

- (void).cxx_destruct;
- (bool)accessGranted;
- (id)conn;
- (id)initWithClientConnection:(id)arg1;

@end
