/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKListNode : NSObject {
    GKListNode * _nextNode;
    GKListNode * _prevNode;
    id  _value;
}

@property (nonatomic, retain) GKListNode *nextNode;
@property (nonatomic, retain) GKListNode *prevNode;
@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (id)description;
- (id)initWithValue:(id)arg1;
- (id)nextNode;
- (id)prevNode;
- (void)setNextNode:(id)arg1;
- (void)setPrevNode:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end