/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface GMMStructuredAddress : NSObject <GMMReadWriteStream> {
     /* Encoded args for previous method: c12@0:4^{InputDataStream=*IIBB}8 */
    NSString *_countryCode;
    NSString *_countryName;
    NSString *_dependentLocality;
    NSString *_locality;
    NSString *_postalCode;
    NSString *_region;
    NSString *_thoroughfare;
}

@property(retain) NSString *countryName; /* unknown property attribute: V_countryName */
@property(retain) NSString *countryCode; /* unknown property attribute: V_countryCode */
@property(retain) NSString *postalCode; /* unknown property attribute: V_postalCode */
@property(retain) NSString *region; /* unknown property attribute: V_region */
@property(retain) NSString *locality; /* unknown property attribute: V_locality */
@property(retain) NSString *dependentLocality; /* unknown property attribute: V_dependentLocality */
@property(retain) NSString *thoroughfare; /* unknown property attribute: V_thoroughfare */
@property(readonly) BOOL hasCountryCode;
@property(readonly) BOOL hasCountryName;
@property(readonly) BOOL hasDependentLocality;
@property(readonly) BOOL hasLocality;
@property(readonly) BOOL hasPostalCode;
@property(readonly) BOOL hasRegion;
@property(readonly) BOOL hasThoroughfare;

- (id)countryCode;
- (id)countryName;
- (void)dealloc;
- (id)dependentLocality;
- (id)description;
- (BOOL)hasCountryCode;
- (BOOL)hasCountryName;
- (BOOL)hasDependentLocality;
- (BOOL)hasLocality;
- (BOOL)hasPostalCode;
- (BOOL)hasRegion;
- (BOOL)hasThoroughfare;
- (id)init;
- (id)locality;
- (id)postalCode;
- (BOOL)readFromStream:(struct InputDataStream { char *x1; NSUInteger x2; NSUInteger x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; }*)arg1;
- (id)region;
- (void)setCountryCode:(id)arg1;
- (void)setCountryName:(id)arg1;
- (void)setDependentLocality:(id)arg1;
- (void)setLocality:(id)arg1;
- (void)setPostalCode:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setThoroughfare:(id)arg1;
- (id)thoroughfare;
- (void)writeToStream:(struct OutputDataStream { char *x1; NSUInteger x2; NSUInteger x3; }*)arg1;

@end