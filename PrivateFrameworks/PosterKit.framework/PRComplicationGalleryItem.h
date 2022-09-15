/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit
 */

@interface PRComplicationGalleryItem : NSObject {
    PRComplicationDescriptor * _descriptor;
    NSString * _displayName;
    bool  _iconImageHidden;
    long long  _kind;
    NSString * _text;
}

@property (nonatomic, readonly) PRComplicationDescriptor *descriptor;
@property (nonatomic, readonly) NSString *displayName;
@property (getter=isIconImageHidden, nonatomic, readonly) bool iconImageHidden;
@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly) NSString *text;

- (void).cxx_destruct;
- (id)descriptor;
- (id)displayName;
- (id)initWithDisplayName:(id)arg1 iconImageHidden:(bool)arg2 descriptor:(id)arg3;
- (id)initWithDisplayName:(id)arg1 iconImageHidden:(bool)arg2 text:(id)arg3 kind:(long long)arg4;
- (bool)isIconImageHidden;
- (long long)kind;
- (id)text;

@end