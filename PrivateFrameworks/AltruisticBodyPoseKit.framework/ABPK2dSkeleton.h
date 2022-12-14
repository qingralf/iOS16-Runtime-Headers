/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AltruisticBodyPoseKit.framework/AltruisticBodyPoseKit
 */

@interface ABPK2dSkeleton : NSObject {
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _confidences;
    bool  _hasMissingJoints;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageRes;
    int  _imageType;
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__value_"^ {}  _keypoints2d;
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__value_"^ {}  _normalizedKeypoints2d;
    ABPKSkeletonDefinition * _skeletonDefinition;
    int  _skeletonType;
    struct vector<unsigned int, std::allocator<unsigned int>> { 
        unsigned int *__begin_; 
        unsigned int *__end_; 
        struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { 
            unsigned int *__value_; 
        } __end_cap_; 
    }  _visibility;
}

@property (nonatomic, readonly) const float*confidences;
@property (nonatomic, readonly) bool hasMissingJoints;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageRes;
@property (nonatomic, readonly) int imageType;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**keypoints2d;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**normalizedKeypoints2d;
@property (nonatomic, readonly) ABPKSkeletonDefinition *skeletonDefinition;
@property (nonatomic, readonly) int skeletonType;
@property (nonatomic, readonly) const unsigned int*visibility;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const float*)confidences;
- (id)description;
- (bool)hasMissingJoints;
- (struct CGSize { double x1; double x2; })imageRes;
- (int)imageType;
- (id)init;
- (id)initWithType:(int)arg1;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)keypoints2d;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)normalizedKeypoints2d;
- (int)overlaySkeletonOnImage:(void *)arg1 withResult:(void *)arg2 withColor:(void *)arg3; // needs 3 arg types, found 2: struct __CVBuffer { }*, struct __CVBuffer { }*
- (void)printData;
- (void)setHasMissingJoints:(bool)arg1;
- (void)setJointConfidences:(const float*)arg1;
- (void)setJointVisibility:(const unsigned int*)arg1;
- (void)setKeypoints2d:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 withImageRes:(struct CGSize { double x1; double x2; })arg2;
- (void)setNormalizedKeypoints2d:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 withImageRes:(struct CGSize { double x1; double x2; })arg2;
- (id)skeletonDefinition;
- (int)skeletonType;
- (id)toDictionary;
- (const unsigned int*)visibility;

@end
