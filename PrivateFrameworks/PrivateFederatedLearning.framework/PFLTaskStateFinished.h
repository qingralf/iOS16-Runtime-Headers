/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
 */

@interface PFLTaskStateFinished : NSObject <PFLTaskState>

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)resume:(id)arg1 completion:(id /* block */)arg2;
- (void)suspend;
- (unsigned long long)tag;

@end