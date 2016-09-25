/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWIrisMovieInfo : NSObject <NSCopying> {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _audioOffset;
    BOOL  _finalEnqueuedIrisRequest;
    BOOL  _finalReferenceMovie;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _masterMovieStartTime;
    NSURL * _masterMovieURL;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _movieEndTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _movieStartTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _movieTrimEndTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _movieTrimStartTime;
    BOOL  _originalPhotoRecording;
    NSURL * _outputMovieURL;
    FigCaptureMovieFileRecordingSettings * _settings;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillImageCaptureHostTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillImageCaptureTime;
    BOOL  _stillImageEncoderKeyFrameEmitted;
    BOOL  _stillImageVISKeyFrameTagged;
    NSURL * _temporaryMovieURL;
}

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } audioOffset;
@property (nonatomic, readonly) BOOL containsTrims;
@property (getter=isFinalEnqueuedIrisRequest, nonatomic) BOOL finalEnqueuedIrisRequest;
@property (getter=isFinalReferenceMovie, nonatomic) BOOL finalReferenceMovie;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } masterMovieStartTime;
@property (nonatomic, retain) NSURL *masterMovieURL;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieEndTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieStartTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieTrimEndTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieTrimStartTime;
@property (nonatomic, readonly) int numberOfRequestedVariants;
@property (getter=isOriginalPhotoRecording, nonatomic) BOOL originalPhotoRecording;
@property (nonatomic, retain) NSURL *outputMovieURL;
@property (nonatomic, readonly) FigCaptureMovieFileRecordingSettings *settings;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } stillImageCaptureHostTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } stillImageCaptureTime;
@property (nonatomic) BOOL stillImageEncoderKeyFrameEmitted;
@property (nonatomic) BOOL stillImageVISKeyFrameTagged;
@property (nonatomic, retain) NSURL *temporaryMovieURL;

+ (id)irisMovieInfoWithFigCaptureMovieFileRecordingSettings:(id)arg1 stillImageCaptureTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 stillImageCaptureHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 originalPhotoRecording:(BOOL)arg4;

- (id)_initWithFigCaptureMovieFileRecordingSettings:(id)arg1 stillImageCaptureTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 stillImageCaptureHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 originalPhotoRecording:(BOOL)arg4;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })audioOffset;
- (BOOL)containsTrims;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)isFinalEnqueuedIrisRequest;
- (BOOL)isFinalReferenceMovie;
- (BOOL)isOriginalPhotoRecording;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })masterMovieStartTime;
- (id)masterMovieURL;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieEndTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieStartTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieTrimEndTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieTrimStartTime;
- (int)numberOfRequestedVariants;
- (id)outputMovieURL;
- (void)setAudioOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setFinalEnqueuedIrisRequest:(BOOL)arg1;
- (void)setFinalReferenceMovie:(BOOL)arg1;
- (void)setMasterMovieStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMasterMovieURL:(id)arg1;
- (void)setMovieEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieTrimEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieTrimStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setOriginalPhotoRecording:(BOOL)arg1;
- (void)setOutputMovieURL:(id)arg1;
- (void)setStillImageCaptureTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setStillImageEncoderKeyFrameEmitted:(BOOL)arg1;
- (void)setStillImageVISKeyFrameTagged:(BOOL)arg1;
- (void)setTemporaryMovieURL:(id)arg1;
- (id)settings;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillImageCaptureHostTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillImageCaptureTime;
- (BOOL)stillImageEncoderKeyFrameEmitted;
- (BOOL)stillImageVISKeyFrameTagged;
- (id)temporaryMovieURL;

@end