/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSStatusBarTapContextImpl : NSObject <NSSecureCoding, SBSStatusBarTapContext> {
    unsigned long long  _styleOverride;
}

@property (nonatomic) unsigned long long styleOverride;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyleOverride:(unsigned long long)arg1;
- (void)setStyleOverride:(unsigned long long)arg1;
- (unsigned long long)styleOverride;

@end