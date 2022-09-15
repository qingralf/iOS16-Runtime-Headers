/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligencePlatform.framework/IntelligencePlatform
 */

@interface GDVisualIdentifier : NSObject <GDSubEntity, GDTripleIteratorSubEntityRenderer> {
    double  _confidence;
    GDSubEntityIdentifier * _subEntityIdentifier;
    NSString * _visualIdentifier;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) GDSubEntityIdentifier *subEntityIdentifier;
@property (nonatomic, readonly) NSString *visualIdentifier;

- (void).cxx_destruct;
- (double)confidence;
- (id)description;
- (id)initWithRelationshipIdTriplesIterator:(id)arg1;
- (id)subEntityIdentifier;
- (id)visualIdentifier;

@end