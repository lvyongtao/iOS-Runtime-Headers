/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOMUIDsTicket : NSObject <GEOMapServiceTicket> {
    BOOL  _allFreshFromNetwork;
    BOOL  _canceled;
    NSString * _contentProvider;
    BOOL  _includeETA;
    NSArray * _muids;
    unsigned int  _options;
    int  _resultProviderID;
    GEOMapServiceTraits * _traits;
}

@property (nonatomic, readonly) BOOL allAreFreshFromNetwork;
@property (getter=isCanceled, nonatomic, readonly) BOOL canceled;
@property (getter=isChainResultSet, nonatomic, readonly) BOOL chainResultSet;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSArray *relatedSearchSuggestions;
@property (nonatomic, readonly) NSDictionary *responseUserInfo;
@property (nonatomic, readonly) GEOMapRegion *resultBoundingRegion;
@property (nonatomic, readonly) NSString *resultDisplayHeader;
@property (nonatomic, readonly) NSString *resultSectionHeader;
@property (nonatomic, readonly) int searchResultType;
@property (nonatomic, readonly) BOOL shouldEnableRedoSearch;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (BOOL)allAreFreshFromNetwork;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)applyToPlaceInfo:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)defaultRelatedSuggestion;
- (id)description;
- (id)init;
- (id)initWithMUIDs:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 includeETA:(BOOL)arg4 traits:(id)arg5;
- (id)initWithMUIDs:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 includeETA:(BOOL)arg4 traits:(id)arg5 options:(unsigned int)arg6;
- (BOOL)isCanceled;
- (BOOL)isChainResultSet;
- (id)relatedSearchSuggestions;
- (id)responseUserInfo;
- (id)resultBoundingRegion;
- (id)resultDisplayHeader;
- (id)resultSectionHeader;
- (int)searchResultType;
- (BOOL)shouldEnableRedoSearch;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2 queue:(id)arg3;
- (void)submitWithHandler:(id /* block */)arg1 timeout:(int)arg2 networkActivity:(id /* block */)arg3;
- (void)submitWithHandler:(id /* block */)arg1 timeout:(int)arg2 networkActivity:(id /* block */)arg3 queue:(id)arg4;
- (void)submitWithRefinedHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;
- (void)submitWithRefinedHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2 queue:(id)arg3;
- (void)submitWithRefinedHandler:(id /* block */)arg1 timeout:(int)arg2 networkActivity:(id /* block */)arg3;
- (void)submitWithRefinedHandler:(id /* block */)arg1 timeout:(int)arg2 networkActivity:(id /* block */)arg3 queue:(id)arg4;
- (id)traits;

@end
