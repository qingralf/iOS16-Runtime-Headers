/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLInterLibraryTransferOptions : NSObject <NSSecureCoding> {
    unsigned short  _allowDeleteOfSavedAssetTypes;
    bool  _allowSavedAssetTypeChanges;
    NSSet * _excludedAttributeNames;
    NSSet * _excludedEntityNames;
    bool  _ignoreMissingSourceFiles;
    NSArray * _keysForDeDupe;
    bool  _skipContextSave;
    bool  _updateExistingObjects;
}

@property unsigned short allowDeleteOfSavedAssetTypes;
@property bool allowSavedAssetTypeChanges;
@property (copy) NSSet *excludedAttributeNames;
@property (copy) NSSet *excludedEntityNames;
@property bool ignoreMissingSourceFiles;
@property (copy) NSArray *keysForDeDupe;
@property bool skipContextSave;
@property bool updateExistingObjects;

+ (id)newTransferOptionsForAssetsFromSyndicationToSystem;
+ (id)newTransferOptionsForFaceCropFromSyndicationToSystem;
+ (id)newTransferOptionsForPersonFromSystemToSyndication;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_sortedEntityNamesAsString;
- (unsigned short)allowDeleteOfSavedAssetTypes;
- (bool)allowSavedAssetTypeChanges;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)excludedAttributeNames;
- (id)excludedEntityNames;
- (bool)ignoreMissingSourceFiles;
- (id)initWithCoder:(id)arg1;
- (id)keysForDeDupe;
- (void)setAllowDeleteOfSavedAssetTypes:(unsigned short)arg1;
- (void)setAllowSavedAssetTypeChanges:(bool)arg1;
- (void)setExcludedAttributeNames:(id)arg1;
- (void)setExcludedEntityNames:(id)arg1;
- (void)setIgnoreMissingSourceFiles:(bool)arg1;
- (void)setKeysForDeDupe:(id)arg1;
- (void)setSkipContextSave:(bool)arg1;
- (void)setUpdateExistingObjects:(bool)arg1;
- (bool)skipContextSave;
- (bool)updateExistingObjects;

@end
