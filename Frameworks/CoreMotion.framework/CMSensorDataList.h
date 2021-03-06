/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMSensorDataList : NSObject <NSFastEnumeration> {
    struct AccelUnpacker { 
        char *fData; 
        unsigned int fBitsLeft; 
        unsigned char fPartial; 
        unsigned long long fTimestampLast; 
        long long fTimestampLastDelta; 
        int fSampleLast[3]; 
    }  fAccelUnpacker;
    unsigned long long  fBlockOffset;
    NSMutableArray * fCachedData;
    CLSensorRecorderSensorMeta * fCurrentBlock;
    long long  fCurrentBlockDataIdentifier;
    unsigned long long  fCurrentBlockIdentifier;
    double  fCurrentBlockStartTime;
    unsigned long long  fCurrentBlockTimestamp;
    unsigned long long  fCurrentIdentifier;
    NSObject<OS_xpc_object> * fDataBuffer;
    unsigned long  fDataBufferLength;
    char * fDataBufferPtr;
    int  fDataType;
    struct GyroUnpacker { 
        char *fData; 
        unsigned int fBitsLeft; 
        unsigned char fPartial; 
        unsigned long long fTimestampLast; 
        long long fTimestampLastDelta; 
        int fSampleLast[4]; 
    }  fGyroUnpacker;
    NSArray * fMetaArray;
    CMSensorRecorderInternal * fProxy;
    long long  fRetrievedDataBufferIdentifier;
    unsigned long long  fStartingIdentifier;
}

- (id).cxx_construct;
- (void)_updateCurrentBlockProperties;
- (BOOL)_updatePointers;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)initFrom:(double)arg1 to:(double)arg2 withType:(int)arg3;
- (id)initWithIdentifier:(unsigned long long)arg1 andType:(int)arg2;

@end
