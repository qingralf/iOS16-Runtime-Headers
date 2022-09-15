/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CopresenceCore.framework/CopresenceCore
 */

@interface CryptoHelper : NSObject {
    unsigned char  _chacha_key;
    unsigned char  _chacha_nonce;
}

+ (id)decryptAES:(id)arg1;
+ (id)encryptAES:(id)arg1;

- (id)decrypt:(id)arg1;
- (id)encrypt:(id)arg1;
- (id)initWithKey:(id)arg1 nonce:(id)arg2;

@end