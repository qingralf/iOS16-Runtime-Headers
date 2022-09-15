/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIStatusBarPublisher : NSObject {
    struct __CFMachPort { } * _machPort;
    NSMutableSet * _statusBarItems;
    unsigned long long  _styleOverrides;
}

- (void).cxx_destruct;
- (void)addStatusBarItem:(int)arg1;
- (unsigned long long)addStyleOverrides:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithCFMachPort:(struct __CFMachPort { }*)arg1;
- (unsigned int)publisherPort;
- (void)removeStatusBarItem:(int)arg1;
- (unsigned long long)removeStyleOverrides:(unsigned long long)arg1;
- (id)statusBarItems;
- (unsigned long long)styleOverrides;

@end