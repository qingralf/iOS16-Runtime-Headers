/* Generated by RuntimeBrowser.
 */

@protocol PHASuggestionGenerationTask <PHATask>

@required

- (bool)runWithGraphManager:(void *)arg1 progressReporter:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: PGManager *, MAProgressReporter *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)setSuggestionOptionsDictionary:(NSDictionary *)arg1;
- (NSDictionary *)suggestionOptionsDictionary;

@end
