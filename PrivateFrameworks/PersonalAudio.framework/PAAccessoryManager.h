/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalAudio.framework/PersonalAudio
 */

@interface PAAccessoryManager : NSObject {
    bool  _shouldSendUpdate;
}

@property (nonatomic) bool shouldSendUpdate;

+ (id)sharedInstance;

- (id)init;
- (void)sendUpdateToAccessory;
- (void)setShouldSendUpdate:(bool)arg1;
- (bool)shouldSendUpdate;

@end
