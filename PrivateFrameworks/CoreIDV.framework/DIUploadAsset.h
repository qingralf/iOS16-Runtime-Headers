/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
 */

@interface DIUploadAsset : NSObject <NSSecureCoding> {
    NSUUID * _assetID;
    NSData * _data;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSUUID *assetID;
@property (nonatomic, copy) NSData *data;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetID;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 assetType:(long long)arg2;
- (void)setData:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
