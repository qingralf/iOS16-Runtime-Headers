/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebAccessibilityTextMarker : NSObject {
    void * _cache;
    struct TextMarkerData { 
        struct ObjectIdentifier<WebCore::AXIDType> { 
            unsigned long long m_identifier; 
        } axID; 
        struct Node {} *node; 
        unsigned int offset; 
        int anchorType; 
        bool affinity; 
        int characterStartIndex; 
        int characterOffset; 
        bool ignored; 
    }  _textMarkerData;
}

// Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore

+ (id)startOrEndTextMarkerForRange:(const void*)arg1 isStart:(bool)arg2 cache:(void*)arg3;
+ (id)textMarkerWithCharacterOffset:(struct CharacterOffset { struct Node {} *x1; int x2; int x3; int x4; }*)arg1 cache:(void*)arg2;
+ (id)textMarkerWithVisiblePosition:(void*)arg1 cache:(void*)arg2;

- (id).cxx_construct;
- (void*)accessibilityObject;
- (struct CharacterOffset { struct Node {} *x1; int x2; int x3; int x4; })characterOffset;
- (id)dataRepresentation;
- (id)description;
- (id)initWithData:(id)arg1 accessibilityObject:(id)arg2;
- (id)initWithData:(id)arg1 cache:(void*)arg2;
- (id)initWithTextMarker:(void*)arg1 cache:(void*)arg2;
- (bool)isIgnored;
- (struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>> { struct Node {} *x_1_2_1; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; } x1; bool x2; })visiblePosition;

// Image: /System/Library/AccessibilityBundles/WebCore.axbundle/WebCore

+ (Class)safeCategoryBaseClass;

- (id)initWithData:(id)arg1;

@end