/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPHistoryContainer : MSPContainer {
    NSMutableSet * _dependents;
}

+ (id)sharedLocalContainer;

- (void).cxx_destruct;
- (void)_commitEditWithFinalContents:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)_processNewEditedContents:(id)arg1;
- (void)_processNewLoadedContents:(id)arg1;
- (void)addDependent:(id)arg1;
- (id)queryWithDelegate:(id)arg1;
- (void)removeDependent:(id)arg1;

@end
