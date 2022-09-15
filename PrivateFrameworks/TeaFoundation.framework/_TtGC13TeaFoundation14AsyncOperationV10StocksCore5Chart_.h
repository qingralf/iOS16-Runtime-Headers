/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TeaFoundation.framework/TeaFoundation
 */

@interface _TtGC13TeaFoundation14AsyncOperationV10StocksCore5Chart_ : NSOperation {
    void completion;
    void operationID;
    void state;
}

@property (nonatomic, readonly) bool asynchronous;
@property (nonatomic, readonly) bool executing;
@property (nonatomic, readonly) bool finished;
@property (nonatomic, readonly) bool ready;

+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsReady;

- (void).cxx_destruct;
- (id)init;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (bool)isReady;
- (void)start;

@end