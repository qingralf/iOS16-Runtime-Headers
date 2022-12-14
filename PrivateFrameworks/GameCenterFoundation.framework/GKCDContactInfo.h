/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKCDContactInfo : NSManagedObject

@property (nonatomic, copy) NSString *contactID;
@property (nonatomic, copy) NSString *familyName;
@property (nonatomic, copy) NSString *givenName;
@property (nonatomic, copy) NSString *handle;
@property (nonatomic, retain) GKCDContactInfoList *list;
@property (nonatomic, copy) NSString *namePrefix;
@property (nonatomic, copy) NSString *nameSuffix;
@property (nonatomic, copy) NSString *nickname;

+ (id)fetchRequest;

@end
