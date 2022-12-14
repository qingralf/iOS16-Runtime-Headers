/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPCKStats : NSObject <NSCopying, NSSecureCoding> {
    long long  _numberOfBrokenFilesInFSAndFSSnapshotCheck;
    long long  _numberOfBrokenFilesInFSSnapshotAndFPSnapshotCheck;
    long long  _numberOfFilesChecked;
}

@property (nonatomic) long long numberOfBrokenFilesInFSAndFSSnapshotCheck;
@property (nonatomic) long long numberOfBrokenFilesInFSSnapshotAndFPSnapshotCheck;
@property (nonatomic) long long numberOfFilesChecked;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)numberOfBrokenFilesInFSAndFSSnapshotCheck;
- (long long)numberOfBrokenFilesInFSSnapshotAndFPSnapshotCheck;
- (long long)numberOfFilesChecked;
- (void)setNumberOfBrokenFilesInFSAndFSSnapshotCheck:(long long)arg1;
- (void)setNumberOfBrokenFilesInFSSnapshotAndFPSnapshotCheck:(long long)arg1;
- (void)setNumberOfFilesChecked:(long long)arg1;

@end
