/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWL2Report : NSObject {
    unsigned char  _cellularBand;
    int  _cellularBandInfo;
    int  _cellularBandwidth;
    int  _cellularBars;
    NSString * _cellularCellType;
    unsigned char  _cellularDualSimStatus;
    bool  _cellularKnownGood;
    int  _cellularLQM;
    int  _cellularMCC;
    int  _cellularMNC;
    unsigned int  _cellularMode;
    int  _cellularOutrankPrimaryReason;
    unsigned long long  _cellularOutrankReasonFlags;
    bool  _cellularOutranksWiFi;
    int  _cellularPID;
    unsigned char  _cellularRadioTechnology;
    int  _cellularSecondaryMcc;
    int  _cellularSecondaryMnc;
    int  _cellularTAC;
    int  _cellularUARFCN;
    NSMutableArray * _interfaceQueueStats;
    bool  _wifiKnownGood;
    int  _wifiLQM;
    int  _wifiRSSI;
    unsigned char  _wifiRadioTechnology;
}

@property (nonatomic) unsigned char cellularBand;
@property (nonatomic) int cellularBandInfo;
@property (nonatomic) int cellularBandwidth;
@property (nonatomic) int cellularBars;
@property (nonatomic, retain) NSString *cellularCellType;
@property (nonatomic) unsigned char cellularDualSimStatus;
@property (nonatomic) bool cellularKnownGood;
@property (nonatomic) int cellularLQM;
@property (nonatomic) int cellularMCC;
@property (nonatomic) int cellularMNC;
@property (nonatomic) unsigned int cellularMode;
@property (nonatomic) int cellularOutrankPrimaryReason;
@property (nonatomic) unsigned long long cellularOutrankReasonFlags;
@property (nonatomic) bool cellularOutranksWiFi;
@property (nonatomic) int cellularPID;
@property (nonatomic) unsigned char cellularRadioTechnology;
@property (nonatomic) int cellularSecondaryMcc;
@property (nonatomic) int cellularSecondaryMnc;
@property (nonatomic) int cellularTAC;
@property (nonatomic) int cellularUARFCN;
@property (nonatomic, retain) NSMutableArray *interfaceQueueStats;
@property (nonatomic) bool wifiKnownGood;
@property (nonatomic) int wifiLQM;
@property (nonatomic) int wifiRSSI;
@property (nonatomic) unsigned char wifiRadioTechnology;

- (void).cxx_destruct;
- (id)awdReport;
- (unsigned char)cellularBand;
- (int)cellularBandInfo;
- (int)cellularBandwidth;
- (int)cellularBars;
- (id)cellularCellType;
- (unsigned char)cellularDualSimStatus;
- (bool)cellularKnownGood;
- (int)cellularLQM;
- (int)cellularMCC;
- (int)cellularMNC;
- (unsigned int)cellularMode;
- (int)cellularOutrankPrimaryReason;
- (unsigned long long)cellularOutrankReasonFlags;
- (bool)cellularOutranksWiFi;
- (int)cellularPID;
- (unsigned char)cellularRadioTechnology;
- (int)cellularSecondaryMcc;
- (int)cellularSecondaryMnc;
- (int)cellularTAC;
- (int)cellularUARFCN;
- (id)description;
- (id)interfaceQueueStats;
- (void)setCellularBand:(unsigned char)arg1;
- (void)setCellularBandInfo:(int)arg1;
- (void)setCellularBandwidth:(int)arg1;
- (void)setCellularBars:(int)arg1;
- (void)setCellularCellType:(id)arg1;
- (void)setCellularDualSimStatus:(unsigned char)arg1;
- (void)setCellularKnownGood:(bool)arg1;
- (void)setCellularLQM:(int)arg1;
- (void)setCellularMCC:(int)arg1;
- (void)setCellularMNC:(int)arg1;
- (void)setCellularMode:(unsigned int)arg1;
- (void)setCellularOutrankPrimaryReason:(int)arg1;
- (void)setCellularOutrankReasonFlags:(unsigned long long)arg1;
- (void)setCellularOutranksWiFi:(bool)arg1;
- (void)setCellularPID:(int)arg1;
- (void)setCellularRadioTechnology:(unsigned char)arg1;
- (void)setCellularSecondaryMcc:(int)arg1;
- (void)setCellularSecondaryMnc:(int)arg1;
- (void)setCellularTAC:(int)arg1;
- (void)setCellularUARFCN:(int)arg1;
- (void)setInterfaceQueueStats:(id)arg1;
- (void)setWifiKnownGood:(bool)arg1;
- (void)setWifiLQM:(int)arg1;
- (void)setWifiRSSI:(int)arg1;
- (void)setWifiRadioTechnology:(unsigned char)arg1;
- (bool)wifiKnownGood;
- (int)wifiLQM;
- (int)wifiRSSI;
- (unsigned char)wifiRadioTechnology;

@end