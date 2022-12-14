/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICEncryptionMetadata : NSObject {
    NSString * _accountKeyIdentifier;
    unsigned long long  _cipherVersion;
    NSData * _data;
}

@property (nonatomic, retain) NSString *accountKeyIdentifier;
@property (nonatomic) unsigned long long cipherVersion;
@property (nonatomic, retain) NSData *data;

- (void).cxx_destruct;
- (id)accountKeyIdentifier;
- (unsigned long long)cipherVersion;
- (id)data;
- (id)initWithCipherVersion:(unsigned long long)arg1 accountKeyIdentifier:(id)arg2;
- (id)initWithData:(id)arg1;
- (void)setAccountKeyIdentifier:(id)arg1;
- (void)setCipherVersion:(unsigned long long)arg1;
- (void)setData:(id)arg1;

@end
