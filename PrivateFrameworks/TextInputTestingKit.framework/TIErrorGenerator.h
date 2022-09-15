/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputTestingKit.framework/TextInputTestingKit
 */

@interface TIErrorGenerator : NSObject {
    unsigned int  _RNGSeedSalt;
    float  _relErrorControlKeys;
    float  _relErrorNumbersPunctuation;
    long long  _spaceHorizontalErrorMode;
    double  _spaceVerticalBias;
    void * m_distribution;
    void * m_generator;
}

@property (nonatomic) long long spaceHorizontalErrorMode;
@property (nonatomic) double spaceVerticalBias;

+ (id)errorGeneratorWithAttributes:(id)arg1;

- (void)dealloc;
- (id)errorForKeyString:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGPoint { double x1; double x2; })globalBias;
- (id)init;
- (id)initWithAttributes:(id)arg1;
- (struct CGPoint { double x1; double x2; })persistentBiasForKeyString:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGPoint { double x1; double x2; })persistentBiasForSpaceBarRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })randomErrorForKeyString:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGPoint { double x1; double x2; })randomPointInDistribution;
- (void)reset;
- (void)setRandomNumberSeed:(unsigned int)arg1;
- (void)setSpaceHorizontalErrorMode:(long long)arg1;
- (void)setSpaceVerticalBias:(double)arg1;
- (long long)spaceHorizontalErrorMode;
- (double)spaceVerticalBias;
- (double)uniformRandomNumber;
- (struct CGPoint { double x1; double x2; })uniformRandomPointInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end