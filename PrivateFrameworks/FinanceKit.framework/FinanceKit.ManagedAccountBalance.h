/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FinanceKit.framework/FinanceKit
 */

@interface FinanceKit.ManagedAccountBalance : NSManagedObject

@property (nonatomic, retain) _TtC10FinanceKit14ManagedAccount *accountObject;
@property (nonatomic, retain) NSDecimalNumber *amount;
@property (nonatomic, copy) NSDate *balanceDate;
@property (nonatomic) short creditDebitIndicatorValue;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic, copy) NSUUID *id;
@property (nonatomic, copy) NSData *metadata;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
