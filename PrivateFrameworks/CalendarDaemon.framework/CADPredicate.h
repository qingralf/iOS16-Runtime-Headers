/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADPredicate : NSPredicate <NSSecureCoding>

@property (nonatomic, readonly) <NSFastEnumeration> *databasesToQuery;
@property (nonatomic, readonly) NSArray *defaultPropertiesToLoad;
@property (nonatomic, readonly) NSDictionary *relatedObjectPropertiesToLoad;

+ (void)setValidator:(Class)arg1;

- (id)copyMatchingItemsWithDatabase:(struct CalDatabase { }*)arg1;
- (id)databasesToQuery;
- (id)defaultPropertiesToLoad;
- (bool)evaluateWithObject:(id)arg1;
- (id)relatedObjectPropertiesToLoad;

@end
