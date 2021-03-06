/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMPedometer : NSObject {
    CMPedometerProxy * _pedometerProxy;
}

@property (nonatomic, readonly) CMPedometerProxy *pedometerProxy;

+ (BOOL)isCadenceAvailable;
+ (BOOL)isDistanceAvailable;
+ (BOOL)isFloorCountingAvailable;
+ (BOOL)isPaceAvailable;
+ (BOOL)isPedometerEventTrackingAvailable;
+ (BOOL)isStepCountingAvailable;

- (id)_pedometerDataWithRecordID:(int)arg1;
- (void)_queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (id)pedometerProxy;
- (void)queryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(id /* block */)arg2;
- (void)queryPedometerDataSinceRecord:(int)arg1 withHandler:(id /* block */)arg2;
- (void)startPedometerEventUpdatesWithHandler:(id /* block */)arg1;
- (void)startPedometerUpdatesFromDate:(id)arg1 withHandler:(id /* block */)arg2;
- (void)stopPedometerEventUpdates;
- (void)stopPedometerUpdates;

@end
