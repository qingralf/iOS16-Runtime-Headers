/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ProximityReader.framework/ProximityReader
 */

@interface _TtC15ProximityReaderP33_C726A94082B9A7EC0BB4B38CD2C57F0C17SPRInstallWrapper : _TtCs12_SwiftObject <SPRInstallDelegate> {
    void installCompletion;
    void installTracker;
    void lastInstallTick;
    void lastSavedTick;
    void progressInstallListener;
    void refreshListener;
}

- (void)onFailureWithError:(id)arg1;
- (void)onSuccessWithInstallData:(id)arg1;
- (void)onUpdateWithEvent:(long long)arg1;
- (void)onUpdateWithEvent:(long long)arg1 progress:(long long)arg2;

@end