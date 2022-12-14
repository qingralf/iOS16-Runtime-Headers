/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Calculate.framework/Calculate
 */

@interface Trie : NSObject {
    TrieNode * _root;
}

@property (nonatomic, retain) TrieNode *root;

+ (void)enumerateCharactersInKey:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 usingBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)init;
- (id)nodeForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)root;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setRoot:(id)arg1;

@end
