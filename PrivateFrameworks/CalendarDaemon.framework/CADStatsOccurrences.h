/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADStatsOccurrences : CADStatCollector {
    CalDateRange * _desiredOccurrenceRange;
    CalDateRange * _last1Day;
    CalDateRange * _next1Day;
    CalDateRange * _next30Days;
    CalDateRange * _next365Days;
    CalDateRange * _next7Days;
    NSMutableArray * _occurrenceInfos;
}

+ (id)eventName;

- (void).cxx_destruct;
- (id)desiredOccurrenceRange;
- (id)eventDictionaries;
- (void)prepareWithContext:(id)arg1;
- (void)processOccurrences:(id)arg1;
- (bool)wantsOccurrences;

@end
