/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADDiagnosticOperationGroup : CADOperationGroup <CADDiagnosticInterface> {
    bool  _entitled;
    bool  _entitlementChecked;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)CADDiagnosticsCancelCollectionWithToken:(unsigned int)arg1 reply:(id /* block */)arg2;
- (void)CADDiagnosticsCollectWithToken:(unsigned int)arg1 options:(long long)arg2 reply:(id /* block */)arg3;
- (bool)accessGranted;

@end
