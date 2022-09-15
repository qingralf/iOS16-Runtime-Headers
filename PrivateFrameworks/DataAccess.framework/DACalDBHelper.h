/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DACalDBHelper : NSObject {
    NSString * _cachedMainDatabasePath;
    NSCountedSet * _connectionCountsByPath;
    NSMutableDictionary * _containerPathsByAccountID;
    NSMutableDictionary * _containerPathsByAuxDatabaseID;
    NSMutableDictionary * _databasesByContainerPath;
    int  _initOptions;
    NSObject<OS_dispatch_queue> * _queue;
    DALocalDBWatcher * _watcher;
}

@property (nonatomic, retain) DALocalDBWatcher *watcher;

+ (id)_canonicalizePath:(id)arg1;
+ (id)containerProvider;
+ (id)mainDatabasePath;
+ (void)setMainDatabasePath:(id)arg1 containerProvider:(id)arg2;

- (void).cxx_destruct;
- (struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct os_unfair_lock_s { unsigned int x_8_1_1; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFURL {} *x17; struct __CFString {} *x18; struct __CFString {} *x19; unsigned long long x20; int x21; int x22; int x23; id /* block */ x24; struct _opaque_pthread_mutex_t { long long x_25_1_1; BOOL x_25_1_2[56]; } x25; bool x26; struct __CFArray {} *x27; struct __CFArray {} *x28; struct __CFArray {} *x29; struct __CFArray {} *x30; id x31; bool x32; bool x33; struct __CFSet {} *x34; id x35; id x36; id x37; int x38; id x39; id x40; id x41; char *x42; unsigned int x43; unsigned int x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)_cachedDatabaseForAccountID:(id)arg1 path:(id*)arg2;
- (struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct os_unfair_lock_s { unsigned int x_8_1_1; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFURL {} *x17; struct __CFString {} *x18; struct __CFString {} *x19; unsigned long long x20; int x21; int x22; int x23; id /* block */ x24; struct _opaque_pthread_mutex_t { long long x_25_1_1; BOOL x_25_1_2[56]; } x25; bool x26; struct __CFArray {} *x27; struct __CFArray {} *x28; struct __CFArray {} *x29; struct __CFArray {} *x30; id x31; bool x32; bool x33; struct __CFSet {} *x34; id x35; id x36; id x37; int x38; id x39; id x40; id x41; char *x42; unsigned int x43; unsigned int x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)_cachedDatabaseForAuxDatabaseRef:(void*)arg1 path:(id*)arg2;
- (void)_closeDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct os_unfair_lock_s { unsigned int x_8_1_1; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFURL {} *x17; struct __CFString {} *x18; struct __CFString {} *x19; unsigned long long x20; int x21; int x22; int x23; id /* block */ x24; struct _opaque_pthread_mutex_t { long long x_25_1_1; BOOL x_25_1_2[56]; } x25; bool x26; struct __CFArray {} *x27; struct __CFArray {} *x28; struct __CFArray {} *x29; struct __CFArray {} *x30; id x31; bool x32; bool x33; struct __CFSet {} *x34; id x35; id x36; id x37; int x38; id x39; id x40; id x41; char *x42; unsigned int x43; unsigned int x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)arg1 path:(id)arg2;
- (id)_mainDatabasePath;
- (void)_openDatabaseForPath:(id)arg1 clientID:(id)arg2 createdDatabaseToConsume:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct os_unfair_lock_s { unsigned int x_8_1_1; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFURL {} *x17; struct __CFString {} *x18; struct __CFString {} *x19; unsigned long long x20; int x21; int x22; int x23; id /* block */ x24; struct _opaque_pthread_mutex_t { long long x_25_1_1; BOOL x_25_1_2[56]; } x25; bool x26; struct __CFArray {} *x27; struct __CFArray {} *x28; struct __CFArray {} *x29; struct __CFArray {} *x30; id x31; bool x32; bool x33; struct __CFSet {} *x34; id x35; id x36; id x37; int x38; id x39; id x40; id x41; char *x42; unsigned int x43; unsigned int x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)arg3;
- (id)_pathForAccountID:(id)arg1 createdDatabase:(struct CalDatabase {}**)arg2;
- (void)_registerForCalendarYieldNotificationsForDB:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct os_unfair_lock_s { unsigned int x_8_1_1; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFURL {} *x17; struct __CFString {} *x18; struct __CFString {} *x19; unsigned long long x20; int x21; int x22; int x23; id /* block */ x24; struct _opaque_pthread_mutex_t { long long x_25_1_1; BOOL x_25_1_2[56]; } x25; bool x26; struct __CFArray {} *x27; struct __CFArray {} *x28; struct __CFArray {} *x29; struct __CFArray {} *x30; id x31; bool x32; bool x33; struct __CFSet {} *x34; id x35; id x36; id x37; int x38; id x39; id x40; id x41; char *x42; unsigned int x43; unsigned int x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)arg1;
- (bool)_saveDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct os_unfair_lock_s { unsigned int x_8_1_1; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFURL {} *x17; struct __CFString {} *x18; struct __CFString {} *x19; unsigned long long x20; int x21; int x22; int x23; id /* block */ x24; struct _opaque_pthread_mutex_t { long long x_25_1_1; BOOL x_25_1_2[56]; } x25; bool x26; struct __CFArray {} *x27; struct __CFArray {} *x28; struct __CFArray {} *x29; struct __CFArray {} *x30; id x31; bool x32; bool x33; struct __CFSet {} *x34; id x35; id x36; id x37; int x38; id x39; id x40; id x41; char *x42; unsigned int x43; unsigned int x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)arg1 path:(id)arg2 fushCaches:(bool)arg3;
- (id)allOpenDatabases;
- (bool)closeDatabaseForAccountID:(id)arg1 save:(bool)arg2;
- (bool)closeDatabaseForAuxDatabaseRef:(void*)arg1 save:(bool)arg2;
- (struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct os_unfair_lock_s { unsigned int x_8_1_1; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFURL {} *x17; struct __CFString {} *x18; struct __CFString {} *x19; unsigned long long x20; int x21; int x22; int x23; id /* block */ x24; struct _opaque_pthread_mutex_t { long long x_25_1_1; BOOL x_25_1_2[56]; } x25; bool x26; struct __CFArray {} *x27; struct __CFArray {} *x28; struct __CFArray {} *x29; struct __CFArray {} *x30; id x31; bool x32; bool x33; struct __CFSet {} *x34; id x35; id x36; id x37; int x38; id x39; id x40; id x41; char *x42; unsigned int x43; unsigned int x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)databaseForAccountID:(id)arg1;
- (struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct os_unfair_lock_s { unsigned int x_8_1_1; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFURL {} *x17; struct __CFString {} *x18; struct __CFString {} *x19; unsigned long long x20; int x21; int x22; int x23; id /* block */ x24; struct _opaque_pthread_mutex_t { long long x_25_1_1; BOOL x_25_1_2[56]; } x25; bool x26; struct __CFArray {} *x27; struct __CFArray {} *x28; struct __CFArray {} *x29; struct __CFArray {} *x30; id x31; bool x32; bool x33; struct __CFSet {} *x34; id x35; id x36; id x37; int x38; id x39; id x40; id x41; char *x42; unsigned int x43; unsigned int x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)databaseForAuxDatabaseRef:(void*)arg1;
- (id)initWithDatabaseInitOptions:(int)arg1;
- (void)openDatabaseForAccountID:(id)arg1 clientID:(id)arg2;
- (void)openDatabaseForAuxDatabaseRef:(void*)arg1 clientID:(id)arg2;
- (bool)saveDatabaseForAccountID:(id)arg1 flushCaches:(bool)arg2;
- (bool)saveDatabaseForAuxDatabaseRef:(void*)arg1 flushCaches:(bool)arg2;
- (void)setWatcher:(id)arg1;
- (id)watcher;

@end