/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceGaze : NSObject <NSCopying, NSSecureCoding, VNOriginatingRequestSpecifierProviding> {
    long long  _direction;
    NSUUID * _faceObservationUUID;
    VNPixelBufferObservation * _gazeMask;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    NSUUID * _lookedAtFaceObservationUUID;
    VNRequestSpecifier * _originatingRequestSpecifier;
}

@property (nonatomic, readonly) long long direction;
@property (nonatomic, readonly) NSUUID *faceObservationUUID;
@property (nonatomic, readonly) VNPixelBufferObservation *gazeMask;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } location;
@property (nonatomic, readonly) NSUUID *lookedAtFaceObservationUUID;
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)direction;
- (void)encodeWithCoder:(id)arg1;
- (id)faceObservationUUID;
- (id)gazeMask;
- (bool)hasLocation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })location;
- (struct CGPoint { double x1; double x2; })locationInTopLeftOrigin:(bool)arg1 orientation:(unsigned int)arg2;
- (id)lookedAtFaceObservationUUID;
- (id)originatingRequestSpecifier;

@end
