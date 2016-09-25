/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTApplication : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleId;
    int  _capabilities;
    NSString * _localizedDisplayName;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic) int capabilities;
@property (nonatomic, readonly) NSString *localizedDisplayName;

+ (id)allowedKeys;
+ (id)capabilitiesToString:(int)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleId;
- (int)capabilities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleId:(id)arg1 localizedDisplayName:(id)arg2 capabilities:(int)arg3;
- (id)initWithCoder:(id)arg1;
- (id)localizedDisplayName;
- (void)setCapabilities:(int)arg1;

@end