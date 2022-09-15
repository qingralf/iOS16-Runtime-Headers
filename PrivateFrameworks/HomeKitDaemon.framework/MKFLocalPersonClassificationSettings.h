/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface MKFLocalPersonClassificationSettings : HMDManagedObject

@property (nonatomic, retain) NSSet *classificationRegistrations;
@property (nonatomic, copy) NSUUID *modelID;

+ (id)fetchPersonClassificationSettingsForModelID:(id)arg1 managedObjectContext:(id)arg2;
+ (id)fetchRequest;

@end