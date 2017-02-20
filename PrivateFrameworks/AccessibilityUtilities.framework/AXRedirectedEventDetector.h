/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXRedirectedEventDetector : NSObject {
    AXDispatchTimer * _flushEventsTimer;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _recentEvents;
}

@property (nonatomic, retain) AXDispatchTimer *flushEventsTimer;
@property (nonatomic, retain) NSMutableArray *recentEvents;

+ (void)setFlushEventsTimerDelay:(double)arg1;

- (double)_elapsedTimeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)addEvent:(id)arg1;
- (void)dealloc;
- (id)flushEventsTimer;
- (id)init;
- (BOOL)isRedirectedEvent:(id)arg1;
- (id)recentEvents;
- (void)setFlushEventsTimer:(id)arg1;
- (void)setRecentEvents:(id)arg1;

@end