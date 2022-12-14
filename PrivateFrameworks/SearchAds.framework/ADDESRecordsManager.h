/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds
 */

@interface ADDESRecordsManager : NSObject {
    NSString * _recordID;
}

@property (nonatomic, retain) NSString *recordID;

- (void).cxx_destruct;
- (id)_createRecordForAdData:(id)arg1 installed:(bool)arg2 isDupe:(bool)arg3;
- (void)createRecords:(id)arg1 placementType:(unsigned long long)arg2 firstOrganicId:(id)arg3;
- (id)eventTypeToString:(long long)arg1;
- (id)init;
- (bool)isAppInstalled:(unsigned long long)arg1;
- (id)recordID;
- (void)setRecordID:(id)arg1;
- (void)updateDESRecord:(id)arg1 forEvent:(long long)arg2;

@end
