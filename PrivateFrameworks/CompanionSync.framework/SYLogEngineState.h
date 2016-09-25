/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYLogEngineState : PBCodable <NSCopying> {
    BOOL  _buffersSessions;
    struct { 
        unsigned int buffersSessions : 1; 
        unsigned int inSession : 1; 
        unsigned int suspended : 1; 
    }  _has;
    BOOL  _inSession;
    BOOL  _suspended;
    int  _type;
}

@property (nonatomic) BOOL buffersSessions;
@property (nonatomic) BOOL hasBuffersSessions;
@property (nonatomic) BOOL hasInSession;
@property (nonatomic) BOOL hasSuspended;
@property (nonatomic) BOOL inSession;
@property (nonatomic) BOOL suspended;
@property (nonatomic) int type;

- (int)StringAsType:(id)arg1;
- (BOOL)buffersSessions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBuffersSessions;
- (BOOL)hasInSession;
- (BOOL)hasSuspended;
- (unsigned int)hash;
- (BOOL)inSession;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBuffersSessions:(BOOL)arg1;
- (void)setHasBuffersSessions:(BOOL)arg1;
- (void)setHasInSession:(BOOL)arg1;
- (void)setHasSuspended:(BOOL)arg1;
- (void)setInSession:(BOOL)arg1;
- (void)setSuspended:(BOOL)arg1;
- (void)setType:(int)arg1;
- (BOOL)suspended;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end