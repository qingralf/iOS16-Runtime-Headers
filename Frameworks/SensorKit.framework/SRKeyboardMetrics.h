/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SensorKit.framework/SensorKit
 */

@interface SRKeyboardMetrics : NSObject <NSSecureCoding, SRSampleExporting, SRSampling> {
    NSDateInterval * _interval;
    NSDictionary * _keyboardMetaInformation;
    NSMutableDictionary * _mutablePositionalMetrics;
    NSMutableDictionary * _mutableProbabilityMetrics;
    NSMutableDictionary * _mutableScalarMetrics;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) NSMeasurement *height;
@property (readonly, copy) NSArray *inputModes;
@property (retain) NSDateInterval *interval;
@property (readonly, copy) NSString *keyboardIdentifier;
@property (copy) NSDictionary *keyboardMetaInformation;
@property (retain) NSMutableDictionary *mutablePositionalMetrics;
@property (retain) NSMutableDictionary *mutableProbabilityMetrics;
@property (retain) NSMutableDictionary *mutableScalarMetrics;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *version;
@property (readonly) NSMeasurement *width;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (id)anyTapToCharKey;
- (id)anyTapToPlaneChangeKey;
- (id)binarySampleRepresentation;
- (id)charKeyToAnyTapKey;
- (id)charKeyToDelete;
- (id)charKeyToPlaneChangeKey;
- (id)charKeyToPrediction;
- (id)charKeyToSpaceKey;
- (void)dealloc;
- (id)deleteDownErrorDistance;
- (id)deleteToCharKey;
- (id)deleteToDelete;
- (id)deleteToDeletes;
- (id)deleteToPath;
- (id)deleteToPlaneChangeKey;
- (id)deleteToShiftKey;
- (id)deleteToSpaceKey;
- (id)deleteTouchDownUp;
- (id)deleteUpErrorDistance;
- (id)description;
- (id)downErrorDistance;
- (double)duration;
- (long long)emojiCountForSentimentCategory:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)height;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterval:(id)arg1 metaInformation:(id)arg2;
- (id)inputModes;
- (id)interval;
- (bool)isEqual:(id)arg1;
- (id)keyboardIdentifier;
- (id)keyboardMetaInformation;
- (id)longWordDownErrorDistance;
- (id)longWordTouchDownDown;
- (id)longWordTouchDownUp;
- (id)longWordUpErrorDistance;
- (id)mutablePositionalMetrics;
- (id)mutableProbabilityMetrics;
- (id)mutableScalarMetrics;
- (id)pathErrorDistanceRatio;
- (id)pathToDelete;
- (id)pathToPath;
- (id)pathToSpace;
- (double)pathTypingSpeed;
- (id)planeChangeKeyToCharKey;
- (id)planeChangeToAnyTap;
- (id)positionalMetrics;
- (id)probabilityMetrics;
- (id)scalarMetrics;
- (void)setInterval:(id)arg1;
- (void)setKeyboardMetaInformation:(id)arg1;
- (void)setMutablePositionalMetrics:(id)arg1;
- (void)setMutableProbabilityMetrics:(id)arg1;
- (void)setMutableScalarMetrics:(id)arg1;
- (id)shortWordCharKeyDownErrorDistance;
- (id)shortWordCharKeyToCharKey;
- (id)shortWordCharKeyTouchDownUp;
- (id)shortWordCharKeyUpErrorDistance;
- (id)spaceDownErrorDistance;
- (id)spaceToCharKey;
- (id)spaceToDeleteKey;
- (id)spaceToPath;
- (id)spaceToPlaneChangeKey;
- (id)spaceToPredictionKey;
- (id)spaceToShiftKey;
- (id)spaceToSpaceKey;
- (id)spaceTouchDownUp;
- (id)spaceUpErrorDistance;
- (id)sr_dictionaryRepresentation;
- (long long)totalAbsolutistWords;
- (long long)totalAlteredWords;
- (long long)totalAngerEmojis;
- (long long)totalAngerWords;
- (long long)totalAnxietyEmojis;
- (long long)totalAnxietyWords;
- (long long)totalAutoCorrections;
- (long long)totalConfusedEmojis;
- (long long)totalDeathWords;
- (long long)totalDeletes;
- (long long)totalDownWords;
- (long long)totalDrags;
- (long long)totalEmojis;
- (long long)totalHealthFeelingEmojis;
- (long long)totalHealthFeelingWords;
- (long long)totalHitTestCorrections;
- (long long)totalInsertKeyCorrections;
- (long long)totalLowEnergyEmojis;
- (long long)totalNearKeyCorrections;
- (id)totalPathLength;
- (long long)totalPathPauses;
- (double)totalPathTime;
- (long long)totalPaths;
- (long long)totalPauses;
- (long long)totalPositiveEmojis;
- (long long)totalRetroCorrections;
- (long long)totalSadEmojis;
- (long long)totalSkipTouchCorrections;
- (long long)totalSpaceCorrections;
- (long long)totalSubstitutionCorrections;
- (long long)totalTaps;
- (long long)totalTranspositionCorrections;
- (double)totalTypingDuration;
- (long long)totalTypingEpisodes;
- (long long)totalWords;
- (id)touchDownDown;
- (id)touchDownUp;
- (double)typingSpeed;
- (id)upErrorDistance;
- (id)version;
- (id)width;
- (long long)wordCountForSentimentCategory:(long long)arg1;

@end