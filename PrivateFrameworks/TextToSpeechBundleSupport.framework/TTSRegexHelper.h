/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
 */

@interface TTSRegexHelper : NSObject {
    struct vector<boost::basic_regex<char>, std::allocator<boost::basic_regex<char> > > { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<boost::basic_regex<char> *, std::allocator<boost::basic_regex<char> > > { 
            void *__value_; 
        } __end_cap_; 
    }  _boostRegexes;
    NSMutableDictionary * _boostRules;
    NSMutableSet * _duplicateChecker;
    NSRegularExpression * _escapeStripper;
    NSMutableArray * _nsRegexes;
    NSMutableDictionary * _nsRules;
    int  _regexStyle;
    bool  _skipLuthorRules;
    NSObject<OS_dispatch_queue> * _ttsRegexQueue;
}

@property (nonatomic) int regexStyle;
@property (nonatomic) bool skipLuthorRules;

+ (id)sharedInstance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addNSRule:(id)arg1 ruleApplication:(id)arg2 caseInsensitive:(bool)arg3;
- (void)_addRules:(id)arg1;
- (id)_boostApplyMatches:(id)arg1 rangeAdjustments:(id)arg2 text:(id)arg3 logging:(id)arg4;
- (id)_boostApplyRulesForText:(id)arg1 rangeAdjustments:(id)arg2;
- (id)_calculatedUTF8Offsets:(id)arg1;
- (id)_nsApplyRulesForText:(id)arg1 rangeAdjustments:(id)arg2;
- (id)_processReplacementStringForSpecialCharacters:(id)arg1;
- (void)addRules:(id)arg1;
- (id)applyRulesForText:(id)arg1 rangeAdjustments:(id)arg2;
- (id)boostRules;
- (bool)hasStoredRules;
- (id)init;
- (id)regexRules;
- (int)regexStyle;
- (void)resetStoredRules;
- (void)setRegexStyle:(int)arg1;
- (void)setSkipLuthorRules:(bool)arg1;
- (bool)skipLuthorRules;

@end
