/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TipsCore2.framework/TipsCore2
 */

@interface TipsCore2.DonationRecord : NSManagedObject {
    void _options;
}

@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSDictionary *donationInfo;
@property (nonatomic, retain) _TtC9TipsCore211EventRecord *event;
@property (nonatomic) long long optionsValue;

+ (id)attributes;
+ (id)relationships;

- (void).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
