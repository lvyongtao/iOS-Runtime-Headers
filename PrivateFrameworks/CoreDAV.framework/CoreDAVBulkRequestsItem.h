/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVLeafItem, NSDictionary;

@interface CoreDAVBulkRequestsItem : CoreDAVItem  {
    CoreDAVLeafItem *_maxResourcesItem;
    CoreDAVLeafItem *_maxSizeItem;
}

@property(readonly) NSDictionary * dictRepresentation;
@property(retain) CoreDAVLeafItem * maxSizeItem;
@property(retain) CoreDAVLeafItem * maxResourcesItem;


- (id)init;
- (void)dealloc;
- (id)description;
- (id)dictRepresentation;
- (id)maxSizeItem;
- (void)setMaxSizeItem:(id)arg1;
- (id)maxResourcesItem;
- (void)setMaxResourcesItem:(id)arg1;
- (id)copyParseRules;

@end