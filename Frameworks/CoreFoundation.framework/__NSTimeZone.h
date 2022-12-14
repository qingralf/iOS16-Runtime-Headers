/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSTimeZone : NSTimeZone {
    struct __CFData { } * _data;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct __CFString { } * _name;
    int  _secondsFromGMT;
    void ** _ucal;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;

- (id)abbreviationForDate:(id)arg1;
- (id)data;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (void)dealloc;
- (bool)isDaylightSavingTimeForDate:(id)arg1;
- (id)localizedName:(long long)arg1 locale:(id)arg2;
- (id)name;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (long long)secondsFromGMTForDate:(id)arg1;

@end
