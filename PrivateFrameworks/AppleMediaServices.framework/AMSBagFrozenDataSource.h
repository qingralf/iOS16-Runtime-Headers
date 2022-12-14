/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSBagFrozenDataSource : NSObject <AMSBagDataSourceProtocol, NSCopying, NSSecureCoding> {
    ACAccount * _account;
    NSDictionary * _data;
    NSDictionary * _defaultValues;
    NSDate * _expirationDate;
    AMSProcessInfo * _processInfo;
    NSString * _profile;
    NSString * _profileVersion;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) NSDictionary *data;
@property (nonatomic, copy) id /* block */ dataSourceChangedHandler;
@property (nonatomic, copy) id /* block */ dataSourceDataInvalidatedHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *defaultValues;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *descriptionExtended;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (getter=isLoaded, nonatomic, readonly) bool loaded;
@property (nonatomic, readonly, copy) AMSProcessInfo *processInfo;
@property (nonatomic, readonly, copy) NSString *profile;
@property (nonatomic, readonly, copy) NSString *profileVersion;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithProfile:(id)arg1 profileVersion:(id)arg2 data:(id)arg3 expirationDate:(id)arg4 account:(id)arg5 processInfo:(id)arg6 defaultValues:(id)arg7;
- (id)account;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)defaultValueForKey:(id)arg1;
- (id)defaultValues;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)initWithCoder:(id)arg1;
- (bool)isLoaded;
- (void)loadWithCompletion:(id /* block */)arg1;
- (id)processInfo;
- (id)profile;
- (id)profileVersion;
- (void)setDefaultValue:(id)arg1 forKey:(id)arg2;
- (id)valueForURLVariable:(id)arg1 account:(id)arg2;

@end
