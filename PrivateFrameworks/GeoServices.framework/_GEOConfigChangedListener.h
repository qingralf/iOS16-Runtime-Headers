/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOConfigChangedListener : NSObject {
    id /* block */  block;
    <GEOConfigChangeListenerDelegate> * delegate;
    _GEOConfigKeyHelper * keyHelper;
    NSObject<OS_dispatch_queue> * queue;
}

- (void).cxx_destruct;
- (void)callListener;
- (id)description;

@end
