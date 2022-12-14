/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StorageKit.framework/StorageKit
 */

@interface SKDiskImage : NSObject {
    NSURL * _imageURL;
}

@property (nonatomic, readonly) NSURL *imageURL;

- (void).cxx_destruct;
- (id)attachWithError:(id*)arg1;
- (id)attachWithParams:(id)arg1 error:(id*)arg2;
- (id)deduceDiskFrom:(id)arg1 error:(id*)arg2;
- (id)description;
- (id)diskImagesAttachWith:(id)arg1 error:(id*)arg2;
- (id)imageURL;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (id)mount:(id)arg1 params:(id)arg2 outError:(id*)arg3;

@end
