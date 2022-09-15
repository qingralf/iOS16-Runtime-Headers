/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphPOINode : PGGraphPropertylessNode <PGGraphLocalizable, PGGraphPortraitTopic, PGGraphSynonymSupport> {
    NSString * _label;
}

@property (nonatomic, readonly) PGGraphPOINodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSArray *localizedSynonyms;
@property (nonatomic, readonly) NSString *pg_topic;
@property (readonly) Class superclass;

+ (id)_localizationKeyForPOINode:(id)arg1;
+ (id)filter;
+ (id)filterWithLabel:(id)arg1;
+ (id)filterWithLabels:(id)arg1;
+ (id)momentOfPOI;
+ (id)validPOILabels;

- (void).cxx_destruct;
- (id)collection;
- (unsigned short)domain;
- (id)initWithLabel:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)label;
- (id)localizedName;
- (id)localizedSynonyms;
- (id)pg_topic;

@end