/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligencePlatform.framework/IntelligencePlatform
 */

@interface GDEntityResolutionRequest : NSObject <NSSecureCoding> {
    NSArray * _entityTypeFilter;
    GDMetaContext * _metaContext;
    long long  _mode;
    NSString * _requestID;
    NSArray * _span;
    NSString * _text;
}

@property (nonatomic, readonly, copy) NSArray *entityTypeFilter;
@property (nonatomic, readonly, copy) GDMetaContext *metaContext;
@property (nonatomic, readonly) long long mode;
@property (nonatomic, readonly, copy) NSString *requestID;
@property (nonatomic, readonly, copy) NSArray *span;
@property (nonatomic, readonly, copy) NSString *text;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)entityTypeFilter;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 mode:(long long)arg2 metaContext:(id)arg3 entityTypeFilter:(id)arg4 requestID:(id)arg5 span:(id)arg6;
- (id)metaContext;
- (long long)mode;
- (id)requestID;
- (id)span;
- (id)text;

@end