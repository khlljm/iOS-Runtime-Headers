/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactWithNamePredicate : CNPredicate <CNSuggestedContactPredicate> {
    NSString * _name;
    unsigned int  _options;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned int options;
@property (readonly) Class superclass;

+ (id)descriptionForOptions:(unsigned int)arg1;
+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 options:(unsigned int)arg2;
- (id)name;
- (unsigned int)options;
- (id)sgContactMatchesWithSortOrder:(int)arg1 mutableObjects:(BOOL)arg2 service:(id)arg3 error:(id*)arg4;

@end