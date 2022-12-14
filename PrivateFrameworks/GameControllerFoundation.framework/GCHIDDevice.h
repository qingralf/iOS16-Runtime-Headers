/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation
 */

@interface GCHIDDevice : HIDDevice <GCHIDDeviceAttributes>

@property (readonly) NSString *manufacturer;
@property (readonly) NSString *product;
@property (readonly) NSNumber *productID;
@property (readonly) NSString *transport;
@property (readonly) NSNumber *vendorID;
@property (readonly) NSNumber *versionNumber;

- (id)debugDescription;
- (id)init;
- (id)initWithService:(unsigned int)arg1;
- (id)manufacturer;
- (id)product;
- (id)productID;
- (id)transport;
- (id)valueForHIDDeviceKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)vendorID;
- (id)versionNumber;

@end
