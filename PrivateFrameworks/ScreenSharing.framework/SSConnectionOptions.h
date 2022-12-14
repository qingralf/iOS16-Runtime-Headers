/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenSharing.framework/ScreenSharing
 */

@interface SSConnectionOptions : NSObject {
    long long  _authMethod;
    bool  _connectingToIOSdevice;
    long long  _controlType;
    NSString * _deviceID;
    NSString * _displayName;
    NSDictionary * _hints;
    NSString * _idsDestination;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSize;
    long long  _minimumEncryptionLevel;
    bool  _noReconnect;
    bool  _openInFullScreen;
    long long  _panningMode;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _restoreContentFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _restoreWindowFrame;
    long long  _screenQualityMode;
    unsigned long long  _selectedScreen;
    long long  _sessionSelectionAction;
    bool  _shouldCurtainScreen;
    bool  _shouldFallbackToObserve;
    bool  _shouldGetUserInfo;
    bool  _shouldReturnToAddressBox;
    bool  _shouldScaleScreen;
    bool  _shouldSharePasteboard;
    bool  _showConnectionProgress;
    bool  _skipAddressPresentation;
    bool  _skipUserPassDialogIfPossible;
    NSArray * _videoEncodings;
}

@property long long authMethod;
@property bool connectingToIOSdevice;
@property long long controlType;
@property (retain) NSString *deviceID;
@property (retain) NSString *displayName;
@property (copy) NSDictionary *hints;
@property (retain) NSString *idsDestination;
@property struct CGSize { double x1; double x2; } maxSize;
@property long long minimumEncryptionLevel;
@property bool noReconnect;
@property bool openInFullScreen;
@property long long panningMode;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } restoreContentFrame;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } restoreWindowFrame;
@property long long screenQualityMode;
@property unsigned long long selectedScreen;
@property long long sessionSelectionAction;
@property bool shouldCurtainScreen;
@property bool shouldFallbackToObserve;
@property bool shouldGetUserInfo;
@property bool shouldReturnToAddressBox;
@property bool shouldScaleScreen;
@property bool shouldSharePasteboard;
@property bool showConnectionProgress;
@property bool skipAddressPresentation;
@property bool skipUserPassDialogIfPossible;
@property (copy) NSArray *videoEncodings;

+ (id)defaultOptions;

- (void).cxx_destruct;
- (long long)authMethod;
- (bool)connectingToIOSdevice;
- (long long)controlType;
- (void)dealloc;
- (id)description;
- (id)deviceID;
- (id)displayName;
- (id)hints;
- (id)idsDestination;
- (id)init;
- (struct CGSize { double x1; double x2; })maxSize;
- (long long)minimumEncryptionLevel;
- (bool)noReconnect;
- (bool)openInFullScreen;
- (long long)panningMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })restoreContentFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })restoreWindowFrame;
- (long long)screenQualityMode;
- (unsigned long long)selectedScreen;
- (long long)sessionSelectionAction;
- (void)setAuthMethod:(long long)arg1;
- (void)setConnectingToIOSdevice:(bool)arg1;
- (void)setControlType:(long long)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHints:(id)arg1;
- (void)setIdsDestination:(id)arg1;
- (void)setMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinimumEncryptionLevel:(long long)arg1;
- (void)setNoReconnect:(bool)arg1;
- (void)setOpenInFullScreen:(bool)arg1;
- (void)setPanningMode:(long long)arg1;
- (void)setRestoreContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRestoreWindowFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScreenQualityMode:(long long)arg1;
- (void)setSelectedScreen:(unsigned long long)arg1;
- (void)setSessionSelectionAction:(long long)arg1;
- (void)setShouldCurtainScreen:(bool)arg1;
- (void)setShouldFallbackToObserve:(bool)arg1;
- (void)setShouldGetUserInfo:(bool)arg1;
- (void)setShouldReturnToAddressBox:(bool)arg1;
- (void)setShouldScaleScreen:(bool)arg1;
- (void)setShouldSharePasteboard:(bool)arg1;
- (void)setShowConnectionProgress:(bool)arg1;
- (void)setSkipAddressPresentation:(bool)arg1;
- (void)setSkipUserPassDialogIfPossible:(bool)arg1;
- (void)setVideoEncodings:(id)arg1;
- (bool)shouldCurtainScreen;
- (bool)shouldFallbackToObserve;
- (bool)shouldGetUserInfo;
- (bool)shouldReturnToAddressBox;
- (bool)shouldScaleScreen;
- (bool)shouldSharePasteboard;
- (bool)showConnectionProgress;
- (bool)skipAddressPresentation;
- (bool)skipUserPassDialogIfPossible;
- (id)videoEncodings;

@end
