/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

@interface TSRemotePlanWebsheetContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _carrierName;
    int  _flowType;
    NSString * _iccid;
    CTXPCServiceSubscriptionContext * _subscriptionContext;
    bool  _useLiveID;
}

@property (retain) NSString *carrierName;
@property int flowType;
@property (retain) NSString *iccid;
@property (nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property bool useLiveID;

- (void).cxx_destruct;
- (id)carrierName;
- (int)flowType;
- (id)iccid;
- (id)init;
- (void)setCarrierName:(id)arg1;
- (void)setFlowType:(int)arg1;
- (void)setIccid:(id)arg1;
- (void)setSubscriptionContext:(id)arg1;
- (void)setUseLiveID:(bool)arg1;
- (id)subscriptionContext;
- (bool)useLiveID;

@end