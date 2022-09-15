/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFHomeKitMediaGroupsController : NSObject <HMMediaGroupsControllerDelegate> {
    NSHashTable * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)initWithHomeManager:(id)arg1;
- (void)mediaGroupsController:(id)arg1 didReceiveGroup:(id)arg2;
- (id)observers;
- (void)removeObserver:(id)arg1;

@end