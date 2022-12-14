/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Koa.framework/Koa
 */

@interface KVSkitInjector : NSObject <KVSkitAccessProvider, KVSkitReadAccess> {
    struct vector<std::pair<skitbridge::SearchGroup, std::vector<std::byte>>, std::allocator<std::pair<skitbridge::SearchGroup, std::vector<std::byte>>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::pair<skitbridge::SearchGroup, std::vector<std::byte>> *, std::allocator<std::pair<skitbridge::SearchGroup, std::vector<std::byte>>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _documents;
    struct Indexer { 
        struct ContextV2 { 
            struct shared_ptr<skit::internal::ContextImpl> { 
                struct ContextImpl {} *__ptr_; 
                struct __shared_weak_count {} *__cntrl_; 
            } pimpl; 
        } context; 
        struct IndexWriter { 
            struct unique_ptr<skit::internal::IndexWriterImpl, std::default_delete<skit::internal::IndexWriterImpl>> { 
                struct __compressed_pair<skit::internal::IndexWriterImpl *, std::default_delete<skit::internal::IndexWriterImpl>> { 
                    struct IndexWriterImpl {} *__value_; 
                } __ptr_; 
            } pimpl; 
        } index_writer; 
        unsigned char index_locale; 
        struct basic_string<char16_t, std::char_traits<char16_t>, std::allocator<char16_t>> { 
            struct __compressed_pair<std::basic_string<char16_t>::__rep, std::allocator<char16_t>> { 
                struct __rep { 
                    union { 
                        struct __long { 
                            unsigned short *__data_; 
                            unsigned long long __size_; 
                            unsigned long long __cap_; 
                        } __l; 
                        struct __short { 
                            unsigned short __data_[11]; 
                            struct { 
                                unsigned char __xx[1]; 
                                unsigned char __size_; 
                            } ; 
                        } __s; 
                        struct __raw { 
                            unsigned long long __words[3]; 
                        } __r; 
                    } ; 
                } __value_; 
            } __r_; 
        } index_locale_id; 
        struct shared_ptr<skitbridge::Tokenizer> { 
            struct Tokenizer {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } tokenizer; 
        struct shared_ptr<skitbridge::Analyzer> { 
            struct Analyzer {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } analyzer; 
        struct Alias { 
            struct shared_ptr<skit::internal::AliasImpl> { 
                struct AliasImpl {} *__ptr_; 
                struct __shared_weak_count {} *__cntrl_; 
            } pimpl; 
        } alias; 
    }  _indexer;
    struct Searcher { 
        struct ContextV2 { 
            struct shared_ptr<skit::internal::ContextImpl> { 
                struct ContextImpl {} *__ptr_; 
                struct __shared_weak_count {} *__cntrl_; 
            } pimpl; 
        } context; 
        struct IndexReader { 
            struct shared_ptr<skit::internal::IndexReaderImpl> { 
                struct IndexReaderImpl {} *__ptr_; 
                struct __shared_weak_count {} *__cntrl_; 
            } pimpl; 
        } index_reader; 
        struct Alias { 
            struct shared_ptr<skit::internal::AliasImpl> { 
                struct AliasImpl {} *__ptr_; 
                struct __shared_weak_count {} *__cntrl_; 
            } pimpl; 
        } alias; 
    }  _searcher;
    KVTokenizer * _tokenizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_buildDocumentsFromItems:(id)arg1 error:(id*)arg2;
- (id)accessReadOnlySkitForUser:(id)arg1;
- (id)indexLocale;
- (id)init;
- (id)initWithItems:(id)arg1 tokenizer:(id)arg2 error:(id*)arg3;
- (id)matchSpans:(id)arg1 error:(id*)arg2;
- (void)prewarm;
- (bool)setItems:(id)arg1 error:(id*)arg2;
- (bool)supportsMultiUser;

@end
