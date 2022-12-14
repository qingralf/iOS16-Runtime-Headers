/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRepairUI.framework/CoreRepairUI
 */

@interface SystemHealthUI : PSListController {
    CRUIAnalytics * analytics;
    NSObject<OS_dispatch_queue> * asyncQueue;
    int  failedComponentsCount;
}

- (void).cxx_destruct;
- (void)clearCAARequestHistory;
- (id)failedComponents;
- (int)getBatteryHealthServiceState;
- (void)getCAAForRepairHistory;
- (long long)getCpuUptimeInSec;
- (id)getCurrentSystemHealthInfoSpecifiers;
- (id)init;
- (bool)isVaildCAA:(id)arg1;
- (void)requestCAA;
- (void)retryCAA;
- (void)scheduleNetworkActivity;
- (id)valueForSpecifierPartIssue:(id)arg1;
- (id)valueForSpecifierPartService:(id)arg1;
- (id)valueForSpecifierRepaired:(id)arg1;
- (id)valueForSpecifierUnknown;

@end
