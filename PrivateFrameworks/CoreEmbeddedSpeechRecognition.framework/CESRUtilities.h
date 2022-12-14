/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreEmbeddedSpeechRecognition.framework/CoreEmbeddedSpeechRecognition
 */

@interface CESRUtilities : NSObject

+ (id)AFSpeechInfoPackageForEARSpeechRecognitionResult:(id)arg1;
+ (id)AFSpeechInfoPackageForEARSpeechRecognitionResultPackage:(id)arg1;
+ (id)afRecognitionForEARSausage:(id)arg1 processedAudioDuration:(double)arg2;
+ (id)afSpeechPackageForEARPackage:(id)arg1 processedAudioDuration:(double)arg2 speechProfileUsed:(bool)arg3;
+ (id)afTokensForEARTokens:(id)arg1 removeSpaceBefore:(bool)arg2;
+ (id)afVoiceCommandGrammarParseResultForEARTokenString:(id)arg1 withEARVoiceCommandInterpretations:(id)arg2;
+ (long long)calculateDiffInDaysFromTimestamp:(id)arg1;
+ (id)earTokensForAFTokens:(id)arg1 appendedAutoPunctuation:(bool)arg2;
+ (id)earTokensToString:(id)arg1;
+ (bool)hasRecognizedAnythingInAFSpeechPackage:(id)arg1;
+ (id)languageStringForLocaleString:(id)arg1;
+ (void)loadSpeechProfiles:(id)arg1 language:(id)arg2;
+ (id)localeStringForLanguageString:(id)arg1;
+ (id)mapContextOptionToString:(unsigned long long)arg1;
+ (id)speechProfilePathsWithLanguage:(id)arg1;
+ (id)speechProfileRootDirectories;
+ (id)voiceCommandsParamKeyBuilder:(unsigned long long)arg1;

@end
