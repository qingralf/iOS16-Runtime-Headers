/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MusicKit.framework/MusicKit
 */

@interface MusicKit_SoftLinking_MPSectionedCollection : NSObject {
    MPSectionedCollection * _underlyingSectionedCollection;
}

@property (nonatomic, readonly) MPSectionedCollection *_underlyingSectionedCollection;
@property (nonatomic, readonly) id /* block */ itemAtIndexPathBlock;
@property (nonatomic, readonly) id /* block */ sectionItemAtIndexPathBlock;

- (void).cxx_destruct;
- (id)_underlyingSectionedCollection;
- (id)allItems;
- (id)allSections;
- (void)enumerateItemIdentifiersInSectionAtIndex:(long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateItemIdentifiersUsingBlock:(id /* block */)arg1;
- (void)enumerateSectionIdentifiersUsingBlock:(id /* block */)arg1;
- (void)enumerateTitledSectionsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithUnderlyingSectionedCollection:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id /* block */)itemAtIndexPathBlock;
- (long long)numberOfSections;
- (id)sectionAtIndex:(long long)arg1;
- (id /* block */)sectionItemAtIndexPathBlock;

@end
