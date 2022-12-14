/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFUserReportRequest : NSObject <NSCopying, NSSecureCoding, SFUserReportRequest> {
    NSString * _affordanceText;
    NSString * _dismissText;
    struct { 
        unsigned int reportType : 1; 
    }  _has;
    int  _reportType;
    NSString * _title;
    NSArray * _userReportOptions;
}

@property (nonatomic, copy) NSString *affordanceText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSString *dismissText;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int reportType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *userReportOptions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)affordanceText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)dismissText;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasReportType;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)jsonData;
- (int)reportType;
- (void)setAffordanceText:(id)arg1;
- (void)setDismissText:(id)arg1;
- (void)setReportType:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserReportOptions:(id)arg1;
- (id)title;
- (id)userReportOptions;

@end
