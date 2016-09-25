/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecSearchMapsResultExtraCompletionItem : NSObject <WBSCompletionListItem> {
    WBSParsecImageRepresentation * _icon;
    WBSParsecSearchMapsResult * _mapsResult;
    NSString * _title;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int engagementDestination;
@property (nonatomic, readonly) NSString *feedbackIdentifier;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *lastSearchQuery;
@property (nonatomic, readonly) NSString *parsecDomainIdentifier;
@property (nonatomic, readonly) SFSearchResult *sfSearchResultValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (unsigned int)engagementDestination;
- (id)feedbackIdentifier;
- (id)iconWithSession:(id)arg1;
- (id)initWithMapsResult:(id)arg1 text:(id)arg2 url:(id)arg3 icon:(id)arg4;
- (id)parsecDomainIdentifier;
- (id)sfSearchResultValue;
- (id)title;
- (id)url;

@end