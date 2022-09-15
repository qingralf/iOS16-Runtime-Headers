/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIDVShared.framework/CoreIDVShared
 */

@interface StoredBiomeMetadata : NSManagedObject

@property (nonatomic, copy) NSString *deviceLanguage;
@property (nonatomic, copy) NSString *dob;
@property (nonatomic, copy) NSString *ethnicity;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSString *gender;
@property (nonatomic, copy) NSString *issuer;
@property (nonatomic, copy) NSString *proofingSessionID;
@property (nonatomic) long long skinTone;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end