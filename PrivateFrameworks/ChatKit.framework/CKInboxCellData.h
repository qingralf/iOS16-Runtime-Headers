/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKInboxCellData : NSObject {
    unsigned long long  _filterMode;
    UIImage * _image;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic) unsigned long long filterMode;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (unsigned long long)filterMode;
- (id)image;
- (id)initWithImage:(id)arg1 withTitle:(id)arg2;
- (id)initWithImage:(id)arg1 withTitle:(id)arg2 withFiltermode:(unsigned long long)arg3;
- (id)initWithImage:(id)arg1 withTitle:(id)arg2 withSubtitle:(id)arg3;
- (void)setFilterMode:(unsigned long long)arg1;
- (void)setImage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end