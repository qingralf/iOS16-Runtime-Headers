/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard
 */

@interface PBFGalleryConfiguration : NSObject {
    <PBFComplicationSnapshotProviding> * _complicationSnapshotProvider;
    NSDictionary * _dynamicDescriptorsByExtensionIdentifier;
    NSDictionary * _extensionsByIdentifier;
    NSMutableDictionary * _posterDescriptorLookupInfoForItemIdentifier;
    NSMutableDictionary * _previewIdentifierToPreview;
    NSOrderedSet * _previews;
    NSDictionary * _sectionIdentifierToItems;
    NSDictionary * _sectionIdentifierToSectionMap;
    NSOrderedSet * _sectionIdentifiers;
    <PBFPosterSnapshotProviding> * _snapshotProvider;
    NSDictionary * _staticDescriptorsByExtensionIdentifier;
    ATXFaceGalleryConfiguration * _suggestedLayout;
}

@property (nonatomic, retain) <PBFComplicationSnapshotProviding> *complicationSnapshotProvider;
@property (nonatomic, readonly) NSDictionary *dynamicDescriptorsByExtensionIdentifier;
@property (nonatomic, readonly) NSDictionary *extensionsByIdentifier;
@property (nonatomic, readonly) NSSet *posterPreviews;
@property (nonatomic, readonly) NSArray *posterSnapshotRequests;
@property (nonatomic, readonly, copy) NSOrderedSet *sectionIdentifiers;
@property (nonatomic, retain) <PBFPosterSnapshotProviding> *snapshotProvider;
@property (nonatomic, readonly) NSSet *snapshotURLs;
@property (nonatomic, readonly) NSDictionary *staticDescriptorsByExtensionIdentifier;
@property (nonatomic, readonly) ATXFaceGalleryConfiguration *suggestedLayout;

- (void).cxx_destruct;
- (void)_hydrateSectionIdentifiersIfNeeded;
- (id)_posterDescriptorLookupInfoForItem:(id)arg1;
- (id)_posterDescriptorLookupInfoForPreviewItem:(id)arg1;
- (id)complicationSnapshotProvider;
- (id)complicationSnapshotRequests;
- (id)dynamicDescriptorsByExtensionIdentifier;
- (void)enumeratePreviews:(id /* block */)arg1;
- (id)extensionsByIdentifier;
- (void)fetchComplicationsForPreview:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithSuggestedLayout:(id)arg1 dynamicDescriptorsByExtensionIdentifier:(id)arg2 staticDescriptorsByExtensionIdentifier:(id)arg3 extensionsByIdentifier:(id)arg4;
- (id)itemsForSectionWithIdentifier:(id)arg1;
- (id)posterPreviewForUniqueIdentifier:(id)arg1;
- (id)posterPreviews;
- (id)posterSnapshotRequests;
- (id)posterSnapshotRequestsForExtensionBundleIdentifier:(id)arg1;
- (id)previewForItem:(id)arg1 section:(id)arg2;
- (void)prewarmGallerySnapshotsWithCompletion:(id /* block */)arg1;
- (id)sectionForSectionIdentifier:(id)arg1;
- (id)sectionIdentifiers;
- (void)setComplicationSnapshotProvider:(id)arg1;
- (void)setSnapshotProvider:(id)arg1;
- (id)snapshotForPosterPreview:(id)arg1;
- (id)snapshotProvider;
- (id)snapshotURLs;
- (id)staticDescriptorsByExtensionIdentifier;
- (id)suggestedLayout;

@end