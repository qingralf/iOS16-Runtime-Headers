/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Translation.framework/Translation
 */

@interface FTAStarFuzzyMatchingConfig : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct AStarFuzzyMatchingConfig { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) unsigned int abs_pruning_threshold;
@property (nonatomic, readonly) NSString *delimiter;
@property (nonatomic, readonly) bool enable_completion;
@property (nonatomic, readonly) bool enable_word_boundary;
@property (nonatomic, readonly) unsigned int max_expand_paths;
@property (nonatomic, readonly) unsigned int max_latency;
@property (nonatomic, readonly) unsigned int max_path_num_at_boundary;
@property (nonatomic, readonly) unsigned int max_results;
@property (nonatomic, readonly) unsigned int max_tm_score;
@property (nonatomic, readonly) float parabolic_error_bias;
@property (nonatomic, readonly) float parabolic_error_center;
@property (nonatomic, readonly) unsigned int parabolic_error_min;
@property (nonatomic, readonly) float parabolic_error_wide;
@property (nonatomic, readonly) unsigned int rel_pruning_threshold;
@property (nonatomic, readonly) unsigned int word_penalty;

- (void).cxx_destruct;
- (unsigned int)abs_pruning_threshold;
- (struct Offset<siri::speech::schema_fb::AStarFuzzyMatchingConfig> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delimiter;
- (bool)enable_completion;
- (bool)enable_word_boundary;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AStarFuzzyMatchingConfig { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AStarFuzzyMatchingConfig { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (unsigned int)max_expand_paths;
- (unsigned int)max_latency;
- (unsigned int)max_path_num_at_boundary;
- (unsigned int)max_results;
- (unsigned int)max_tm_score;
- (float)parabolic_error_bias;
- (float)parabolic_error_center;
- (unsigned int)parabolic_error_min;
- (float)parabolic_error_wide;
- (unsigned int)rel_pruning_threshold;
- (unsigned int)word_penalty;

@end
