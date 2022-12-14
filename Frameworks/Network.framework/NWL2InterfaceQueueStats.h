/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWL2InterfaceQueueStats : NSObject {
    unsigned long long  _averageQueueDelay;
    NSString * _interfaceName;
    int  _interfaceType;
    unsigned long long  _maximumQueueDelay;
    unsigned long long  _minimumQueueDelay;
    unsigned char  _slot;
}

@property (nonatomic) unsigned long long averageQueueDelay;
@property (nonatomic, retain) NSString *interfaceName;
@property (nonatomic) int interfaceType;
@property (nonatomic) unsigned long long maximumQueueDelay;
@property (nonatomic) unsigned long long minimumQueueDelay;
@property (nonatomic) unsigned char slot;

+ (id)interfaceQueueStatsSlotToString:(unsigned char)arg1;

- (void).cxx_destruct;
- (unsigned long long)averageQueueDelay;
- (id)description;
- (id)interfaceName;
- (int)interfaceType;
- (unsigned long long)maximumQueueDelay;
- (unsigned long long)minimumQueueDelay;
- (void)setAverageQueueDelay:(unsigned long long)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setInterfaceType:(int)arg1;
- (void)setMaximumQueueDelay:(unsigned long long)arg1;
- (void)setMinimumQueueDelay:(unsigned long long)arg1;
- (void)setSlot:(unsigned char)arg1;
- (unsigned char)slot;

@end
