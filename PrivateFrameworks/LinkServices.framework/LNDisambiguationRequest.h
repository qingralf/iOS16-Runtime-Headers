/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices
 */

@interface LNDisambiguationRequest : NSObject <NSSecureCoding> {
    id /* block */  _completionHandler;
    LNDialog * _dialog;
    NSUUID * _identifier;
    NSArray * _items;
    NSString * _parameterName;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly, copy) LNDialog *dialog;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSString *parameterName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)dialog;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 parameterName:(id)arg2 items:(id)arg3 dialog:(id)arg4;
- (id)items;
- (id)parameterName;
- (void)respondWithError:(id)arg1;
- (void)respondWithSelectedItemIndex:(long long)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;

@end