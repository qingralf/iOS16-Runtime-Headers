/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGShareBackSuggester : NSObject {
    NSObject<OS_os_log> * _loggingConnection;
    unsigned short  _positiveProcessingValue;
    NSArray * _sources;
}

+ (id)shareBackSuggesterForCMMWithLoggingConnection:(id)arg1 graph:(id)arg2;
+ (id)shareBackSuggesterForSyndicationWithLoggingConnection:(id)arg1 photoLibrary:(id)arg2 graph:(id)arg3;

- (void).cxx_destruct;
- (id)initWithSources:(id)arg1 positiveProcessingValue:(unsigned short)arg2 loggingConnection:(id)arg3 graph:(id)arg4;
- (id)suggesterResultsForInputs:(id)arg1 inGraph:(id)arg2 error:(id*)arg3;
- (id)suggesterResultsForUnclusteredSuggesterInputs:(id)arg1 inGraph:(id)arg2 error:(id*)arg3;

@end
