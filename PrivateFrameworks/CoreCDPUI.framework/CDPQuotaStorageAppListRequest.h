/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPQuotaStorageAppListRequest : AARequest {
    ACAccount * _account;
    NSString * _urlStringFormat;
}

@property (nonatomic, readonly) ACAccount *account;

- (void).cxx_destruct;
- (id)_urlStringFormatFromBag;
- (id)account;
- (id)initWithAccount:(id)arg1;
- (bool)isUrlAvailable;
- (id)urlRequest;
- (id)urlString;

@end