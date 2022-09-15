/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SessionKit.framework/SessionKit
 */

@interface SessionKit.OpaqueSessionPayload : NSObject <NSSecureCoding> {
    void alertOptions;
    void payload;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  timestamp;
}

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end