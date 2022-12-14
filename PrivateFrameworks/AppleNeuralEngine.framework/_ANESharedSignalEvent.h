/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
 */

@interface _ANESharedSignalEvent : NSObject {
    unsigned long long  _eventType;
    IOSurfaceSharedEvent * _sharedEvent;
    unsigned int  _symbolIndex;
    unsigned long long  _value;
}

@property (nonatomic, readonly) unsigned long long eventType;
@property (nonatomic, readonly) IOSurfaceSharedEvent *sharedEvent;
@property (nonatomic, readonly) unsigned int symbolIndex;
@property (nonatomic, readonly) unsigned long long value;

+ (id)new;
+ (id)signalEventWithValue:(unsigned long long)arg1 symbolIndex:(unsigned int)arg2 eventType:(unsigned long long)arg3 sharedEvent:(id)arg4;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)eventType;
- (id)init;
- (id)initWithValue:(unsigned long long)arg1 symbolIndex:(unsigned int)arg2 eventType:(unsigned long long)arg3 sharedEvent:(id)arg4;
- (id)sharedEvent;
- (unsigned int)symbolIndex;
- (unsigned long long)value;
- (id)waitEvent;

@end
