/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices
 */

@interface LNConnectionActionResponse : NSObject <BSXPCCoding, NSSecureCoding> {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    NSXPCListenerEndpoint * _listenerEndpoint;
}

@property (nonatomic, readonly) struct { unsigned int x1[8]; } auditToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct { unsigned int x1[8]; })auditToken;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithXPCListenerEndpoint:(id)arg1 auditToken:(struct { unsigned int x1[8]; })arg2;
- (id)listenerEndpoint;

@end
