/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapServiceTraits : PBCodable <NSCopying> {
    GEOAddStopRouteInfo * _addStopRouteInfo;
    NSString * _analyticsAppIdentifier;
    bool  _appDarkMode;
    NSString * _appIdentifier;
    NSString * _appMajorVersion;
    NSString * _appMinorVersion;
    bool  _autocompleteOriginationEditingServerWaypoints;
    GEOLatLng * _autocompleteOriginationPreviousLatlng;
    int  _autocompleteOriginationType;
    bool  _autocompleteRequestSupportsSectionHeader;
    GEOAutomobileOptions * _automobileOptions;
    unsigned int  _auxiliaryTierNumResults;
    int  _carHeadunitConnectionType;
    int  _carHeadunitInteractionModel;
    NSString * _carHeadunitManufacturer;
    NSString * _carHeadunitModel;
    double  _carHeadunitPixelHeight;
    double  _carHeadunitPixelWidth;
    NSString * _currentLocaleCurrencySymbol;
    GEOCyclingOptions * _cyclingOptions;
    int  _deviceBatteryState;
    bool  _deviceDarkMode;
    NSMutableArray * _deviceDisplayLanguages;
    bool  _deviceInVehicle;
    int  _deviceInterfaceOrientation;
    NSString * _deviceKeyboardLocale;
    GEOLocation * _deviceLocation;
    NSString * _deviceSpokenLocale;
    NSString * _displayRegion;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _engineTypes;
    NSMutableArray * _evChargingPorts;
    struct { 
        unsigned int has_sessionId : 1; 
        unsigned int has_carHeadunitPixelHeight : 1; 
        unsigned int has_carHeadunitPixelWidth : 1; 
        unsigned int has_isTourist : 1; 
        unsigned int has_mapZoomLevel : 1; 
        unsigned int has_sessionRelativeTimestamp : 1; 
        unsigned int has_autocompleteOriginationType : 1; 
        unsigned int has_auxiliaryTierNumResults : 1; 
        unsigned int has_carHeadunitConnectionType : 1; 
        unsigned int has_carHeadunitInteractionModel : 1; 
        unsigned int has_deviceBatteryState : 1; 
        unsigned int has_deviceInterfaceOrientation : 1; 
        unsigned int has_httpRequestPriority : 1; 
        unsigned int has_mode : 1; 
        unsigned int has_navigationTransportType : 1; 
        unsigned int has_photoAlbumCount : 1; 
        unsigned int has_photosCount : 1; 
        unsigned int has_placeSummaryRevision : 1; 
        unsigned int has_ratingsCount : 1; 
        unsigned int has_relatedPlaceItemCount : 1; 
        unsigned int has_requestPurpose : 1; 
        unsigned int has_reviewUserPhotosCount : 1; 
        unsigned int has_routeStopCount : 1; 
        unsigned int has_searchRequestType : 1; 
        unsigned int has_searchOriginationType : 1; 
        unsigned int has_sequenceNumber : 1; 
        unsigned int has_source : 1; 
        unsigned int has_timeSinceMapEnteredForeground : 1; 
        unsigned int has_timeSinceMapViewportChanged : 1; 
        unsigned int has_appDarkMode : 1; 
        unsigned int has_autocompleteOriginationEditingServerWaypoints : 1; 
        unsigned int has_autocompleteRequestSupportsSectionHeader : 1; 
        unsigned int has_deviceDarkMode : 1; 
        unsigned int has_deviceInVehicle : 1; 
        unsigned int has_isAPICall : 1; 
        unsigned int has_isRefund : 1; 
        unsigned int has_isSettlement : 1; 
        unsigned int has_isWidgetRequest : 1; 
        unsigned int has_navigating : 1; 
        unsigned int has_searchOriginationEditingServerWaypoints : 1; 
        unsigned int has_supportAutocompleteGuideResults : 1; 
        unsigned int has_supportAutocompletePublisherResults : 1; 
        unsigned int has_supportAutocompleteRapAffordance : 1; 
        unsigned int has_supportChildItems : 1; 
        unsigned int has_supportClientRankingCompositeFeatures : 1; 
        unsigned int has_supportClientRankingFeatureMetadata : 1; 
        unsigned int has_supportDirectionIntentAutocomplete : 1; 
        unsigned int has_supportDirectionIntentSearch : 1; 
        unsigned int has_supportDymSuggestion : 1; 
        unsigned int has_supportStructuredRapAffordance : 1; 
        unsigned int has_supportUnresolvedDirectionIntent : 1; 
        unsigned int has_supportsBrandFallback : 1; 
        unsigned int has_useBackgroundUrl : 1; 
        unsigned int has_wantsBrandIcon : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_engineTypes : 1; 
        unsigned int read_knownClientResolvedTypes : 1; 
        unsigned int read_knownRefinementTypes : 1; 
        unsigned int read_supportedAutocompleteListTypes : 1; 
        unsigned int read_supportedAutocompleteResultCellTypes : 1; 
        unsigned int read_supportedChildActions : 1; 
        unsigned int read_supportedPlaceSummaryFormatTypes : 1; 
        unsigned int read_supportedSearchTierTypes : 1; 
        unsigned int read_transportTypes : 1; 
        unsigned int read_addStopRouteInfo : 1; 
        unsigned int read_analyticsAppIdentifier : 1; 
        unsigned int read_appIdentifier : 1; 
        unsigned int read_appMajorVersion : 1; 
        unsigned int read_appMinorVersion : 1; 
        unsigned int read_autocompleteOriginationPreviousLatlng : 1; 
        unsigned int read_automobileOptions : 1; 
        unsigned int read_carHeadunitManufacturer : 1; 
        unsigned int read_carHeadunitModel : 1; 
        unsigned int read_currentLocaleCurrencySymbol : 1; 
        unsigned int read_cyclingOptions : 1; 
        unsigned int read_deviceLocation : 1; 
        unsigned int read_deviceDisplayLanguages : 1; 
        unsigned int read_deviceKeyboardLocale : 1; 
        unsigned int read_deviceSpokenLocale : 1; 
        unsigned int read_displayRegion : 1; 
        unsigned int read_evChargingPorts : 1; 
        unsigned int read_historicalLocations : 1; 
        unsigned int read_mapRegion : 1; 
        unsigned int read_photoSizes : 1; 
        unsigned int read_previousSearchViewport : 1; 
        unsigned int read_privacyMetadata : 1; 
        unsigned int read_providerID : 1; 
        unsigned int read_resultRefinementQuery : 1; 
        unsigned int read_reviewUserPhotoSizes : 1; 
        unsigned int read_searchOriginationPreviousLatlng : 1; 
        unsigned int read_transitOptions : 1; 
        unsigned int read_transitScheduleFilter : 1; 
        unsigned int read_transitTripStopTimeFilter : 1; 
        unsigned int read_venueIdentifier : 1; 
        unsigned int read_walkingOptions : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _historicalLocations;
    unsigned int  _httpRequestPriority;
    bool  _isAPICall;
    bool  _isRefund;
    bool  _isSettlement;
    double  _isTourist;
    bool  _isWidgetRequest;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _knownClientResolvedTypes;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _knownRefinementTypes;
    GEOMapRegion * _mapRegion;
    double  _mapZoomLevel;
    int  _mode;
    bool  _navigating;
    int  _navigationTransportType;
    unsigned int  _photoAlbumCount;
    NSMutableArray * _photoSizes;
    unsigned int  _photosCount;
    unsigned int  _placeSummaryRevision;
    GEOPDViewportInfo * _previousSearchViewport;
    GEOPrivacyMetadata * _privacyMetadata;
    NSString * _providerID;
    unsigned int  _ratingsCount;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _relatedPlaceItemCount;
    int  _requestPurpose;
    GEOPDResultRefinementQuery * _resultRefinementQuery;
    NSMutableArray * _reviewUserPhotoSizes;
    unsigned int  _reviewUserPhotosCount;
    unsigned int  _routeStopCount;
    bool  _searchOriginationEditingServerWaypoints;
    GEOLatLng * _searchOriginationPreviousLatlng;
    int  _searchOriginationType;
    int  _searchRequestType;
    unsigned int  _sequenceNumber;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionId;
    double  _sessionRelativeTimestamp;
    int  _source;
    bool  _supportAutocompleteGuideResults;
    bool  _supportAutocompletePublisherResults;
    bool  _supportAutocompleteRapAffordance;
    bool  _supportChildItems;
    bool  _supportClientRankingCompositeFeatures;
    bool  _supportClientRankingFeatureMetadata;
    bool  _supportDirectionIntentAutocomplete;
    bool  _supportDirectionIntentSearch;
    bool  _supportDymSuggestion;
    bool  _supportStructuredRapAffordance;
    bool  _supportUnresolvedDirectionIntent;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedAutocompleteListTypes;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedAutocompleteResultCellTypes;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedChildActions;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedPlaceSummaryFormatTypes;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedSearchTierTypes;
    bool  _supportsBrandFallback;
    unsigned int  _timeSinceMapEnteredForeground;
    unsigned int  _timeSinceMapViewportChanged;
    GEOTransitOptions * _transitOptions;
    GEOTraitsTransitScheduleFilter * _transitScheduleFilter;
    GEOTraitsTransitScheduleFilter * _transitTripStopTimeFilter;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _transportTypes;
    PBUnknownFields * _unknownFields;
    bool  _useBackgroundUrl;
    GEOPDVenueIdentifier * _venueIdentifier;
    GEOWalkingOptions * _walkingOptions;
    bool  _wantsBrandIcon;
}

@property (nonatomic, retain) GEOAddStopRouteInfo *addStopRouteInfo;
@property (nonatomic, retain) NSString *analyticsAppIdentifier;
@property (nonatomic) bool appDarkMode;
@property (nonatomic, retain) NSString *appIdentifier;
@property (nonatomic, retain) NSString *appMajorVersion;
@property (nonatomic, retain) NSString *appMinorVersion;
@property (nonatomic) bool autocompleteOriginationEditingServerWaypoints;
@property (nonatomic, retain) GEOLatLng *autocompleteOriginationPreviousLatlng;
@property (nonatomic) int autocompleteOriginationType;
@property (nonatomic) bool autocompleteRequestSupportsSectionHeader;
@property (nonatomic, retain) GEOAutomobileOptions *automobileOptions;
@property (nonatomic) unsigned int auxiliaryTierNumResults;
@property (nonatomic) int carHeadunitConnectionType;
@property (nonatomic) int carHeadunitInteractionModel;
@property (nonatomic, retain) NSString *carHeadunitManufacturer;
@property (nonatomic, retain) NSString *carHeadunitModel;
@property (nonatomic) double carHeadunitPixelHeight;
@property (nonatomic) double carHeadunitPixelWidth;
@property (nonatomic, retain) NSString *currentLocaleCurrencySymbol;
@property (nonatomic, retain) GEOCyclingOptions *cyclingOptions;
@property (nonatomic) int deviceBatteryState;
@property (nonatomic) bool deviceDarkMode;
@property (nonatomic, retain) NSMutableArray *deviceDisplayLanguages;
@property (nonatomic) bool deviceInVehicle;
@property (nonatomic) int deviceInterfaceOrientation;
@property (nonatomic, retain) NSString *deviceKeyboardLocale;
@property (nonatomic, retain) GEOLocation *deviceLocation;
@property (nonatomic, retain) NSString *deviceSpokenLocale;
@property (nonatomic, retain) NSString *displayRegion;
@property (nonatomic, readonly) int*engineTypes;
@property (nonatomic, readonly) unsigned long long engineTypesCount;
@property (nonatomic, retain) NSMutableArray *evChargingPorts;
@property (nonatomic, readonly) bool hasAddStopRouteInfo;
@property (nonatomic, readonly) bool hasAnalyticsAppIdentifier;
@property (nonatomic) bool hasAppDarkMode;
@property (nonatomic, readonly) bool hasAppIdentifier;
@property (nonatomic, readonly) bool hasAppMajorVersion;
@property (nonatomic, readonly) bool hasAppMinorVersion;
@property (nonatomic) bool hasAutocompleteOriginationEditingServerWaypoints;
@property (nonatomic, readonly) bool hasAutocompleteOriginationPreviousLatlng;
@property (nonatomic) bool hasAutocompleteOriginationType;
@property (nonatomic) bool hasAutocompleteRequestSupportsSectionHeader;
@property (nonatomic, readonly) bool hasAutomobileOptions;
@property (nonatomic) bool hasAuxiliaryTierNumResults;
@property (nonatomic) bool hasCarHeadunitConnectionType;
@property (nonatomic) bool hasCarHeadunitInteractionModel;
@property (nonatomic, readonly) bool hasCarHeadunitManufacturer;
@property (nonatomic, readonly) bool hasCarHeadunitModel;
@property (nonatomic) bool hasCarHeadunitPixelHeight;
@property (nonatomic) bool hasCarHeadunitPixelWidth;
@property (nonatomic, readonly) bool hasCurrentLocaleCurrencySymbol;
@property (nonatomic, readonly) bool hasCyclingOptions;
@property (nonatomic) bool hasDeviceBatteryState;
@property (nonatomic) bool hasDeviceDarkMode;
@property (nonatomic) bool hasDeviceInVehicle;
@property (nonatomic) bool hasDeviceInterfaceOrientation;
@property (nonatomic, readonly) bool hasDeviceKeyboardLocale;
@property (nonatomic, readonly) bool hasDeviceLocation;
@property (nonatomic, readonly) bool hasDeviceSpokenLocale;
@property (nonatomic, readonly) bool hasDisplayRegion;
@property (nonatomic) bool hasHttpRequestPriority;
@property (nonatomic) bool hasIsAPICall;
@property (nonatomic) bool hasIsRefund;
@property (nonatomic) bool hasIsSettlement;
@property (nonatomic) bool hasIsTourist;
@property (nonatomic) bool hasIsWidgetRequest;
@property (nonatomic, readonly) bool hasMapRegion;
@property (nonatomic) bool hasMapZoomLevel;
@property (nonatomic) bool hasMode;
@property (nonatomic) bool hasNavigating;
@property (nonatomic) bool hasNavigationTransportType;
@property (nonatomic) bool hasPhotoAlbumCount;
@property (nonatomic) bool hasPhotosCount;
@property (nonatomic) bool hasPlaceSummaryRevision;
@property (nonatomic, readonly) bool hasPreviousSearchViewport;
@property (nonatomic, readonly) bool hasPrivacyMetadata;
@property (nonatomic, readonly) bool hasProviderID;
@property (nonatomic) bool hasRatingsCount;
@property (nonatomic) bool hasRelatedPlaceItemCount;
@property (nonatomic) bool hasRequestPurpose;
@property (nonatomic, readonly) bool hasResultRefinementQuery;
@property (nonatomic) bool hasReviewUserPhotosCount;
@property (nonatomic) bool hasRouteStopCount;
@property (nonatomic) bool hasSearchOriginationEditingServerWaypoints;
@property (nonatomic, readonly) bool hasSearchOriginationPreviousLatlng;
@property (nonatomic) bool hasSearchOriginationType;
@property (nonatomic) bool hasSearchRequestType;
@property (nonatomic) bool hasSequenceNumber;
@property (nonatomic) bool hasSessionId;
@property (nonatomic) bool hasSessionRelativeTimestamp;
@property (nonatomic) bool hasSource;
@property (nonatomic) bool hasSupportAutocompleteGuideResults;
@property (nonatomic) bool hasSupportAutocompletePublisherResults;
@property (nonatomic) bool hasSupportAutocompleteRapAffordance;
@property (nonatomic) bool hasSupportChildItems;
@property (nonatomic) bool hasSupportClientRankingCompositeFeatures;
@property (nonatomic) bool hasSupportClientRankingFeatureMetadata;
@property (nonatomic) bool hasSupportDirectionIntentAutocomplete;
@property (nonatomic) bool hasSupportDirectionIntentSearch;
@property (nonatomic) bool hasSupportDymSuggestion;
@property (nonatomic) bool hasSupportStructuredRapAffordance;
@property (nonatomic) bool hasSupportUnresolvedDirectionIntent;
@property (nonatomic) bool hasSupportsBrandFallback;
@property (nonatomic) bool hasTimeSinceMapEnteredForeground;
@property (nonatomic) bool hasTimeSinceMapViewportChanged;
@property (nonatomic, readonly) bool hasTransitOptions;
@property (nonatomic, readonly) bool hasTransitScheduleFilter;
@property (nonatomic, readonly) bool hasTransitTripStopTimeFilter;
@property (nonatomic) bool hasUseBackgroundUrl;
@property (nonatomic, readonly) bool hasVenueIdentifier;
@property (nonatomic, readonly) bool hasWalkingOptions;
@property (nonatomic) bool hasWantsBrandIcon;
@property (nonatomic, retain) NSMutableArray *historicalLocations;
@property (nonatomic) unsigned int httpRequestPriority;
@property (nonatomic) bool isAPICall;
@property (nonatomic) bool isRefund;
@property (nonatomic) bool isSettlement;
@property (nonatomic) double isTourist;
@property (nonatomic) bool isWidgetRequest;
@property (nonatomic, readonly) int*knownClientResolvedTypes;
@property (nonatomic, readonly) unsigned long long knownClientResolvedTypesCount;
@property (nonatomic, readonly) int*knownRefinementTypes;
@property (nonatomic, readonly) unsigned long long knownRefinementTypesCount;
@property (nonatomic, retain) GEOMapRegion *mapRegion;
@property (nonatomic) double mapZoomLevel;
@property (nonatomic) int mode;
@property (nonatomic) bool navigating;
@property (nonatomic) int navigationTransportType;
@property (nonatomic) unsigned int photoAlbumCount;
@property (nonatomic, retain) NSMutableArray *photoSizes;
@property (nonatomic) unsigned int photosCount;
@property (nonatomic) unsigned int placeSummaryRevision;
@property (nonatomic, retain) GEOPDViewportInfo *previousSearchViewport;
@property (nonatomic, retain) GEOPrivacyMetadata *privacyMetadata;
@property (nonatomic, retain) NSString *providerID;
@property (nonatomic) unsigned int ratingsCount;
@property (nonatomic) unsigned int relatedPlaceItemCount;
@property (nonatomic) int requestPurpose;
@property (nonatomic, retain) GEOPDResultRefinementQuery *resultRefinementQuery;
@property (nonatomic, retain) NSMutableArray *reviewUserPhotoSizes;
@property (nonatomic) unsigned int reviewUserPhotosCount;
@property (nonatomic) unsigned int routeStopCount;
@property (nonatomic) bool searchOriginationEditingServerWaypoints;
@property (nonatomic, retain) GEOLatLng *searchOriginationPreviousLatlng;
@property (nonatomic) int searchOriginationType;
@property (nonatomic) int searchRequestType;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionId;
@property (nonatomic) double sessionRelativeTimestamp;
@property (nonatomic) int source;
@property (nonatomic) bool supportAutocompleteGuideResults;
@property (nonatomic) bool supportAutocompletePublisherResults;
@property (nonatomic) bool supportAutocompleteRapAffordance;
@property (nonatomic) bool supportChildItems;
@property (nonatomic) bool supportClientRankingCompositeFeatures;
@property (nonatomic) bool supportClientRankingFeatureMetadata;
@property (nonatomic) bool supportDirectionIntentAutocomplete;
@property (nonatomic) bool supportDirectionIntentSearch;
@property (nonatomic) bool supportDymSuggestion;
@property (nonatomic) bool supportStructuredRapAffordance;
@property (nonatomic) bool supportUnresolvedDirectionIntent;
@property (nonatomic, readonly) int*supportedAutocompleteListTypes;
@property (nonatomic, readonly) unsigned long long supportedAutocompleteListTypesCount;
@property (nonatomic, readonly) int*supportedAutocompleteResultCellTypes;
@property (nonatomic, readonly) unsigned long long supportedAutocompleteResultCellTypesCount;
@property (nonatomic, readonly) int*supportedChildActions;
@property (nonatomic, readonly) unsigned long long supportedChildActionsCount;
@property (nonatomic, readonly) int*supportedPlaceSummaryFormatTypes;
@property (nonatomic, readonly) unsigned long long supportedPlaceSummaryFormatTypesCount;
@property (nonatomic, readonly) int*supportedSearchTierTypes;
@property (nonatomic, readonly) unsigned long long supportedSearchTierTypesCount;
@property (nonatomic) bool supportsBrandFallback;
@property (nonatomic) unsigned int timeSinceMapEnteredForeground;
@property (nonatomic) unsigned int timeSinceMapViewportChanged;
@property (nonatomic, retain) GEOTransitOptions *transitOptions;
@property (nonatomic, retain) GEOTraitsTransitScheduleFilter *transitScheduleFilter;
@property (nonatomic, retain) GEOTraitsTransitScheduleFilter *transitTripStopTimeFilter;
@property (nonatomic, readonly) int*transportTypes;
@property (nonatomic, readonly) unsigned long long transportTypesCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) bool useBackgroundUrl;
@property (nonatomic, retain) GEOPDVenueIdentifier *venueIdentifier;
@property (nonatomic, retain) GEOWalkingOptions *walkingOptions;
@property (nonatomic) bool wantsBrandIcon;

+ (Class)deviceDisplayLanguageType;
+ (Class)evChargingPortType;
+ (Class)historicalLocationsType;
+ (bool)isValid:(id)arg1;
+ (Class)photoSizesType;
+ (Class)reviewUserPhotoSizesType;

- (void).cxx_destruct;
- (int)StringAsAutocompleteOriginationType:(id)arg1;
- (int)StringAsCarHeadunitConnectionType:(id)arg1;
- (int)StringAsCarHeadunitInteractionModel:(id)arg1;
- (int)StringAsDeviceBatteryState:(id)arg1;
- (int)StringAsDeviceInterfaceOrientation:(id)arg1;
- (int)StringAsEngineTypes:(id)arg1;
- (int)StringAsKnownClientResolvedTypes:(id)arg1;
- (int)StringAsKnownRefinementTypes:(id)arg1;
- (int)StringAsMode:(id)arg1;
- (int)StringAsNavigationTransportType:(id)arg1;
- (int)StringAsRequestPurpose:(id)arg1;
- (int)StringAsSearchOriginationType:(id)arg1;
- (int)StringAsSearchRequestType:(id)arg1;
- (int)StringAsSource:(id)arg1;
- (int)StringAsSupportedAutocompleteListTypes:(id)arg1;
- (int)StringAsSupportedAutocompleteResultCellTypes:(id)arg1;
- (int)StringAsSupportedChildActions:(id)arg1;
- (int)StringAsSupportedPlaceSummaryFormatTypes:(id)arg1;
- (int)StringAsSupportedSearchTierTypes:(id)arg1;
- (int)StringAsTransportTypes:(id)arg1;
- (void)_internal_incrementSessionCounters;
- (void)addDeviceDisplayLanguage:(id)arg1;
- (void)addEngineType:(int)arg1;
- (void)addEvChargingPort:(id)arg1;
- (void)addHistoricalLocations:(id)arg1;
- (void)addKnownClientResolvedType:(int)arg1;
- (void)addKnownRefinementType:(int)arg1;
- (void)addPhotoSizes:(id)arg1;
- (void)addReviewUserPhotoSizes:(id)arg1;
- (id)addStopRouteInfo;
- (void)addSupportedAutocompleteListType:(int)arg1;
- (void)addSupportedAutocompleteResultCellType:(int)arg1;
- (void)addSupportedChildAction:(int)arg1;
- (void)addSupportedPlaceSummaryFormatType:(int)arg1;
- (void)addSupportedSearchTierType:(int)arg1;
- (void)addTransportType:(int)arg1;
- (id)analyticsAppIdentifier;
- (bool)appDarkMode;
- (id)appIdentifier;
- (id)appMajorVersion;
- (id)appMinorVersion;
- (bool)autocompleteOriginationEditingServerWaypoints;
- (id)autocompleteOriginationPreviousLatlng;
- (int)autocompleteOriginationType;
- (id)autocompleteOriginationTypeAsString:(int)arg1;
- (bool)autocompleteRequestSupportsSectionHeader;
- (id)automobileOptions;
- (unsigned int)auxiliaryTierNumResults;
- (int)carHeadunitConnectionType;
- (id)carHeadunitConnectionTypeAsString:(int)arg1;
- (int)carHeadunitInteractionModel;
- (id)carHeadunitInteractionModelAsString:(int)arg1;
- (id)carHeadunitManufacturer;
- (id)carHeadunitModel;
- (double)carHeadunitPixelHeight;
- (double)carHeadunitPixelWidth;
- (void)clearDeviceDisplayLanguages;
- (void)clearEngineTypes;
- (void)clearEvChargingPorts;
- (void)clearHistoricalLocations;
- (void)clearKnownClientResolvedTypes;
- (void)clearKnownRefinementTypes;
- (void)clearLocations;
- (void)clearPhotoSizes;
- (void)clearReviewUserPhotoSizes;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearSessionId;
- (void)clearSupportedAutocompleteListTypes;
- (void)clearSupportedAutocompleteResultCellTypes;
- (void)clearSupportedChildActions;
- (void)clearSupportedPlaceSummaryFormatTypes;
- (void)clearSupportedSearchTierTypes;
- (void)clearTransportTypes;
- (void)clearUnknownFields:(bool)arg1;
- (id)copyByIncrementingSessionCounters;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentLocaleCurrencySymbol;
- (id)cyclingOptions;
- (void)dealloc;
- (id)description;
- (int)deviceBatteryState;
- (id)deviceBatteryStateAsString:(int)arg1;
- (bool)deviceDarkMode;
- (id)deviceDisplayLanguageAtIndex:(unsigned long long)arg1;
- (id)deviceDisplayLanguages;
- (unsigned long long)deviceDisplayLanguagesCount;
- (bool)deviceInVehicle;
- (int)deviceInterfaceOrientation;
- (id)deviceInterfaceOrientationAsString:(int)arg1;
- (id)deviceKeyboardLocale;
- (id)deviceLocation;
- (id)deviceSpokenLocale;
- (id)dictionaryRepresentation;
- (id)displayRegion;
- (int)engineTypeAtIndex:(unsigned long long)arg1;
- (int*)engineTypes;
- (id)engineTypesAsString:(int)arg1;
- (unsigned long long)engineTypesCount;
- (id)evChargingPortAtIndex:(unsigned long long)arg1;
- (id)evChargingPorts;
- (unsigned long long)evChargingPortsCount;
- (bool)hasAddStopRouteInfo;
- (bool)hasAnalyticsAppIdentifier;
- (bool)hasAppDarkMode;
- (bool)hasAppIdentifier;
- (bool)hasAppMajorVersion;
- (bool)hasAppMinorVersion;
- (bool)hasAutocompleteOriginationEditingServerWaypoints;
- (bool)hasAutocompleteOriginationPreviousLatlng;
- (bool)hasAutocompleteOriginationType;
- (bool)hasAutocompleteRequestSupportsSectionHeader;
- (bool)hasAutomobileOptions;
- (bool)hasAuxiliaryTierNumResults;
- (bool)hasCarHeadunitConnectionType;
- (bool)hasCarHeadunitInteractionModel;
- (bool)hasCarHeadunitManufacturer;
- (bool)hasCarHeadunitModel;
- (bool)hasCarHeadunitPixelHeight;
- (bool)hasCarHeadunitPixelWidth;
- (bool)hasCurrentLocaleCurrencySymbol;
- (bool)hasCyclingOptions;
- (bool)hasDeviceBatteryState;
- (bool)hasDeviceDarkMode;
- (bool)hasDeviceInVehicle;
- (bool)hasDeviceInterfaceOrientation;
- (bool)hasDeviceKeyboardLocale;
- (bool)hasDeviceLocation;
- (bool)hasDeviceSpokenLocale;
- (bool)hasDisplayRegion;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasHttpRequestPriority;
- (bool)hasIsAPICall;
- (bool)hasIsRefund;
- (bool)hasIsSettlement;
- (bool)hasIsTourist;
- (bool)hasIsWidgetRequest;
- (bool)hasMapRegion;
- (bool)hasMapZoomLevel;
- (bool)hasMode;
- (bool)hasNavigating;
- (bool)hasNavigationTransportType;
- (bool)hasPhotoAlbumCount;
- (bool)hasPhotosCount;
- (bool)hasPlaceSummaryRevision;
- (bool)hasPreviousSearchViewport;
- (bool)hasPrivacyMetadata;
- (bool)hasProviderID;
- (bool)hasRatingsCount;
- (bool)hasRelatedPlaceItemCount;
- (bool)hasRequestPurpose;
- (bool)hasResultRefinementQuery;
- (bool)hasReviewUserPhotosCount;
- (bool)hasRouteStopCount;
- (bool)hasSearchOriginationEditingServerWaypoints;
- (bool)hasSearchOriginationPreviousLatlng;
- (bool)hasSearchOriginationType;
- (bool)hasSearchRequestType;
- (bool)hasSequenceNumber;
- (bool)hasSessionId;
- (bool)hasSessionRelativeTimestamp;
- (bool)hasSource;
- (bool)hasSupportAutocompleteGuideResults;
- (bool)hasSupportAutocompletePublisherResults;
- (bool)hasSupportAutocompleteRapAffordance;
- (bool)hasSupportChildItems;
- (bool)hasSupportClientRankingCompositeFeatures;
- (bool)hasSupportClientRankingFeatureMetadata;
- (bool)hasSupportDirectionIntentAutocomplete;
- (bool)hasSupportDirectionIntentSearch;
- (bool)hasSupportDymSuggestion;
- (bool)hasSupportStructuredRapAffordance;
- (bool)hasSupportUnresolvedDirectionIntent;
- (bool)hasSupportsBrandFallback;
- (bool)hasTimeSinceMapEnteredForeground;
- (bool)hasTimeSinceMapViewportChanged;
- (bool)hasTransitOptions;
- (bool)hasTransitScheduleFilter;
- (bool)hasTransitTripStopTimeFilter;
- (bool)hasUseBackgroundUrl;
- (bool)hasVenueIdentifier;
- (bool)hasWalkingOptions;
- (bool)hasWantsBrandIcon;
- (unsigned long long)hash;
- (id)historicalLocations;
- (id)historicalLocationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)historicalLocationsCount;
- (unsigned int)httpRequestPriority;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isAPICall;
- (bool)isEqual:(id)arg1;
- (bool)isRefund;
- (bool)isSettlement;
- (double)isTourist;
- (bool)isWidgetRequest;
- (id)jsonRepresentation;
- (int)knownClientResolvedTypeAtIndex:(unsigned long long)arg1;
- (int*)knownClientResolvedTypes;
- (id)knownClientResolvedTypesAsString:(int)arg1;
- (unsigned long long)knownClientResolvedTypesCount;
- (int)knownRefinementTypeAtIndex:(unsigned long long)arg1;
- (int*)knownRefinementTypes;
- (id)knownRefinementTypesAsString:(int)arg1;
- (unsigned long long)knownRefinementTypesCount;
- (id)mapRegion;
- (double)mapZoomLevel;
- (void)mergeFrom:(id)arg1;
- (int)mode;
- (id)modeAsString:(int)arg1;
- (bool)navigating;
- (int)navigationTransportType;
- (id)navigationTransportTypeAsString:(int)arg1;
- (unsigned int)photoAlbumCount;
- (id)photoSizes;
- (id)photoSizesAtIndex:(unsigned long long)arg1;
- (unsigned long long)photoSizesCount;
- (unsigned int)photosCount;
- (unsigned int)placeSummaryRevision;
- (id)previousSearchViewport;
- (id)privacyMetadata;
- (id)providerID;
- (unsigned int)ratingsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)relatedPlaceItemCount;
- (int)requestPurpose;
- (id)requestPurposeAsString:(int)arg1;
- (id)resultRefinementQuery;
- (id)reviewUserPhotoSizes;
- (id)reviewUserPhotoSizesAtIndex:(unsigned long long)arg1;
- (unsigned long long)reviewUserPhotoSizesCount;
- (unsigned int)reviewUserPhotosCount;
- (unsigned int)routeStopCount;
- (bool)searchOriginationEditingServerWaypoints;
- (id)searchOriginationPreviousLatlng;
- (int)searchOriginationType;
- (id)searchOriginationTypeAsString:(int)arg1;
- (int)searchRequestType;
- (id)searchRequestTypeAsString:(int)arg1;
- (unsigned int)sequenceNumber;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionId;
- (double)sessionRelativeTimestamp;
- (void)setAddStopRouteInfo:(id)arg1;
- (void)setAnalyticsAppIdentifier:(id)arg1;
- (void)setAppDarkMode:(bool)arg1;
- (void)setAppIdentifier:(id)arg1;
- (void)setAppMajorVersion:(id)arg1;
- (void)setAppMinorVersion:(id)arg1;
- (void)setAutocompleteOriginationEditingServerWaypoints:(bool)arg1;
- (void)setAutocompleteOriginationPreviousLatlng:(id)arg1;
- (void)setAutocompleteOriginationType:(int)arg1;
- (void)setAutocompleteRequestSupportsSectionHeader:(bool)arg1;
- (void)setAutomobileOptions:(id)arg1;
- (void)setAuxiliaryTierNumResults:(unsigned int)arg1;
- (void)setCarHeadunitConnectionType:(int)arg1;
- (void)setCarHeadunitInteractionModel:(int)arg1;
- (void)setCarHeadunitManufacturer:(id)arg1;
- (void)setCarHeadunitModel:(id)arg1;
- (void)setCarHeadunitPixelHeight:(double)arg1;
- (void)setCarHeadunitPixelWidth:(double)arg1;
- (void)setCurrentLocaleCurrencySymbol:(id)arg1;
- (void)setCyclingOptions:(id)arg1;
- (void)setDeviceBatteryState:(int)arg1;
- (void)setDeviceDarkMode:(bool)arg1;
- (void)setDeviceDisplayLanguages:(id)arg1;
- (void)setDeviceInVehicle:(bool)arg1;
- (void)setDeviceInterfaceOrientation:(int)arg1;
- (void)setDeviceKeyboardLocale:(id)arg1;
- (void)setDeviceLocation:(id)arg1;
- (void)setDeviceSpokenLocale:(id)arg1;
- (void)setDisplayRegion:(id)arg1;
- (void)setEngineTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setEvChargingPorts:(id)arg1;
- (void)setHasAppDarkMode:(bool)arg1;
- (void)setHasAutocompleteOriginationEditingServerWaypoints:(bool)arg1;
- (void)setHasAutocompleteOriginationType:(bool)arg1;
- (void)setHasAutocompleteRequestSupportsSectionHeader:(bool)arg1;
- (void)setHasAuxiliaryTierNumResults:(bool)arg1;
- (void)setHasCarHeadunitConnectionType:(bool)arg1;
- (void)setHasCarHeadunitInteractionModel:(bool)arg1;
- (void)setHasCarHeadunitPixelHeight:(bool)arg1;
- (void)setHasCarHeadunitPixelWidth:(bool)arg1;
- (void)setHasDeviceBatteryState:(bool)arg1;
- (void)setHasDeviceDarkMode:(bool)arg1;
- (void)setHasDeviceInVehicle:(bool)arg1;
- (void)setHasDeviceInterfaceOrientation:(bool)arg1;
- (void)setHasHttpRequestPriority:(bool)arg1;
- (void)setHasIsAPICall:(bool)arg1;
- (void)setHasIsRefund:(bool)arg1;
- (void)setHasIsSettlement:(bool)arg1;
- (void)setHasIsTourist:(bool)arg1;
- (void)setHasIsWidgetRequest:(bool)arg1;
- (void)setHasMapZoomLevel:(bool)arg1;
- (void)setHasMode:(bool)arg1;
- (void)setHasNavigating:(bool)arg1;
- (void)setHasNavigationTransportType:(bool)arg1;
- (void)setHasPhotoAlbumCount:(bool)arg1;
- (void)setHasPhotosCount:(bool)arg1;
- (void)setHasPlaceSummaryRevision:(bool)arg1;
- (void)setHasRatingsCount:(bool)arg1;
- (void)setHasRelatedPlaceItemCount:(bool)arg1;
- (void)setHasRequestPurpose:(bool)arg1;
- (void)setHasReviewUserPhotosCount:(bool)arg1;
- (void)setHasRouteStopCount:(bool)arg1;
- (void)setHasSearchOriginationEditingServerWaypoints:(bool)arg1;
- (void)setHasSearchOriginationType:(bool)arg1;
- (void)setHasSearchRequestType:(bool)arg1;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setHasSessionId:(bool)arg1;
- (void)setHasSessionRelativeTimestamp:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setHasSupportAutocompleteGuideResults:(bool)arg1;
- (void)setHasSupportAutocompletePublisherResults:(bool)arg1;
- (void)setHasSupportAutocompleteRapAffordance:(bool)arg1;
- (void)setHasSupportChildItems:(bool)arg1;
- (void)setHasSupportClientRankingCompositeFeatures:(bool)arg1;
- (void)setHasSupportClientRankingFeatureMetadata:(bool)arg1;
- (void)setHasSupportDirectionIntentAutocomplete:(bool)arg1;
- (void)setHasSupportDirectionIntentSearch:(bool)arg1;
- (void)setHasSupportDymSuggestion:(bool)arg1;
- (void)setHasSupportStructuredRapAffordance:(bool)arg1;
- (void)setHasSupportUnresolvedDirectionIntent:(bool)arg1;
- (void)setHasSupportsBrandFallback:(bool)arg1;
- (void)setHasTimeSinceMapEnteredForeground:(bool)arg1;
- (void)setHasTimeSinceMapViewportChanged:(bool)arg1;
- (void)setHasUseBackgroundUrl:(bool)arg1;
- (void)setHasWantsBrandIcon:(bool)arg1;
- (void)setHistoricalLocations:(id)arg1;
- (void)setHttpRequestPriority:(unsigned int)arg1;
- (void)setIsAPICall:(bool)arg1;
- (void)setIsRefund:(bool)arg1;
- (void)setIsSettlement:(bool)arg1;
- (void)setIsTourist:(double)arg1;
- (void)setIsWidgetRequest:(bool)arg1;
- (void)setKnownClientResolvedTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setKnownRefinementTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setMapRegion:(id)arg1;
- (void)setMapZoomLevel:(double)arg1;
- (void)setMode:(int)arg1;
- (void)setNavigating:(bool)arg1;
- (void)setNavigationTransportType:(int)arg1;
- (void)setPhotoAlbumCount:(unsigned int)arg1;
- (void)setPhotoSizes:(id)arg1;
- (void)setPhotosCount:(unsigned int)arg1;
- (void)setPlaceSummaryRevision:(unsigned int)arg1;
- (void)setPreviousSearchViewport:(id)arg1;
- (void)setPrivacyMetadata:(id)arg1;
- (void)setProviderID:(id)arg1;
- (void)setRatingsCount:(unsigned int)arg1;
- (void)setRelatedPlaceItemCount:(unsigned int)arg1;
- (void)setRequestPurpose:(int)arg1;
- (void)setResultRefinementQuery:(id)arg1;
- (void)setReviewUserPhotoSizes:(id)arg1;
- (void)setReviewUserPhotosCount:(unsigned int)arg1;
- (void)setRouteStopCount:(unsigned int)arg1;
- (void)setSearchOriginationEditingServerWaypoints:(bool)arg1;
- (void)setSearchOriginationPreviousLatlng:(id)arg1;
- (void)setSearchOriginationType:(int)arg1;
- (void)setSearchRequestType:(int)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setSessionId:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSessionRelativeTimestamp:(double)arg1;
- (void)setSource:(int)arg1;
- (void)setSupportAutocompleteGuideResults:(bool)arg1;
- (void)setSupportAutocompletePublisherResults:(bool)arg1;
- (void)setSupportAutocompleteRapAffordance:(bool)arg1;
- (void)setSupportChildItems:(bool)arg1;
- (void)setSupportClientRankingCompositeFeatures:(bool)arg1;
- (void)setSupportClientRankingFeatureMetadata:(bool)arg1;
- (void)setSupportDirectionIntentAutocomplete:(bool)arg1;
- (void)setSupportDirectionIntentSearch:(bool)arg1;
- (void)setSupportDymSuggestion:(bool)arg1;
- (void)setSupportStructuredRapAffordance:(bool)arg1;
- (void)setSupportUnresolvedDirectionIntent:(bool)arg1;
- (void)setSupportedAutocompleteListTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSupportedAutocompleteResultCellTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSupportedChildActions:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSupportedPlaceSummaryFormatTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSupportedSearchTierTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSupportsBrandFallback:(bool)arg1;
- (void)setTimeSinceMapEnteredForeground:(unsigned int)arg1;
- (void)setTimeSinceMapViewportChanged:(unsigned int)arg1;
- (void)setTransitOptions:(id)arg1;
- (void)setTransitScheduleFilter:(id)arg1;
- (void)setTransitTripStopTimeFilter:(id)arg1;
- (void)setTransportTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setUseBackgroundUrl:(bool)arg1;
- (void)setVenueIdentifier:(id)arg1;
- (void)setWalkingOptions:(id)arg1;
- (void)setWantsBrandIcon:(bool)arg1;
- (int)source;
- (id)sourceAsString:(int)arg1;
- (bool)supportAutocompleteGuideResults;
- (bool)supportAutocompletePublisherResults;
- (bool)supportAutocompleteRapAffordance;
- (bool)supportChildItems;
- (bool)supportClientRankingCompositeFeatures;
- (bool)supportClientRankingFeatureMetadata;
- (bool)supportDirectionIntentAutocomplete;
- (bool)supportDirectionIntentSearch;
- (bool)supportDymSuggestion;
- (bool)supportStructuredRapAffordance;
- (bool)supportUnresolvedDirectionIntent;
- (int)supportedAutocompleteListTypeAtIndex:(unsigned long long)arg1;
- (int*)supportedAutocompleteListTypes;
- (id)supportedAutocompleteListTypesAsString:(int)arg1;
- (unsigned long long)supportedAutocompleteListTypesCount;
- (int)supportedAutocompleteResultCellTypeAtIndex:(unsigned long long)arg1;
- (int*)supportedAutocompleteResultCellTypes;
- (id)supportedAutocompleteResultCellTypesAsString:(int)arg1;
- (unsigned long long)supportedAutocompleteResultCellTypesCount;
- (int)supportedChildActionAtIndex:(unsigned long long)arg1;
- (int*)supportedChildActions;
- (id)supportedChildActionsAsString:(int)arg1;
- (unsigned long long)supportedChildActionsCount;
- (int)supportedPlaceSummaryFormatTypeAtIndex:(unsigned long long)arg1;
- (int*)supportedPlaceSummaryFormatTypes;
- (id)supportedPlaceSummaryFormatTypesAsString:(int)arg1;
- (unsigned long long)supportedPlaceSummaryFormatTypesCount;
- (int)supportedSearchTierTypeAtIndex:(unsigned long long)arg1;
- (int*)supportedSearchTierTypes;
- (id)supportedSearchTierTypesAsString:(int)arg1;
- (unsigned long long)supportedSearchTierTypesCount;
- (bool)supportsBrandFallback;
- (unsigned int)timeSinceMapEnteredForeground;
- (unsigned int)timeSinceMapViewportChanged;
- (id)transitOptions;
- (id)transitScheduleFilter;
- (id)transitTripStopTimeFilter;
- (int)transportTypeAtIndex:(unsigned long long)arg1;
- (int*)transportTypes;
- (id)transportTypesAsString:(int)arg1;
- (unsigned long long)transportTypesCount;
- (id)unknownFields;
- (void)updateAnalyticsShortSession;
- (bool)useBackgroundUrl;
- (id)venueIdentifier;
- (id)walkingOptions;
- (bool)wantsBrandIcon;
- (void)writeTo:(id)arg1;

@end