/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXSleepSuggestionServer : NSObject <ATXSleepSuggestionInterface, NSXPCListenerDelegate> {
    NSXPCListener * _listener;
    BMInferredModeStream * _stream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic, retain) BMInferredModeStream *stream;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (bool)isSleepScheduleBetweenTheBoundariesWithBedtime:(id)arg1 wakeupTime:(id)arg2;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)predictedSleepSuggestionWithCompletionHandler:(id /* block */)arg1;
- (void)setListener:(id)arg1;
- (void)setStream:(id)arg1;
- (id)stream;

@end
