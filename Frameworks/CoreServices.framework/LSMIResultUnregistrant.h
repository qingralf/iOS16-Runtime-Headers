/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface LSMIResultUnregistrant : NSObject {
    NSString * _bundleID;
    <LSMIResultRegistrantStrategy> * _strategy;
    unsigned int  _type;
    NSUUID * _uuid;
}

- (void).cxx_destruct;
- (id)initWithContext:(id)arg1 operationUUID:(id)arg2 bundleIdentifier:(id)arg3 type:(unsigned int)arg4;
- (void)runWithCompletion:(id /* block */)arg1;

@end
