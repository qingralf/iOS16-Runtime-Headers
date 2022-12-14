/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore
 */

@interface VKCVisualSearchResultItem : NSObject <VKAnalysisElementDebugMenuProvider> {
    MADVIVisualSearchGatingDomainInfo * _domainInfo;
    unsigned long long  _queryID;
    MADVIVisualSearchGatingResultItem * _resultItem;
    MADVIVisualSearchResultItem * _searchItem;
}

@property (nonatomic, readonly) UIMenu *debugMenu;
@property (nonatomic, retain) MADVIVisualSearchGatingDomainInfo *domainInfo;
@property (nonatomic, readonly) NSString *glyphName;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedBoundingBox;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } normalizedIconLocation;
@property (nonatomic) unsigned long long queryID;
@property (nonatomic, retain) MADVIVisualSearchGatingResultItem *resultItem;
@property (nonatomic, retain) MADVIVisualSearchResultItem *searchItem;
@property (nonatomic, readonly) bool shouldPlaceInCorner;

- (void).cxx_destruct;
- (bool)_hasFocalPoint;
- (id)debugMenu;
- (id)domainInfo;
- (id)glyphName;
- (id)initWithGatingResultItem:(id)arg1 domain:(id)arg2;
- (id)initWithSearchResultItem:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedBoundingBox;
- (struct CGPoint { double x1; double x2; })normalizedIconLocation;
- (unsigned long long)queryID;
- (id)resultItem;
- (id)searchItem;
- (void)setDomainInfo:(id)arg1;
- (void)setQueryID:(unsigned long long)arg1;
- (void)setResultItem:(id)arg1;
- (void)setSearchItem:(id)arg1;
- (bool)shouldPlaceInCorner;

@end
