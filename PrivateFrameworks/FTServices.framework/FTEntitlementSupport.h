/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSDictionary;

@interface FTEntitlementSupport : NSObject {
    struct __CTServerConnection { } *_ctServerConnection;
    struct __CFString { } *_entitlementStatus;
}

@property(readonly) BOOL faceTimeNonWiFiEntitled;
@property(readonly) NSDictionary * registrationState;

+ (id)sharedInstance;

- (void)_cleanupMachInfo;
- (BOOL)_disconnectCTServerConnection;
- (void)_handleCTServiceRequestName:(struct __CFString { }*)arg1 userInfo:(struct __CFDictionary { }*)arg2 contextInfo:(void*)arg3;
- (void)_handleEntitlementNotification:(struct __CFDictionary { }*)arg1;
- (BOOL)_reconnectCTServerConnectionIfNecessary;
- (BOOL)_registerForCTEntitlementNotifications;
- (void)_registrationStateChanged;
- (BOOL)_setupCTServerConnection;
- (void)_unregisterForCTEntitlementNotifications;
- (BOOL)faceTimeNonWiFiEntitled;
- (id)init;
- (id)registrationState;

@end