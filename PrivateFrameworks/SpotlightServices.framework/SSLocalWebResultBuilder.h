/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface SSLocalWebResultBuilder : SSResultBuilder {
    NSString * _formattedUrlString;
    NSString * _siteName;
    NSURL * _url;
}

@property (nonatomic, retain) NSString *formattedUrlString;
@property (nonatomic, retain) NSString *siteName;
@property (nonatomic, retain) NSURL *url;

+ (id)stringWithUrlString:(id)arg1;
+ (bool)supportsResult:(id)arg1;

- (void).cxx_destruct;
- (id)buildCommand;
- (id)buildDescriptions;
- (id)buildResult;
- (id)formattedUrlString;
- (id)initWithResult:(id)arg1;
- (void)setFormattedUrlString:(id)arg1;
- (void)setSiteName:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)siteName;
- (id)url;

@end
