//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol WASearchJSEventHandlerDelegate <NSObject>

@optional
- (void)onLaunchDetailPage:(NSDictionary *)arg1;
- (void)onRegisterWebViewDidScroll:(NSDictionary *)arg1;
- (void)onPageDoLog:(NSDictionary *)arg1;
- (void)onReportFTSRealTime:(NSDictionary *)arg1;
- (void)onReportWeAppSearchRealTime:(NSDictionary *)arg1;
- (void)onOpenWeAppPage:(NSDictionary *)arg1;
- (void)onSearchInputChanged:(NSDictionary *)arg1;
- (void)onGetAvatar:(NSDictionary *)arg1;
- (void)onGetImageList:(NSDictionary *)arg1;
- (void)onGetSuggestionData:(NSDictionary *)arg1;
- (void)onGetSearchData:(NSDictionary *)arg1;
@end

