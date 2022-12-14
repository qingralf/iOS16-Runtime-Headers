/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
 */

@interface _BMXPCFileManager : BMFileManager <BMFileManagerImpl> {
    BMXPCConnectionWrapper * _connectionWrapper;
    unsigned long long  _domain;
}

+ (id)globalWeakConnectionCache;

- (void).cxx_destruct;
- (void)_configureConnection:(id)arg1;
- (id)_connectionForDomain:(unsigned long long)arg1;
- (id)_fileHandleForFileAtPath:(id)arg1 flags:(int)arg2 protection:(int)arg3 error:(id*)arg4;
- (id)_memoryMappingForFileAtPath:(id)arg1 flags:(int)arg2 error:(id*)arg3;
- (id)_newConnectionForDomain:(unsigned long long)arg1;
- (bool)_removeDirectoryAtPath:(id)arg1 error:(id*)arg2;
- (bool)_removeFileAtPath:(id)arg1 error:(id*)arg2;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)initWithDirectory:(id)arg1 cachingOptions:(long long)arg2;
- (bool)replaceFileAtPath:(id)arg1 withFileHandle:(id)arg2 error:(id*)arg3;
- (id)temporaryFileHandleWithProtection:(int)arg1 error:(id*)arg2;

@end
