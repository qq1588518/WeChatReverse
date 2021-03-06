//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMDBPerformReporterDelegate.h"
#import "MMDBPerfromStrategyDelegate.h"
#import "MMService.h"
#import "ReportStrategyExt.h"

@class MMDBPerformReporter, MMDBPerformStrategyHandler, MMDBPerformStrategyInfo, WCDBPerformanceCollector;

@interface MMDBPerformanceMgr : MMService <MMDBPerfromStrategyDelegate, MMDBPerformReporterDelegate, ReportStrategyExt, MMService>
{
    MMDBPerformStrategyHandler *m_strategyHandler;
    WCDBPerformanceCollector *m_collector;
    MMDBPerformReporter *m_repoter;
    NSObject<OS_dispatch_queue> *m_workerQueue;
    _Bool m_hasSetup;
    MMDBPerformStrategyInfo *m_strategyInfo;
}

@property(retain) MMDBPerformStrategyInfo *m_strategyInfo; // @synthesize m_strategyInfo;

- (void)fetchPerformanceAndCheckReport;
- (void)onTimerDoTheJob;
- (void)onReceiveStrategy:(int)arg1 withContene:(id)arg2;
- (void)onExceedMaxReportCount;
- (void)onRenewDBPerformStrategy:(id)arg1;
- (void)onDidActive;
- (void)registerExtension;
- (void)OnApplicationBackgroundFetch;
- (void)onWillSuspend;
- (void)ReceiveStrategyContent:(id)arg1;
- (void)SetupMonitor;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceEnterBackground;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

@end

