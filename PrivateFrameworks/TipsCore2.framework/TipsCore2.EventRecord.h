/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TipsCore2.framework/TipsCore2
 */

@interface TipsCore2.EventRecord : NSManagedObject {
    void _options;
}

@property (nonatomic, copy) NSSet *donations;
@property (nonatomic, copy) NSDictionary *eventInfo;
@property (nonatomic, copy) NSString *id;
@property (nonatomic) long long optionsValue;
@property (nonatomic, copy) NSSet *rules;
@property (nonatomic, retain) _TtC9TipsCore29TipRecord *tip;

+ (id)attributes;
+ (id)relationships;

- (void).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end