/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DesktopServicesPriv.framework/DesktopServicesPriv
 */

@interface FINodeEvent : NSObject {
    struct TNodeEvent { 
        unsigned int fEventKind; 
        FINode *fFINode; 
        unsigned int fProperty; 
        struct TPropertyValue { 
            union { 
                bool boo; 
                unsigned char cha; 
                short i16; 
                int i32; 
                long long i64; 
                unsigned int tos; 
                struct Point { 
                    short v; 
                    short h; 
                } tpt; 
                struct UniString { 
                    unsigned long long capacity; 
                    unsigned long long length; 
                    unsigned short *buffer; 
                } str; 
                struct Blob { 
                    unsigned int capacity; 
                    unsigned int length; 
                    char *buffer; 
                } blo; 
                struct RefCounted { 
                    int fReferenceCount; 
                    unsigned int fDataType; 
                    void *fReferenceCounted; 
                    int (*fRetainProc)(); 
                    int (*fReleaseProc)(); 
                } referenceCounted; 
                struct __CFString {} *string; 
                struct __CFNumber {} *number; 
                struct __CFData {} *data; 
                struct __CFDictionary {} *dictionary; 
                void *object; 
                struct __CFURL {} *url; 
                struct __CFArray {} *array; 
                double absolutetime; 
                struct __CFFileSecurity {} *filesec; 
                BOOL res[16]; 
            } fData; 
            unsigned int fDataType; 
        } fPropertyValue; 
        struct shared_ptr<TNodeTask> { 
            struct TNodeTask {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } fTask; 
        struct TRef<TDSNotifier *, TInternalRefCountPolicy<TDSNotifier>> { 
            struct TDSNotifier {} *fRef; 
        } fNotifier; 
    }  _event;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init:(const void*)arg1;

@end