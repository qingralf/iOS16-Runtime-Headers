/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PISegmentationLayoutRegions : NSObject <PFParallaxAssetRegions> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _acceptableCropRect;
    NSArray * _faceRegions;
    NSArray * _petRegions;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _preferredCropRect;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } acceptableCropRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *faceRegions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *petRegions;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } preferredCropRect;
@property (readonly) Class superclass;

+ (id)dictionaryFromRegions:(id)arg1;
+ (id)regionsFromDictionary:(id)arg1 error:(out id*)arg2;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })acceptableCropRect;
- (id)debugDescription;
- (id)faceRegions;
- (id)init;
- (id)initWithAcceptableRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 preferredRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 faces:(id)arg3 pets:(id)arg4;
- (id)petRegions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })preferredCropRect;

@end