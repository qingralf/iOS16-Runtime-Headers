/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerfPowerTelemetryReader.framework/PerfPowerTelemetryReader
 */

@interface PPTHistogramDimensionConfig : NSObject <NSCopying, NSSecureCoding> {
    NSOrderedSet * _categories;
    unsigned long long  _histBinCount;
    NSArray * _histEdges;
    NSString * _label;
    double  _maxRange;
    double  _minRange;
    NSArray * _samples;
    bool  _useForAccumulators;
    bool  _useOverflowBins;
}

@property (readonly) unsigned long long binCount;
@property (readonly) NSOrderedSet *categories;
@property (readonly) NSArray *edges;
@property (readonly) NSString *label;
@property (readonly) struct { double x1; double x2; } range;
@property (readonly) NSArray *samples;
@property (readonly) bool useForAccumulators;
@property (readonly) bool useOverflowBins;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)binCount;
- (id)categories;
- (id)configurationEdges;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)edges;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBinCount:(unsigned long long)arg1 range:(struct { double x1; double x2; })arg2 label:(id)arg3 options:(struct { bool x1; bool x2; })arg4 samples:(id)arg5;
- (id)initWithCategories:(id)arg1 label:(id)arg2 options:(struct { bool x1; bool x2; })arg3 samples:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithEdges:(id)arg1 label:(id)arg2 options:(struct { bool x1; bool x2; })arg3 samples:(id)arg4;
- (id)label;
- (struct { double x1; double x2; })range;
- (id)samples;
- (bool)useForAccumulators;
- (bool)useOverflowBins;

@end