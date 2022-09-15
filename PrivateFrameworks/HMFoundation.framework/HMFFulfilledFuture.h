/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFFulfilledFuture : HMFFuture {
    id  _value;
}

- (void).cxx_destruct;
- (void)getResultWithCompletion:(id /* block */)arg1;
- (id)inContext:(id)arg1 recover:(id /* block */)arg2;
- (id)inContext:(id)arg1 then:(id /* block */)arg2;
- (id)inContext:(id)arg1 then:(id /* block */)arg2 orRecover:(id /* block */)arg3;
- (bool)isPending;
- (struct _HMFFutureBlockOutcome { long long x1; id x2; })outcomeIfSettled;
- (id)recover:(id /* block */)arg1;
- (id)then:(id /* block */)arg1;
- (id)then:(id /* block */)arg1 orRecover:(id /* block */)arg2;

@end