/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
 */

@interface TPSUserTypesValidation : TPSInclusivityValidation

@property (nonatomic, readonly) NSArray *excludeUserTypes;
@property (nonatomic, readonly) NSArray *targetUserTypes;

- (id)excludeUserTypes;
- (id)initWithTargetUserTypes:(id)arg1 excludeUserTypes:(id)arg2;
- (id)targetUserTypes;
- (void)validateWithCompletion:(id /* block */)arg1;

@end