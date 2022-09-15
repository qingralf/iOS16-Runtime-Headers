/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit
 */

@interface PRImmutablePosterTitleStyleConfiguration : PRPosterTitleStyleConfiguration {
    bool  _alternateDateEnabled;
    double  _contentsLuminance;
    NSString * _groupName;
    PRPosterTimeFontConfiguration * _timeFontConfiguration;
    NSString * _timeNumberingSystem;
    PRPosterColor * _titleColor;
    bool  _userConfigured;
}

- (void).cxx_destruct;
- (double)contentsLuminance;
- (id)groupName;
- (id)initWithTimeFontConfiguration:(id)arg1 titleColor:(id)arg2 timeNumberingSystem:(id)arg3 userConfigured:(bool)arg4 contentsLuminance:(double)arg5 alternateDateEnabled:(bool)arg6 groupName:(id)arg7;
- (bool)isAlternateDateEnabled;
- (bool)isUserConfigured;
- (id)timeFontConfiguration;
- (id)timeNumberingSystem;
- (id)titleColor;

@end