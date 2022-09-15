/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTROtaSoftwareUpdateProviderClusterApplyUpdateRequestParams : NSObject {
    NSNumber * _newVersion;
    NSNumber * _timedInvokeTimeoutMs;
    NSData * _updateToken;
}

@property (getter=getNewVersion, nonatomic, retain) NSNumber *newVersion;
@property (nonatomic, retain) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, retain) NSData *updateToken;

- (void).cxx_destruct;
- (id)description;
- (id)getNewVersion;
- (id)init;
- (void)setNewVersion:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setUpdateToken:(id)arg1;
- (id)timedInvokeTimeoutMs;
- (id)updateToken;

@end