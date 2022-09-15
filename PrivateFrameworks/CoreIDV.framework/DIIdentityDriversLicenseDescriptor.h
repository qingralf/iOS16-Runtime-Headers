/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
 */

@interface DIIdentityDriversLicenseDescriptor : NSObject <DIIdentityDocumentDescriptor> {
    NSMutableDictionary * _elementsToIntentToStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *elements;
@property (readonly, retain) NSMutableDictionary *elementsToIntentToStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addElements:(id)arg1 withIntentToStore:(id)arg2;
- (id)elements;
- (id)elementsToIntentToStore;
- (id)init;
- (id)intentToStoreForElement:(id)arg1;

@end