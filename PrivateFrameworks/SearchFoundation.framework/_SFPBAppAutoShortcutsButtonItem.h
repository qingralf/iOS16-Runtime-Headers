/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBAppAutoShortcutsButtonItem : PBCodable <NSSecureCoding, _SFPBAppAutoShortcutsButtonItem> {
    _SFPBAppAutoShortcutsItem * _appAutoShortcutsItem;
}

@property (nonatomic, retain) _SFPBAppAutoShortcutsItem *appAutoShortcutsItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appAutoShortcutsItem;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAppAutoShortcutsItem:(id)arg1;
- (void)writeTo:(id)arg1;

@end
