/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit
 */

@interface PRMutablePosterTitleStyleConfiguration : PRPosterTitleStyleConfiguration {
    bool  _alternateDateEnabled;
    double  _contentsLuminance;
    NSString * _groupName;
    PRPosterTimeFontConfiguration * _timeFontConfiguration;
    NSString * _timeNumberingSystem;
    PRPosterColor * _titleColor;
    bool  _userConfigured;
}

@property (getter=isAlternateDateEnabled, nonatomic) bool alternateDateEnabled;
@property (nonatomic) double contentsLuminance;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) PRPosterTimeFontConfiguration *timeFontConfiguration;
@property (nonatomic, copy) NSString *timeNumberingSystem;
@property (nonatomic, copy) PRPosterColor *titleColor;
@property (getter=isUserConfigured, nonatomic) bool userConfigured;

- (void).cxx_destruct;
- (double)contentsLuminance;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)groupName;
- (id)initWithTimeFontConfiguration:(id)arg1 titleColor:(id)arg2 timeNumberingSystem:(id)arg3 userConfigured:(bool)arg4 contentsLuminance:(double)arg5 alternateDateEnabled:(bool)arg6 groupName:(id)arg7;
- (bool)isAlternateDateEnabled;
- (bool)isUserConfigured;
- (void)setAlternateDateEnabled:(bool)arg1;
- (void)setContentsLuminance:(double)arg1;
- (void)setGroupName:(id)arg1;
- (void)setTimeFontConfiguration:(id)arg1;
- (void)setTimeNumberingSystem:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setUserConfigured:(bool)arg1;
- (id)timeFontConfiguration;
- (id)timeNumberingSystem;
- (id)titleColor;

@end
