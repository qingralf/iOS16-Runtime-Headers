/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPayLaterFinancingPlanListViewControllerConfiguration : NSObject {
    PKPayLaterBusinessChatTopic * _businessChatTopic;
    NSArray * _completedFinancingPlans;
    unsigned long long  _context;
    PKPaymentPass * _payLaterPass;
    PKPayLaterPaymentIntentController * _paymentIntentController;
}

@property (nonatomic, retain) PKPayLaterBusinessChatTopic *businessChatTopic;
@property (nonatomic, retain) NSArray *completedFinancingPlans;
@property (nonatomic, readonly) unsigned long long context;
@property (nonatomic, retain) PKPaymentPass *payLaterPass;
@property (nonatomic, retain) PKPayLaterPaymentIntentController *paymentIntentController;

- (void).cxx_destruct;
- (id)businessChatTopic;
- (id)completedFinancingPlans;
- (unsigned long long)context;
- (id)initWithContext:(unsigned long long)arg1;
- (id)payLaterPass;
- (id)paymentIntentController;
- (void)setBusinessChatTopic:(id)arg1;
- (void)setCompletedFinancingPlans:(id)arg1;
- (void)setPayLaterPass:(id)arg1;
- (void)setPaymentIntentController:(id)arg1;

@end