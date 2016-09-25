/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

@interface CDBPreferences : NSObject {
    CalPreferences * _preferences;
}

@property (getter=get_enableTravelAdvisoriesForAutomaticBehavior, setter=set_enableTravelAdvisoriesForAutomaticBehavior:, nonatomic) BOOL enableTravelAdvisoriesForAutomaticBehavior;
@property (getter=get_sqlProfileLoggingEnabled, setter=set_sqlProfileLoggingEnabled:, nonatomic) BOOL sqlProfileLoggingEnabled;
@property (getter=get_suggestEventLocations, setter=set_suggestEventLocations:, nonatomic) BOOL suggestEventLocations;
@property (getter=get_suggestedLocationsTestMode, setter=set_suggestedLocationsTestMode:, nonatomic) BOOL suggestedLocationsTestMode;

+ (id)shared;

- (void).cxx_destruct;
- (BOOL)get_enableTravelAdvisoriesForAutomaticBehavior;
- (BOOL)get_sqlProfileLoggingEnabled;
- (BOOL)get_suggestEventLocations;
- (BOOL)get_suggestedLocationsTestMode;
- (id)init;
- (void)set_enableTravelAdvisoriesForAutomaticBehavior:(BOOL)arg1;
- (void)set_sqlProfileLoggingEnabled:(BOOL)arg1;
- (void)set_suggestEventLocations:(BOOL)arg1;
- (void)set_suggestedLocationsTestMode:(BOOL)arg1;

@end