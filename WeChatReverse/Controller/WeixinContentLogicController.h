//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMsgContentLogicController.h"

#import "IQQMailExt.h"
#import "ITranslateMsgMgrExt.h"
#import "TipsViewDelegate.h"
#import "addContactToChatRoomDelegate.h"


@interface WeixinContentLogicController : BaseMsgContentLogicController <IQQMailExt, UIAlertViewDelegate, addContactToChatRoomDelegate, TipsViewDelegate, ITranslateMsgMgrExt>
{
    _Bool m_bTipsShow;
    UIImageView *_toolView;
}

@property(retain, nonatomic) UIImageView *toolView; // @synthesize toolView=_toolView;



- (void)clickLinkToDealWithSysXml:(id)arg1 fromScene:(id)arg2;
- (void)onClickReceiveBrandMsg;
- (void)onClickShieldBrandMsg;
- (_Bool)isNeedCached;
- (_Bool)isShakeEnabled;
- (id)GetRightBarBtn;
- (void)dealloc;
- (void)checkSecurityBannerShow;
- (void)checkAddFriend;
- (_Bool)isInMyContactList;
- (void)ViewWillAppear;
- (void)onPerformAction:(id)arg1;
- (void)onWillPopFromNavigationController;
- (void)ViewDidInit;
- (void)ViewWillInit;
- (void)UnRegister;
- (void)Register;
- (void)OnGetMailUnreadCount:(int)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onEnterMailAppBtnPress:(id)arg1;
- (void)ShowNewMail;
- (void)bringQQMailToolView2Front;
- (void)initQQMailToolView;
- (id)getDefaultEnterMailAppTitle;
- (void)checkQQMailUnReadCount;
- (_Bool)isQQMailAppInstall;
- (_Bool)isQQMailPlugin;
- (id)GetChatContact;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(_Bool)arg2;
- (void)newMessageFromAddContactToChatRoom:(id)arg1;
- (_Bool)shouldPreventViewcontrollerAutorotate;
- (void)checkNeedContactVerify;
- (void)ViewDidAppear;
- (void)deleteAllMsg;
- (id)GetTitleTailImage;
- (void)OpenDetailInfo;
- (_Bool)isOpenSingleInfo;
- (void)OpenContactInfo:(id)arg1;
- (id)GetRightBarButtonTitle;
- (void)switchEarpieceMode;
- (void)StateChanged;
- (_Bool)EnabledOfHeaderButtonAtIndex:(unsigned int)arg1;
- (id)HighlightedImageOfHeaderButtonAtIndex:(unsigned int)arg1;
- (id)ImageOfHeaderButtonAtIndex:(unsigned int)arg1;
- (id)TitleOfHeaderButtonsAtIndex:(unsigned int)arg1;
- (unsigned int)NumberOfHeaderButtons;
- (_Bool)HasCustomToolBar;
- (void)CustomToolViewEX:(id)arg1;
- (_Bool)isToolViewHidden;
- (_Bool)CanShowSight;
- (_Bool)CanOpenServiceAppList;
- (_Bool)CanSelectMyFavoritesItemForSendingMsg;
- (_Bool)CanRemoteRecord;
- (id)nameForHeadImageLongPressed:(id)arg1;
- (_Bool)CanLongPressHeadImage;
- (_Bool)CanSend3rdMsg;
- (_Bool)CanOpenTrackRoom;
- (_Bool)CanSendLocationMsg;
- (_Bool)CanSendVideoMsg;
- (_Bool)CanSendVoiceMsg;
- (_Bool)CanSendImageMsg:(id)arg1;
- (_Bool)CanSendTextMsg:(id)arg1;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)clearContactVerifyFlag;
- (void)clearAllMsg;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;



@end

