/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPayLaterDashboardMessage : NSObject {
    PKDashboardPassMessage * _message;
    long long  _priority;
}

@property (nonatomic, readonly) PKDashboardPassMessage *message;
@property (nonatomic) long long priority;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)initWithMessage:(id)arg1 priority:(long long)arg2;
- (id)message;
- (long long)priority;
- (void)setPriority:(long long)arg1;

@end