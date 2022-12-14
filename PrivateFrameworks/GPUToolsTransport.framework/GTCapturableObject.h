/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GPUToolsTransport.framework/GPUToolsTransport
 */

@interface GTCapturableObject : NSObject <NSSecureCoding> {
    NSString * _displayName;
    unsigned long long  _objectID;
    int  _type;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) unsigned long long objectID;
@property (nonatomic, readonly) int type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(int)arg1 name:(id)arg2 address:(unsigned long long)arg3;
- (unsigned long long)objectID;
- (int)type;

@end
