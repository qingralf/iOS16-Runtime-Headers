/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChronoUIServices.framework/ChronoUIServices
 */

@interface CHUISWatchComplicationsWidgetSnapshotMetadataImageData : NSObject <BSXPCSecureCoding, NSCopying> {
    UIImage * _image;
    NSFileHandle * _imageFileHandle;
    bool  _privateSymbol;
    NSString * _symbolName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) UIImage *image;
@property (getter=isPrivateSymbol, nonatomic, readonly) bool privateSymbol;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *symbolName;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)copyForEncodingAtUrl:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)image;
- (id)imageFileHandle;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithPrivateSymbolName:(id)arg1;
- (id)initWithSymbolName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPrivateSymbol;
- (id)symbolName;

@end
