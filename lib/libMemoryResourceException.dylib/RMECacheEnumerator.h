/* Generated by RuntimeBrowser
   Image: /usr/lib/libMemoryResourceException.dylib
 */

@interface RMECacheEnumerator : NSObject {
    NSDirectoryEnumerator * _internalEnumerator;
    NSString * _volume;
}

+ (id)getEPLProfilePath;
+ (id)getLogContainer:(bool)arg1;
+ (id)getLogPathsForSystemDiagnostic;
+ (id)getLogPathsSortedByTime;

- (void).cxx_destruct;
- (id)initCacheEnumerator;
- (id)initCacheEnumeratorWithVolume:(id)arg1;
- (id)nextValidURL;

@end
