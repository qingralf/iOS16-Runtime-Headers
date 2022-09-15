/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFInstallManagedBookRequest : DMFTaskRequest {
    NSURL * _URL;
    NSString * _author;
    NSNumber * _iTunesStoreID;
    NSString * _originator;
    NSString * _persistentID;
    NSString * _title;
    unsigned long long  _type;
    NSString * _version;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSString *author;
@property (nonatomic, copy) NSNumber *iTunesStoreID;
@property (nonatomic, copy) NSString *originator;
@property (nonatomic, copy) NSString *persistentID;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) unsigned long long type;
@property (nonatomic, copy) NSString *version;

+ (Class)allowlistedClassForResultObject;
+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)author;
- (void)encodeWithCoder:(id)arg1;
- (id)iTunesStoreID;
- (id)initWithCoder:(id)arg1;
- (id)originator;
- (id)persistentID;
- (void)setAuthor:(id)arg1;
- (void)setITunesStoreID:(id)arg1;
- (void)setOriginator:(id)arg1;
- (void)setPersistentID:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setURL:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)title;
- (unsigned long long)type;
- (id)version;

@end