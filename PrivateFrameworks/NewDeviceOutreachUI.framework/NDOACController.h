/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewDeviceOutreachUI.framework/NewDeviceOutreachUI
 */

@interface NDOACController : NSObject {
    NDOSpecifierDataSource * _ndoSpecifierDataSource;
    PSListController * _parentViewController;
    NSString * _specifierIDToInsertAfter;
}

@property (nonatomic, retain) NDOSpecifierDataSource *ndoSpecifierDataSource;
@property (nonatomic) PSListController *parentViewController;
@property (nonatomic, retain) NSString *specifierIDToInsertAfter;
@property (readonly) NSArray *specifiers;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)forceUpdateSpecifiersWithCompletionHandler:(id /* block */)arg1;
- (id)initWithSerialNumber:(id)arg1;
- (id)ndoSpecifierDataSource;
- (id)parentViewController;
- (void)setNdoSpecifierDataSource:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setSpecifierIDToInsertAfter:(id)arg1;
- (id)specifierIDToInsertAfter;
- (id)specifiers;
- (void)updateSpecifiersWithCompletionHandler:(id /* block */)arg1;

@end
