/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSURLCompletionDatabase : NSObject {
    <WBSURLCompletionDataSource> * _dataSource;
    /* Warning: unhandled struct encoding: '{Vector<id<WBSURLCompletionMatchData>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc>="m_buffer"^@"m_capacity"I"m_size"I}' */ struct Vector<id<WBSURLCompletionMatchData>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
        m_capacity **m_buffer; 
    }  _fullTextBookmarkMatchesCache;
    NSString * _fullTextBookmarkMatchesCacheString;
    /* Warning: unhandled struct encoding: '{Vector<id<WBSURLCompletionMatchData>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc>="m_buffer"^@"m_capacity"I"m_size"I}' */ struct Vector<id<WBSURLCompletionMatchData>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
        m_capacity **m_buffer; 
    }  _fullTextHistoryMatchesCache;
    NSString * _fullTextHistoryMatchesCacheString;
    /* Warning: unhandled struct encoding: '{Vector<id<WBSURLCompletionMatchData>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc>="m_buffer"^@"m_capacity"I"m_size"I}' */ struct Vector<id<WBSURLCompletionMatchData>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
        m_capacity **m_buffer; 
    }  _prefixBookmarkMatchesCache;
    NSString * _prefixBookmarkMatchesCacheString;
    /* Warning: unhandled struct encoding: '{Vector<id<WBSURLCompletionMatchData>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc>="m_buffer"^@"m_capacity"I"m_size"I}' */ struct Vector<id<WBSURLCompletionMatchData>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
        m_capacity **m_buffer; 
    }  _prefixHistoryMatchesCache;
    NSString * _prefixHistoryMatchesCacheString;
}

@property (nonatomic) <WBSURLCompletionDataSource> *dataSource;

+ (bool)_matchIsNotURLMatchAndTitleLooksLikeURLForBookmarkAndHistoryCompletionMatch:(const void*)arg1;
+ (void)initializeURLCompletionOnMainThread;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_getSortedFullTextMatchesForTypedString:(id)arg1 topHits:(void*)arg2 historyMatches:(void*)arg3 historyLimit:(unsigned long long)arg4 bookmarkMatches:(void*)arg5 bookmarkLimit:(unsigned long long)arg6 searchParameters:(id)arg7;
- (void)_getSortedMatchesForTypedString:(id)arg1 topHits:(void*)arg2 historyMatches:(void*)arg3 historyLimit:(unsigned long long)arg4 bookmarkMatches:(void*)arg5 bookmarkLimit:(unsigned long long)arg6 searchParameters:(id)arg7 prefixMatchesOnly:(bool)arg8;
- (void)_getSortedPrefixMatchesForTypedString:(id)arg1 topHits:(void*)arg2 historyMatches:(void*)arg3 historyLimit:(unsigned long long)arg4 bookmarkMatches:(void*)arg5 bookmarkLimit:(unsigned long long)arg6 searchParameters:(id)arg7;
- (void)_getUnsortedFullTextMatchesForTypedString:(id)arg1 historyMatches:(void*)arg2 bookmarkMatches:(void*)arg3 dataTypes:(unsigned int)arg4;
- (void)_getUnsortedPrefixMatchesForTypedString:(id)arg1 historyMatches:(void*)arg2 bookmarkMatches:(void*)arg3;
- (void)_removeMatchesWithTitlesThatLookLikeURLsRemovedFromMatches:(void*)arg1;
- (void)clearBookmarkMatchesCaches;
- (void)clearBookmarkMatchesCachesKeepingEmptyValues:(bool)arg1;
- (void)clearHistoryMatchesCache;
- (void)clearMatchesCaches;
- (id)dataSource;
- (void)getBestMatchesForTypedString:(id)arg1 topHits:(id*)arg2 matches:(id*)arg3 limit:(unsigned long long)arg4 forQueryID:(long long)arg5 withSearchParameters:(id)arg6;
- (id)init;
- (void)setDataSource:(id)arg1;

@end
