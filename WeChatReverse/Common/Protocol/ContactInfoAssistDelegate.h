//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CContact, CContactVerifyLogic, MMUIViewController, NSString;

@protocol ContactInfoAssistDelegate <NSObject>
- (CContactVerifyLogic *)getContactVerifyLogic;
- (void)onSendVerifyMsg;
- (id)getUserData;
- (void)reloadFloatView;
- (void)delAllMsg;
- (MMUIViewController *)getViewController;
- (void)stopLoadingWithFailText:(NSString *)text;
- (void)stopLoadingWithOKText:(NSString *)text;
- (void)startLoadingWithText:(NSString *)text;
- (void)onRemoveContact;
- (void)onExpose;
- (void)onPopViewController:(BOOL)animated;
- (void)onSayHello;
- (void)onShareMyFriend;
- (void)onFriendRequestSend;
- (void)contactVerifyOk:(CContact *)contact;
- (void)onNewMessage:(CContact *)contact;
- (void)onTalk:(CContact *)contact;

@optional
- (NSString *)getSearchId;
- (void)onVerifyOK;
- (void)onAddToContact;
- (NSUInteger)GetFromScene;
@end

