/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRepairKit.framework/CoreRepairKit
 */

@interface CRComponentAuth : NSObject {
    NSString * componentName;
}

@property (nonatomic, copy) NSString *componentName;

- (void).cxx_destruct;
- (id)componentName;
- (long long)convertIORegDataToStatus:(id)arg1 authPass:(id)arg2;
- (long long)copyComponentStatusForQuery:(id)arg1;
- (id)initWithComponentName:(id)arg1;
- (bool)isFirstAuthCompleteForQuery:(id)arg1;
- (void)setComponentName:(id)arg1;
- (long long)synchronouslycopyAuthStatusForQuery:(id)arg1;

@end