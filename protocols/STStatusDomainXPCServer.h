/* Generated by RuntimeBrowser.
 */

@protocol STStatusDomainXPCServer <NSObject>

@required

- (void)observeDomains:(NSSet *)arg1;
- (void)reportUserInteraction:(id <STStatusDomainUserInteraction>)arg1 forDomain:(unsigned long long)arg2;
- (void)serverDataForDomains:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)stopObservingDomains:(NSSet *)arg1;

@end
