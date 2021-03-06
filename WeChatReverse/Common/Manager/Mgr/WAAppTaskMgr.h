//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "WAAppTaskDelegate.h"

@class MMTimer, NSMutableDictionary, NSString;

@interface WAAppTaskMgr : MMService <WAAppTaskDelegate, MMService>
{
    NSString *_foregoundAppID;
    NSMutableDictionary *_dicAppID2Task;
    MMTimer *_timerCheckBackgroundTask;
    unsigned int lastMemoryWaringTimeStamp;
    NSString *_curBackToChatAppID;
}

- (void).cxx_destruct;
- (void)closeActiveTask;
- (void)restartAppWithAppID:(id)arg1 extInfo:(id)arg2;
- (void)removeCurBackToChatState;
- (_Bool)isAppTaskBackingToChat:(id)arg1;
- (id)getCurrentBackToChatAppTask;
- (void)updateCurrentBackToChatState;
- (void)markBackToChatWithAppID:(id)arg1;
- (unsigned int)maxTaskRunningCount;
- (void)onTimerCheckBackgroundTask:(id)arg1;
- (void)invadateCheckBackgroundTaskTimer;
- (void)startCheckBackgroundTaskTimer;
- (void)taskBackgroundNetworkInterruptedTimeout:(id)arg1;
- (void)taskDidClose:(id)arg1;
- (void)taskDidOpen:(id)arg1;
- (void)taskLeaveForeground:(id)arg1;
- (void)taskEnterForeground:(id)arg1;
- (void)checkAndCloseExceedMaxConcurrentCountTask;
- (void)closeAllWebViewInNavigatorTask;
- (void)closeTimeoutBackgoundTask;
- (void)closeBackgroundTask:(_Bool)arg1;
- (void)closeAllTaskUseTips:(_Bool)arg1;
- (void)closeTask:(id)arg1;
- (void)deleteTask:(id)arg1;
- (void)clearTaskDataAndNotifyTerminate:(id)arg1 isCallCloseTask:(_Bool)arg2;
- (void)clearTaskDataAndNotifyTerminate:(id)arg1;
- (id)allTaskArray;
- (_Bool)isNeedCloseAppTaskToOpenPagePath:(id)arg1 appID:(id)arg2 appType:(unsigned int)arg3;
- (_Bool)isNeedNewTask:(id)arg1 pagePath:(id)arg2 appType:(unsigned int)arg3;
- (id)getTaskWithAppID:(id)arg1;
- (id)getAndNewTaskIfNotExistWithAppID:(id)arg1 relativeURL:(id)arg2 openParameter:(id)arg3 debugModeType:(unsigned int)arg4;
- (void)checkForegroundApp;
- (_Bool)hasForegroundApp;
- (id)getForegroundAppID;
- (id)foregroundAppID;
- (void)setForegroundAppID:(id)arg1;
- (id)weAppJumpToUserNameForAppID:(id)arg1 withTaskAppID:(id)arg2;
- (unsigned long long)getAppTaskCount;
- (_Bool)getWeAppTaskInfo:(id)arg1;
- (void)sendJSEventToTaskAllWebView:(id)arg1 withAppID:(id)arg2 param:(id)arg3 toWebviews:(id)arg4;
- (void)closeTaskWithAppID:(id)arg1;
- (void)enterBackgroundTaskOnLaunchOtherWeApp:(id)arg1 launchAppID:(id)arg2;
- (_Bool)isReachMaxWebViewDepthWithAppID:(id)arg1;
- (void)openChildWebViewWithappID:(id)arg1 relativeURL:(id)arg2 childExtraInfo:(id)arg3 fromParent:(id)arg4 isPopAllParent:(_Bool)arg5 errorHandler:(CDUnknownBlockType)arg6;
- (void)openChildWebViewWithappID:(id)arg1 relativeURL:(id)arg2 childExtraInfo:(id)arg3 fromParent:(id)arg4 isPopParent:(_Bool)arg5 errorHandler:(CDUnknownBlockType)arg6;
- (void)openAppTaskWithContact:(id)arg1 relativeURL:(id)arg2 extraInfo:(id)arg3 navigationController:(id)arg4 showConfig:(id)arg5 openParameter:(id)arg6 errorHandler:(CDUnknownBlockType)arg7;
- (void)openAppTaskWithContact:(id)arg1 relativeURL:(id)arg2 extraInfo:(id)arg3 navigationController:(id)arg4 showConfig:(id)arg5 errorHandler:(CDUnknownBlockType)arg6;
- (void)openAppTaskWithContact:(id)arg1 relativeURL:(id)arg2 extraInfo:(id)arg3 navigationController:(id)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (void)onServiceEnterBackground;
- (void)onApplicationDidReceiveMemoryWarning:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

