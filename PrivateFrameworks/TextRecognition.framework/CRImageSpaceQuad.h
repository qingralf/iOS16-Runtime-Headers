/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

@interface CRImageSpaceQuad : NSObject <CRCodable, CRQuad> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _bottomLeft;
    struct CGPoint { 
        double x; 
        double y; 
    }  _bottomRight;
    struct CGPoint { 
        double x; 
        double y; 
    }  _topLeft;
    struct CGPoint { 
        double x; 
        double y; 
    }  _topRight;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } bottomLeft;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } bottomRight;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } midPoint;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } topLeft;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } topRight;

+ (bool)supportsSecureCoding;

- (float)angle;
- (struct CGPoint { double x1; double x2; })bottomLeft;
- (struct CGPoint { double x1; double x2; })bottomRight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)crCodableDataRepresentation;
- (id)description;
- (double)distanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 lineP1:(struct CGPoint { double x1; double x2; })arg2 lineP2:(struct CGPoint { double x1; double x2; })arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCRCodableDataRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopLeft:(struct CGPoint { double x1; double x2; })arg1 topRight:(struct CGPoint { double x1; double x2; })arg2 bottomRight:(struct CGPoint { double x1; double x2; })arg3 bottomLeft:(struct CGPoint { double x1; double x2; })arg4;
- (bool)isEqual:(id)arg1;
- (bool)linesIntersectLine1P1:(struct CGPoint { double x1; double x2; })arg1 line1P2:(struct CGPoint { double x1; double x2; })arg2 line2P1:(struct CGPoint { double x1; double x2; })arg3 line2P2:(struct CGPoint { double x1; double x2; })arg4;
- (struct CGPoint { double x1; double x2; })midPoint;
- (id)normalizedQuadForImageSize:(struct CGSize { double x1; double x2; })arg1;
- (long long)orientationOfP1:(struct CGPoint { double x1; double x2; })arg1 p2:(struct CGPoint { double x1; double x2; })arg2 p3:(struct CGPoint { double x1; double x2; })arg3;
- (bool)overlapsQuad:(id)arg1;
- (bool)point:(struct CGPoint { double x1; double x2; })arg1 onSegmentWithP1:(struct CGPoint { double x1; double x2; })arg2 segmentP2:(struct CGPoint { double x1; double x2; })arg3;
- (id)rotatedAroundPoint:(struct CGPoint { double x1; double x2; })arg1 angle:(float)arg2;
- (double)shortestDistanceFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (struct CGPoint { double x1; double x2; })topLeft;
- (struct CGPoint { double x1; double x2; })topRight;
- (id)unionWithQuad:(id)arg1 baselineAngle:(float)arg2;

@end
