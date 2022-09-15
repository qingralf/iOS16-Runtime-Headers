/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualIntelligence.framework/VisualIntelligence
 */

@interface VIUserFeedback : NSObject <NSCopying> {
    <VIImageContent> * _image;
    NSString * _reportIdentifier;
    NSData * _userFeedbackPayload;
}

@property (nonatomic, readonly) <VIImageContent> *image;
@property (nonatomic, readonly, copy) NSString *reportIdentifier;
@property (nonatomic, readonly, copy) NSData *userFeedbackPayload;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)image;
- (id)initWithImage:(id)arg1 payload:(id)arg2 reportIdentifier:(id)arg3;
- (id)reportIdentifier;
- (id)userFeedbackPayload;

@end