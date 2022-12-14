/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UINavigationBarNSToolbarProxy : NSObject {
    struct { 
        unsigned int needsUpdate : 1; 
    }  _flags;
    UITitlebar * _owningTitlebar;
    NSMutableSet * _registeredParticipants;
    NSURL * _representedURL;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly) UITitlebar *owningTitlebar;
@property (nonatomic, readonly) NSURL *representedURL;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) NSToolbar *toolbar;

+ (bool)_supportsNSToolbarNavigationHosting;

- (void).cxx_destruct;
- (void)_updateIfNecessary;
- (id)description;
- (id)initWithTitlebar:(id)arg1;
- (id)owningTitlebar;
- (void)registerToolbarParticipant:(id)arg1;
- (id)representedURL;
- (void)setNeedsUpdate;
- (id)subtitle;
- (id)title;
- (id)toolbar;
- (void)unregisterToolbarParticipant:(id)arg1;

@end
