/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphIngestHolidaysProcessor : NSObject <PGGraphIngestProcessor> {
    NSMutableDictionary * _biologicalSexByPartnerPersonNodeIdentifier;
    PGGraphPersonNodeCollection * _childPersonNodes;
    PGGraphPersonNodeCollection * _coworkerPersonNodes;
    PGGraphPersonNodeCollection * _familyPersonNodes;
    PGGraphPersonNodeCollection * _fatherPersonNodes;
    PGGraphPersonNodeCollection * _friendPersonNodes;
    PGGraphBuilder * _graphBuilder;
    PGHolidayClassifier * _holidayClassifier;
    unsigned long long  _meBiologicalSex;
    PGGraphMeNodeCollection * _meNodeAsCollection;
    PGGraphPersonNodeCollection * _motherPersonNodes;
    PGGraphPersonNodeCollection * _nonAcquaintancePersonNodes;
    PGGraphPersonNodeCollection * _partnerPersonNodes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)keyboardLanguageCodesForInfoNode:(id)arg1 holidayService:(id)arg2;

- (void).cxx_destruct;
- (double)_calculateSceneScores:(id)arg1;
- (double)_dateScoreForEventRule:(id)arg1 localeCode:(id)arg2 holidayDate:(id)arg3 momentDate:(id)arg4;
- (unsigned long long)_eventRuleLocationTraitForMomentNode:(id)arg1 graph:(id)arg2;
- (unsigned long long)_eventRulePeopleTraitForPersonNodes:(id)arg1 graph:(id)arg2;
- (id)_momentsCelebratingRule:(id)arg1 localDates:(id)arg2 userCountryCode:(id)arg3 keyboardLanguageCodes:(id)arg4 graph:(id)arg5 loggingConnection:(id)arg6;
- (void)_prepareIfNeededWithGraph:(id)arg1;
- (id)allDatesForEventRule:(id)arg1 withGraph:(id)arg2;
- (double)dateScoreForEventRule:(id)arg1 localeCountryCode:(id)arg2 momentCountryCodes:(id)arg3 keyboardLanguageCodes:(id)arg4 momentDate:(id)arg5;
- (id)holidayCalendarEventRuleTraitsForMomentNode:(id)arg1;
- (id)init;
- (void)insertHolidaysBetweenLocalDate:(id)arg1 andLocalDate:(id)arg2 graph:(id)arg3 locale:(id)arg4 loggingConnection:(id)arg5 progressBlock:(id /* block */)arg6;
- (void)insertHolidaysWithMomentNodes:(id)arg1 graph:(id)arg2 locale:(id)arg3 loggingConnection:(id)arg4 progressBlock:(id /* block */)arg5;
- (double)locationScoreForEventRule:(id)arg1 localeCountryCode:(id)arg2 momentCountryCodes:(id)arg3 keyboardLanguageCodes:(id)arg4;
- (bool)momentTraitsMatchesHolidayTraits:(id)arg1 momentNode:(id)arg2 loggingConnection:(id)arg3;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (double)sceneScoreForEventRule:(id)arg1 localeCountryCode:(id)arg2 momentCountryCodes:(id)arg3 keyboardLanguageCodes:(id)arg4 momentNode:(id)arg5;
- (void)setGraphBuilder:(id)arg1;
- (bool)shouldCreateHolidayEdgeForEventRule:(id)arg1 momentNode:(id)arg2 momentLocalDate:(id)arg3 withGraph:(id)arg4 loggingConnection:(id)arg5 localeCountryCode:(id)arg6 keyboardLanguageCodes:(id)arg7;
- (bool)shouldRunWithGraphUpdate:(id)arg1;

@end
