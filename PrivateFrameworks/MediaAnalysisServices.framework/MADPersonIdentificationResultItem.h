/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaAnalysisServices.framework/MediaAnalysisServices
 */

@interface MADPersonIdentificationResultItem : NSObject <NSSecureCoding> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingBox;
    float  _confidence;
    NSString * _personIdentifier;
    NSString * _personName;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) NSString *personIdentifier;
@property (nonatomic, readonly) NSString *personName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (float)confidence;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersonIdentifier:(id)arg1 personName:(id)arg2 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 andConfidence:(float)arg4;
- (id)personIdentifier;
- (id)personName;

@end