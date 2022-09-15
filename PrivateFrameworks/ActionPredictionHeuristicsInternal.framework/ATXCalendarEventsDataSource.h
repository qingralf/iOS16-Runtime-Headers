/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

@interface ATXCalendarEventsDataSource : NSObject {
    ATXHeuristicDevice * _device;
}

+ (id)contactForParticipant:(id)arg1;
+ (id)contactStore;
+ (id)eventsFromStartDate:(id)arg1 endDate:(id)arg2;
+ (id)eventsFromStartDate:(id)arg1 endDate:(id)arg2 category:(id)arg3;
+ (id)flightEventsFromStartDate:(id)arg1 endDate:(id)arg2;
+ (id)hotelEventsFromStartDate:(id)arg1 endDate:(id)arg2;
+ (id)organizerContactWithEvent:(id)arg1;
+ (id)sortEkEvents:(id)arg1;

- (void).cxx_destruct;
- (void)calendarEventsFromStartDate:(id)arg1 toEndDate:(id)arg2 callback:(id /* block */)arg3;
- (id)initWithDevice:(id)arg1;
- (void)visibleCalendarsWithCallback:(id /* block */)arg1;

@end