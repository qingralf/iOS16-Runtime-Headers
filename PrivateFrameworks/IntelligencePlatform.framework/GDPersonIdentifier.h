/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligencePlatform.framework/IntelligencePlatform
 */

@interface GDPersonIdentifier : NSObject <GDSubEntity, GDTripleIteratorSubEntityRenderer> {
    NSString * _identifier;
    GDSubEntityIdentifier * _subEntityIdentifier;
    NSString * _type;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) GDSubEntityIdentifier *subEntityIdentifier;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithRelationshipIdTriplesIterator:(id)arg1;
- (id)subEntityIdentifier;
- (id)type;

@end