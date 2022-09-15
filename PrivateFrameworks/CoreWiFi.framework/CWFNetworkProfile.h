/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

@interface CWFNetworkProfile : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding, WFNetworkListRecord> {
    NSString * _cachedIdentifier;
    NSString * _cachedNetworkName;
    NSMutableDictionary * _internal;
    bool  _useCachedIdentifier;
    bool  _useCachedNetworkName;
}

@property (nonatomic, copy) NSSet *BSSList;
@property (nonatomic, copy) NSDictionary *EAPProfile;
@property (nonatomic, copy) NSArray *NAIRealmNameList;
@property (nonatomic, copy) NSDictionary *OSSpecificAttributes;
@property (nonatomic, copy) NSData *SSID;
@property (nonatomic, readonly, copy) NSArray *TLSTrustedServerNames;
@property (nonatomic) long long WAPISubtype;
@property (nonatomic) long long WEPSubtype;
@property (nonatomic, readonly, copy) NSArray *acceptedEAPTypes;
@property (nonatomic) long long addReason;
@property (nonatomic, copy) NSDate *addedAt;
@property (getter=isAutoJoinDisabled, nonatomic) bool autoJoinDisabled;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, readonly) bool bypassCaptive;
@property (nonatomic, retain) NSString *cachedIdentifier;
@property (nonatomic, retain) NSString *cachedNetworkName;
@property (nonatomic, copy) NSDictionary *captiveProfile;
@property (nonatomic, copy) NSString *carplayUUID;
@property (nonatomic, copy) NSArray *cellularNetworkInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, copy) NSString *displayedOperatorName;
@property (nonatomic, copy) NSString *domainName;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long hiddenState;
@property (nonatomic, readonly, copy) NSArray *innerAcceptedEAPTypes;
@property (nonatomic, retain) NSMutableDictionary *internal;
@property (nonatomic, readonly) bool isAmbiguousNetworkName;
@property (nonatomic, readonly) bool isAppBased;
@property (nonatomic, readonly) bool isCaptive;
@property (nonatomic, readonly) bool isCaptiveStateDetermined;
@property (nonatomic, readonly) bool isCarPlay;
@property (nonatomic, readonly) bool isEAP;
@property (nonatomic, readonly) bool isOWE;
@property (nonatomic, readonly) bool isOpen;
@property (nonatomic, readonly) bool isPSK;
@property (nonatomic, readonly) bool isPasspoint;
@property (nonatomic, readonly) bool isPasswordSharingSupported;
@property (nonatomic, readonly) bool isProfileBased;
@property (nonatomic, readonly) bool isTLSCertificateRequired;
@property (nonatomic, readonly) bool isWAPI;
@property (nonatomic, readonly) bool isWEP;
@property (nonatomic, readonly) bool isWPA;
@property (nonatomic, readonly) bool isWPA2;
@property (nonatomic, readonly) bool isWPA3;
@property (nonatomic, copy) NSDate *lastDiscoveredAt;
@property (nonatomic, readonly, copy) NSDate *lastJoinedAt;
@property (nonatomic, copy) NSDate *lastJoinedBySystemAt;
@property (nonatomic, copy) NSDate *lastJoinedByUserAt;
@property (nonatomic) long long lowDataMode;
@property (nonatomic) long long movingAttribute;
@property (nonatomic) long long nearbyShareableStatus;
@property (nonatomic, copy) NSString *networkGroupID;
@property (nonatomic) unsigned long long networkGroupPriority;
@property (nonatomic, readonly, copy) NSString *networkName;
@property (getter=isPasswordSharingDisabled, nonatomic) bool passwordSharingDisabled;
@property (nonatomic, copy) NSString *payloadUUID;
@property (getter=isPersonalHotspot, nonatomic) bool personalHotspot;
@property (nonatomic, copy) NSString *privacyProxyBlockedReason;
@property (getter=isPrivacyProxyEnabled, nonatomic) bool privacyProxyEnabled;
@property (nonatomic, readonly, copy) NSSet *properties;
@property (nonatomic) long long publicAttribute;
@property (nonatomic, copy) NSArray *roamingConsortiumList;
@property (getter=isServiceProviderRoamingEnabled, nonatomic) bool serviceProviderRoamingEnabled;
@property (getter=isSessionBased, nonatomic) bool sessionBased;
@property (nonatomic, readonly) unsigned long long strongestSupportedSecurityType;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long supportedSecurityTypes;
@property (getter=isSystemMode, nonatomic) bool systemMode;
@property (nonatomic) int transitionDisabledFlags;
@property (nonatomic, copy) NSDate *updatedAt;
@property (nonatomic) bool useCachedIdentifier;
@property (nonatomic) bool useCachedNetworkName;
@property (nonatomic, copy) NSDictionary *userPreferredNetworkNames;
@property (nonatomic, copy) NSDictionary *userPreferredPasspointDomains;
@property (nonatomic, readonly) bool wasCaptive;
@property (nonatomic, readonly) unsigned long long weakestSupportedSecurityType;

// Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)BSSList;
- (id)EAPProfile;
- (id)JSONCompatibleKeyValueMap;
- (id)NAIRealmNameList;
- (id)OSSpecificAttributes;
- (id)SSID;
- (id)TLSTrustedServerNames;
- (long long)WAPISubtype;
- (long long)WEPSubtype;
- (id)__coreWiFiSpecificProperties;
- (id)__defaultProperties;
- (id)__descriptionForCaptiveFlags;
- (id)__descriptionForHiddenState;
- (id)__descriptionForLowDataMode;
- (id)__descriptionForMovingAttribute;
- (id)__descriptionForNearbyShareableStatus;
- (id)__descriptionForPublicAttribute;
- (id)__filteredNetworkProfileWithProperties:(id)arg1 includeRequiredProperties:(bool)arg2;
- (id)__keyForProperty:(long long)arg1;
- (long long)__propertyForKey:(id)arg1;
- (id)__requiredProperties;
- (id)acceptedEAPTypes;
- (long long)addReason;
- (id)addedAt;
- (id)bundleID;
- (bool)bypassCaptive;
- (id)cachedIdentifier;
- (id)cachedNetworkName;
- (id)captiveProfile;
- (id)carplayUUID;
- (id)cellularNetworkInfo;
- (long long)compareSupportedSecurityTypes:(id)arg1;
- (long long)compareUserPriority:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coreWiFiSpecificAttributes;
- (id)description;
- (id)displayedOperatorName;
- (id)domainName;
- (unsigned long long)effectiveSupportedSecurityTypes;
- (void)encodeWithCoder:(id)arg1;
- (id)externalForm;
- (id)filteredNetworkProfileWithProperties:(id)arg1;
- (unsigned long long)hash;
- (long long)hiddenState;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalForm:(id)arg1;
- (id)innerAcceptedEAPTypes;
- (id)internal;
- (bool)isAmbiguousNetworkName;
- (bool)isAppBased;
- (bool)isAutoJoinDisabled;
- (bool)isCaptive;
- (bool)isCaptiveStateDetermined;
- (bool)isCarPlay;
- (bool)isEAP;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNetworkProfile:(id)arg1;
- (bool)isOWE;
- (bool)isOpen;
- (bool)isPSK;
- (bool)isPasspoint;
- (bool)isPasswordSharingDisabled;
- (bool)isPasswordSharingSupported;
- (bool)isPersonalHotspot;
- (bool)isPrivacyProxyEnabled;
- (bool)isProfileBased;
- (bool)isServiceProviderRoamingEnabled;
- (bool)isSessionBased;
- (bool)isSystemMode;
- (bool)isTLSCertificateRequired;
- (bool)isWAPI;
- (bool)isWEP;
- (bool)isWPA;
- (bool)isWPA2;
- (bool)isWPA3;
- (id)lastDiscoveredAt;
- (id)lastJoinedAt;
- (id)lastJoinedBySystemAt;
- (id)lastJoinedByUserAt;
- (long long)lowDataMode;
- (long long)movingAttribute;
- (long long)nearbyShareableStatus;
- (id)networkGroupID;
- (unsigned long long)networkGroupPriority;
- (id)networkName;
- (id)payloadUUID;
- (id)privacyProxyBlockedReason;
- (id)properties;
- (long long)publicAttribute;
- (id)roamingConsortiumList;
- (void)setAddReason:(long long)arg1;
- (void)setAddedAt:(id)arg1;
- (void)setAutoJoinDisabled:(bool)arg1;
- (void)setBSSList:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setCachedIdentifier:(id)arg1;
- (void)setCachedNetworkName:(id)arg1;
- (void)setCaptiveProfile:(id)arg1;
- (void)setCarplayUUID:(id)arg1;
- (void)setCellularNetworkInfo:(id)arg1;
- (void)setCoreWiFiSpecificAttributes:(id)arg1;
- (void)setDisplayedOperatorName:(id)arg1;
- (void)setDomainName:(id)arg1;
- (void)setEAPProfile:(id)arg1;
- (void)setHiddenState:(long long)arg1;
- (void)setInternal:(id)arg1;
- (void)setLastDiscoveredAt:(id)arg1;
- (void)setLastJoinedBySystemAt:(id)arg1;
- (void)setLastJoinedByUserAt:(id)arg1;
- (void)setLowDataMode:(long long)arg1;
- (void)setMovingAttribute:(long long)arg1;
- (void)setNAIRealmNameList:(id)arg1;
- (void)setNearbyShareableStatus:(long long)arg1;
- (void)setNetworkGroupID:(id)arg1;
- (void)setNetworkGroupPriority:(unsigned long long)arg1;
- (void)setOSSpecificAttributes:(id)arg1;
- (void)setPasswordSharingDisabled:(bool)arg1;
- (void)setPayloadUUID:(id)arg1;
- (void)setPersonalHotspot:(bool)arg1;
- (void)setPrivacyProxyBlockedReason:(id)arg1;
- (void)setPrivacyProxyEnabled:(bool)arg1;
- (void)setPublicAttribute:(long long)arg1;
- (void)setRoamingConsortiumList:(id)arg1;
- (void)setSSID:(id)arg1;
- (void)setServiceProviderRoamingEnabled:(bool)arg1;
- (void)setSessionBased:(bool)arg1;
- (void)setSupportedSecurityTypes:(unsigned long long)arg1;
- (void)setSystemMode:(bool)arg1;
- (void)setTransitionDisabledFlags:(int)arg1;
- (void)setUpdatedAt:(id)arg1;
- (void)setUseCachedIdentifier:(bool)arg1;
- (void)setUseCachedNetworkName:(bool)arg1;
- (void)setUserPreferredNetworkNames:(id)arg1;
- (void)setUserPreferredPasspointDomains:(id)arg1;
- (void)setWAPISubtype:(long long)arg1;
- (void)setWEPSubtype:(long long)arg1;
- (unsigned long long)strongestSupportedSecurityType;
- (unsigned long long)supportedSecurityTypes;
- (int)transitionDisabledFlags;
- (id)updatedAt;
- (bool)useCachedIdentifier;
- (bool)useCachedNetworkName;
- (id)userPreferredNetworkNames;
- (id)userPreferredPasspointDomains;
- (bool)wasCaptive;
- (unsigned long long)weakestSupportedSecurityType;

// Image: /System/Library/PrivateFrameworks/NPTKit.framework/NPTKit

- (id)__descriptionForHiddenState;
- (id)__descriptionForLowDataMode;
- (id)dictionary;

// Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit

- (bool)canBeDisplayedAsCurrent;
- (id)hotspotBatteryLife;
- (id)hotspotCellularProtocol;
- (id)hotspotSignalStrength;
- (bool)iOSHotspot;
- (bool)isAdhoc;
- (bool)isEnterprise;
- (bool)isEquivalentRecord:(id)arg1;
- (bool)isInstantHotspot;
- (bool)isKnown;
- (bool)isPopular;
- (bool)isSecure;
- (bool)isUnconfiguredAccessory;
- (id)lastJoinedDate;
- (bool)prominentDisplay;
- (long long)rssi;
- (float)scaledRSSI;
- (unsigned long long)signalBars;
- (id)ssid;
- (id)subtitle;
- (id)title;
- (unsigned long long)uniqueIdentifier;
- (bool)wifiModeConfigurable;

@end