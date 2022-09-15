/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

@interface FPDDiskIterator : FPDIterator {
    bool  _done;
    struct __CFURLEnumerator { } * _enumerator;
    NSError * _error;
    bool  _lastItemWasPackage;
    unsigned long long  _numFoldersPopped;
    NSURL * _rootURL;
    bool  _sentRoot;
    bool  _stopAccessingRoot;
}

- (void).cxx_destruct;
- (void)dealloc;
- (bool)done;
- (id)error;
- (id)initWithURL:(id)arg1 isDirectory:(bool)arg2;
- (id)nextWithError:(id*)arg1;
- (unsigned long long)numFoldersPopped;
- (void)skipDescendants;

@end