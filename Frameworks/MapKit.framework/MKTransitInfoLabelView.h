/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitInfoLabelView : _MKUILabel {
    BOOL  _containsText;
    BOOL  _hasCustomFont;
    BOOL  _hasCustomIconSize;
    BOOL  _hasCustomShieldSize;
    int  _iconSize;
    NSArray * _labelItems;
    MKMapItem * _mapItem;
    float  _maxWidth;
    int  _shieldSize;
    float  _spaceBetweenIcons;
    float  _spaceBetweenShields;
    BOOL  _truncateBySwitchingToTextOnly;
}

@property (nonatomic, readonly) BOOL containsText;
@property (nonatomic) int iconSize;
@property (nonatomic, copy) NSArray *labelItems;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) float maxWidth;
@property (nonatomic) int shieldSize;
@property (nonatomic) float spaceBetweenIcons;
@property (nonatomic) float spaceBetweenShields;
@property (nonatomic) BOOL truncateBySwitchingToTextOnly;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (id)_generateText:(BOOL)arg1 allowElipsis:(BOOL)arg2;
- (int)_iconSizeForContentSizeCategory:(id)arg1;
- (id)_imageForArtworkDataSource:(id)arg1;
- (id)_imageForLabelItem:(id)arg1;
- (id)_imageForShieldDataSource:(id)arg1;
- (void)_setFont:(id)arg1 custom:(BOOL)arg2;
- (void)_setupLabelInfo;
- (int)_shieldSizeForContentSizeCategory:(id)arg1;
- (id)_stringAttributes;
- (BOOL)containsText;
- (void)dealloc;
- (int)iconSize;
- (id)init;
- (id)initWithMapItem:(id)arg1;
- (id)initWithMapItem:(id)arg1 maxWidth:(float)arg2;
- (id)labelItems;
- (id)mapItem;
- (float)maxWidth;
- (void)setFont:(id)arg1;
- (void)setIconSize:(int)arg1;
- (void)setLabelItems:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setMaxWidth:(float)arg1;
- (void)setShieldSize:(int)arg1;
- (void)setSpaceBetweenIcons:(float)arg1;
- (void)setSpaceBetweenShields:(float)arg1;
- (void)setTruncateBySwitchingToTextOnly:(BOOL)arg1;
- (int)shieldSize;
- (float)spaceBetweenIcons;
- (float)spaceBetweenShields;
- (BOOL)truncateBySwitchingToTextOnly;

@end