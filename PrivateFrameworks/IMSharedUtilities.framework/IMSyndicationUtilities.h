/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMSyndicationUtilities : NSObject {
    CKContainer * _ckContainer;
}

@property (nonatomic, retain) CKContainer *ckContainer;

- (void).cxx_destruct;
- (id)UTITypeForURL:(id)arg1;
- (id)_URLSchemeForCollaborationApp:(unsigned long long)arg1;
- (id)_bundleIDsForCollaborationApp:(unsigned long long)arg1;
- (unsigned long long)_collaborationAppForURL:(id)arg1;
- (id)_fetchCKBundleIDsForURL:(id)arg1 returnLocalBundlesOnly:(bool)arg2;
- (id)bundleIDsForCollaborationURL:(id)arg1;
- (id)bundleIDsForShareBearURL:(id)arg1;
- (id)ckContainer;
- (void)setCkContainer:(id)arg1;

@end