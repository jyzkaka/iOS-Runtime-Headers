/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSBatteryPowerMonitor : NSObject {
    struct IONotificationPort { } *_batteryIONotifyPort;
    unsigned int _batteryNotificationRef;
    struct __CFRunLoopSource { } *_batteryRunLoopSource;
    double _currentLevel;
}

+ (id)defaultMonitor;

- (void)_updateBatteryLevelWithBatteryEntry:(unsigned int)arg1;
- (double)batteryPercentRemaining;
- (void)dealloc;
- (id)init;

@end