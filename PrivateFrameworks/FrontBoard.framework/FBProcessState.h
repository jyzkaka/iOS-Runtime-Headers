/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBProcessState : NSObject <NSCopying> {
    int _effectiveVisibility;
    BOOL _foreground;
    int _pid;
    BOOL _running;
    int _taskState;
    int _visibility;
}

@property int effectiveVisibility;
@property(getter=isForeground) BOOL foreground;
@property int pid;
@property(getter=isRunning) BOOL running;
@property int taskState;
@property int visibility;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)effectiveVisibility;
- (id)init;
- (id)initWithPid:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isForeground;
- (BOOL)isRunning;
- (int)pid;
- (void)setEffectiveVisibility:(int)arg1;
- (void)setForeground:(BOOL)arg1;
- (void)setPid:(int)arg1;
- (void)setRunning:(BOOL)arg1;
- (void)setTaskState:(int)arg1;
- (void)setVisibility:(int)arg1;
- (int)taskState;
- (int)visibility;

@end