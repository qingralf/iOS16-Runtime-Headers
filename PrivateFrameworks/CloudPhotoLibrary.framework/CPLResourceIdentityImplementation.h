/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLResourceIdentityImplementation : CPLResourceIdentity

+ (id)_fingerPrintForFD:(int)arg1 error:(id*)arg2;
+ (id)extensionForFileUTI:(id)arg1;
+ (id)fileUTIForExtension:(id)arg1;
+ (id)fingerPrintForData:(id)arg1 error:(id*)arg2;
+ (id)fingerPrintForFD:(int)arg1 error:(id*)arg2;
+ (id)fingerPrintForFileAtURL:(id)arg1 error:(id*)arg2;
+ (id)identityForStorageName:(id)arg1;
+ (id)identityFromStoredIdentity:(id)arg1;
+ (bool)isValidMMCSV2Signature:(id)arg1;
+ (void)setMMCImplementationForPlatform:(id)arg1;
+ (id)storageNameForFingerPrint:(id)arg1 fileUTI:(id)arg2 bucket:(id*)arg3;
+ (id)zeroByteFileFingerPrint;

- (id)identityForStorage;

@end