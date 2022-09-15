/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ExtensionFoundation.framework/ExtensionFoundation
 */

@interface _EXExtensionPoint : NSObject <EXExtensionPoint, NSCopying> {
    NSDictionary * _SDKDictionary;
    NSString * _identifier;
    unsigned int  _platform;
    NSURL * _url;
    unsigned long long  _variant;
}

@property (retain) NSDictionary *SDKDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSString *identifier;
@property unsigned int platform;
@property (readonly) Class superclass;
@property (retain) NSURL *url;
@property unsigned long long variant;

- (void).cxx_destruct;
- (id)SDKDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (unsigned int)platform;
- (void)reset;
- (void)setIdentifier:(id)arg1;
- (void)setPlatform:(unsigned int)arg1;
- (void)setSDKDictionary:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setVariant:(unsigned long long)arg1;
- (id)url;
- (unsigned long long)variant;

@end