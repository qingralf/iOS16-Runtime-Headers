/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

@interface MFAddressListFormatter : NSFormatter <MFAddressBookClient> {
    MFAddressBookManager * _addressBookManager;
    EFLazyCache * _addressCache;
    EFLazyCache * _commentCache;
    MFLocalizationListFormatter * _listFormatter;
    <EMUserProfileProvider> * _userProfileProvider;
}

@property (nonatomic, retain) MFAddressBookManager *addressBookManager;
@property (nonatomic, retain) EFLazyCache *addressCache;
@property (nonatomic, retain) EFLazyCache *commentCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MFLocalizationListFormatter *listFormatter;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <EMUserProfileProvider> *userProfileProvider;

- (void).cxx_destruct;
- (id)_addressCommentForAddressList:(id)arg1;
- (void)_invalidateCache;
- (id)addressBookManager;
- (void)addressBookManager:(id)arg1 addressBookDidChange:(void*)arg2;
- (void)addressBookPreferencesChangedForAddressBookManager:(id)arg1;
- (id)addressCache;
- (id)commentCache;
- (void)dealloc;
- (id)init;
- (id)initWithUserProfileProvider:(id)arg1 addressBookManager:(id)arg2;
- (id)listFormatter;
- (void)setAddressBookManager:(id)arg1;
- (void)setAddressCache:(id)arg1;
- (void)setCommentCache:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromAddressAddressList:(id)arg1;
- (id)stringFromEmailAddressList:(id)arg1;
- (id)userProfileProvider;

@end
