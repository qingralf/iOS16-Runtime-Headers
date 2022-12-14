/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelSocialPerson : MPModelPerson

@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, copy) NSString *biography;
@property (nonatomic, copy) NSString *handle;
@property (nonatomic) long long pendingRequestsCount;
@property (getter=isPrivate, nonatomic) bool privatePerson;
@property (nonatomic, copy) NSString *uncensoredName;
@property (getter=isVerified, nonatomic) bool verified;

+ (id)__artworkCatalogBlock_KEY;
+ (id)__biography_KEY;
+ (id)__handle_KEY;
+ (id)__pendingRequestsCount_KEY;
+ (id)__privatePerson_KEY;
+ (id)__uncensoredName_KEY;
+ (id)__verified_KEY;
+ (long long)genericObjectType;
+ (id)kind;

- (id)artworkCatalog;

@end
