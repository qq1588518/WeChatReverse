//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "AutoplayController.h"
#import "BaseMsgContentDelgate.h"
#import "BaseMsgContentInBackgroundThreadDelgate.h"
#import "FavForwardLogicDelegate.h"
#import "ForwardMessageLogicDelegate.h"
#import "IContactMgrExt.h"
#import "ILinkEventExt.h"
#import "IMMNewSessionMgrExt.h"
#import "IMsgExt.h"
#import "IMsgRevokeExt.h"
#import "ITrackPresentExt.h"
#import "ITrackRoomMgrExt.h"
#import "IVOIPUILogicMgrExt.h"
#import "IWXTalkPresentExt.h"
#import "IWXTalkieExt.h"
#import "ImageControllerDelegate.h"
#import "ImplicitAnimationControllerDelegate.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "MMInputToolViewCustomizationDelegate.h"
#import "MMNewMultiSelectContactsViewControllerDelegate.h"
#import "MMPickLocationViewControllerDelegate.h"
#import "MessageObserverDelegate.h"
#import "MsgDelegate.h"
#import "MultiSelectContollerDelegate.h"
#import "MultiTalkMgrExt.h"
#import "MyFavoritesListViewControllerDelegate.h"
#import "PlayControllerDelegate.h"
#import "RecordControllerDelegate.h"
#import "SessionSelectControllerDelegate.h"
#import "ShakeControllerDelegate.h"
#import "ShareFriendOnChatDelegate.h"
#import "ShareMessageConfirmLogicHelperDelegate.h"
#import "TypingControllerDelgate.h"
#import "UrlControllerDelegate.h"
#import "ViewLocationDelegate.h"
#import "WCActionSheet.h"
#import "WCCardPackageViewControllerDelegate.h"
#import "contactInfoDelegate.h"
#import "contactVerifyLogicDelegate.h"

@class AutoplayController, BaseMsgContentViewController, CBaseContact, CContact, CContactVerifyLogic, CMessageWrap, ForwardMessageLogicController, GameController, ImageController, ImplicitAnimationController, MMPickLocationViewController, MMUIViewController, MultiSelectController, MyFavoritesListViewController, NSMutableDictionary, NSString, PlayingController, RecordController, ShakeController, ShareDataToOpenSDKController, ShareFriendOnChatLogicController, ShareMessageConfirmLogicHelper, TypingController, UINavigationController, UrlController;


/**
 消息逻辑控制器
 
 和BaseMsgContentViewController关系紧密
 @important BaseMsgContentLogicController的构造时机, 早于BaseMsgContentViewController
 并且BaseMsgContentLogicController需要通过MMMsgLogicManager来实现BaseMsgContentViewController视图控制器的页面跳转
 */
@interface BaseMsgContentLogicController : MMObject <MMNewMultiSelectContactsViewControllerDelegate, ForwardMessageLogicDelegate, BaseMsgContentDelgate, BaseMsgContentInBackgroundThreadDelgate, WCActionSheetDelegate, ImageControllerDelegate, contactInfoDelegate, UINavigationControllerDelegate, MessageObserverDelegate, TypingControllerDelgate, MsgDelegate, IMsgExt, ILinkEventExt, contactVerifyLogicDelegate, UrlControllerDelegate, IContactMgrExt, IMMNewSessionMgrExt, RecordControllerDelegate, PlayControllerDelegate, AutoplayController, ShakeControllerDelegate, ShareFriendOnChatDelegate, MFMailComposeViewControllerDelegate, MMPickLocationViewControllerDelegate, ImplicitAnimationControllerDelegate, IVOIPUILogicMgrExt, MMInputToolViewCustomizationDelegate, IWXTalkPresentExt, IWXTalkieExt, ITrackPresentExt, ITrackRoomMgrExt, UIAlertViewDelegate, MultiSelectContollerDelegate, ViewLocationDelegate, MultiTalkMgrExt, MyFavoritesListViewControllerDelegate, IMsgRevokeExt, FavForwardLogicDelegate, WCCardPackageViewControllerDelegate, ShareMessageConfirmLogicHelperDelegate, SessionSelectControllerDelegate>
{
    BaseMsgContentViewController *m_viewController;
    CBaseContact *m_contact;
    ImageController *m_imageController;
    UrlController *m_urlController;
    RecordController *m_recordController;
    PlayingController *m_playingController;
    AutoplayController *m_autoplayController;
    TypingController *m_typingController;
    GameController *m_GameController;
    ShakeController *m_shakeController;
    ShareFriendOnChatLogicController *m_shareCardController;
    MMPickLocationViewController *m_pickLocationController;
    ImplicitAnimationController *m_implicitAnimationController;
    CContactVerifyLogic *m_contactVerifyLogic;
    MultiSelectController *m_multiSelectController;
    MyFavoritesListViewController *m_myFavListController;
    MMUIViewController *m_cardPkgViewController;
    ShareDataToOpenSDKController *m_shareOpenSDKController;
    unsigned int m_uiDownLeftCount;
    unsigned int m_uiSearchedResultNodeLocalID;
    unsigned long long m_uiDownLastCreateTime;
    unsigned int m_uiLastCreateTime;
    unsigned int m_uiLastSequence;
    unsigned int m_uiLeftCount;
    unsigned int m_uiLeftUnreadCount;
    _Bool m_bInContacts;
    _Bool m_bAddUsr;
    CMessageWrap *m_msgResend;
    UINavigationController *m_navigationController;
    long long m_pushTime;
    unsigned int m_uiSubviewShowStatus;
    int m_eViewDisshowStatus;
    _Bool m_bIsEditing;
    NSString *m_redirectToEmoticonPid;
    CDUnknownBlockType multiMsgCompleteHandler;
    NSMutableDictionary *m_dicExtraInfo;
    CContact *m_selectContact;
    ForwardMessageLogicController *m_forwardLogic;
    ShareMessageConfirmLogicHelper *m_shareMessageHelper;
    _Bool m_bIsInContentView;
    int m_uiFromScene;
    _Bool m_bHasUnreadMsg;
    int m_searchScene;
}

@property(nonatomic) int m_searchScene; // @synthesize m_searchScene;
@property(retain, nonatomic) NSMutableDictionary *m_dicExtraInfo; // @synthesize m_dicExtraInfo;
@property(retain, nonatomic) NSString *m_redirectToEmoticonPid; // @synthesize m_redirectToEmoticonPid;
@property(nonatomic) long long m_pushTime; // @synthesize m_pushTime;
@property(retain, nonatomic) MMPickLocationViewController *m_pickLocationController; // @synthesize m_pickLocationController;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=m_navigationController;
@property(retain, nonatomic) CMessageWrap *m_msgResend; // @synthesize m_msgResend;
@property(retain, nonatomic) CBaseContact *m_contact; // @synthesize m_contact;
@property(nonatomic) _Bool isPeekPreview;

#pragma mark - BaseMsgContentDelgate


#pragma mark -
- (double)getImplicitAnimationBottomBoundaryY;
- (id)getImplicitAnimationParentView;
- (id)getFavForawrdViewController;
- (void)modMsgWithoutNotify:(id)arg1;
- (void)UnRegister;
- (void)Register;
- (void)WillBePushedLogicController;
- (void)onWillEnterRoom;
- (void)unsetSession;
- (void)OnAddFriend:(id)arg1 MsgWrap:(id)arg2 OpCode:(unsigned int)arg3;
- (id)getBackgroundView;
- (void)dealloc;
- (void)onVideoVoipViewDisappear;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)setExtraInfo:(id)arg1;
- (id)getExtraInfo;
- (void)onMultiTalkBannerChange:(id)arg1 status:(unsigned int)arg2;
- (void)OnOpenTrackRoom:(id)arg1;
- (void)OnTrackRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (void)onSessionTotalUnreadCountChange:(unsigned int)arg1;
- (void)CameraControllerDidTakeSightImage:(id)arg1 withFrontCamera:(_Bool)arg2;
- (void)CameraControllerDidPickerVideoWithAsset:(id)arg1;
- (void)CameraControllerDidTakeSight:(id)arg1;
- (id)chatUserNameForSightStatistics;
- (void)CameraControllerDidTakeVideo:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)contactInfoReturn;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)addToContactsFromContactInfo:(id)arg1;
- (void)onFinishedShareMyFriend:(_Bool)arg1;
- (id)getMyFriendContact;
- (id)getShareMyFriendParentViewController;
- (void)onAddToContacts:(id)arg1;
- (void)sendAddContactRequestTo:(id)arg1;
- (void)onEditMessage:(id)arg1;
- (void)updateTypingTitle:(id)arg1;
- (void)processInsertedGifData:(id)arg1;
- (_Bool)CanSendMultiImage;
- (_Bool)CanSendOriginalImage;
- (void)processImageControllerDidCancel:(unsigned long long)arg1;
- (void)processInsertedAsset:(id)arg1;
- (void)processInsertedImage:(id)arg1 withData:(id)arg2 ImageInfo:(id)arg3;
- (void)processInsertedImage:(id)arg1 ImageInfo:(id)arg2;
- (void)DidEnterBackground:(id)arg1;
- (_Bool)isShowHeadImage:(id)arg1;
- (_Bool)CanRemoteRecord;
- (id)GetContactName;
- (struct CGPoint)CheckVoiceBtnPressLocation;
- (unsigned int)CheckVoiceBtnState;
- (void)SetButtonHighlighted:(_Bool)arg1;
- (void)SetPeakPower:(float)arg1;
- (void)ShowCountingTips:(long long)arg1;
- (void)ShowTooLongTips;
- (void)ShowTooShortTips;
- (void)SetVoiceEnabled:(_Bool)arg1;
- (void)HideRecordTips;
- (void)ShowPreparing;
- (void)ShowRecording;
- (void)onRecordModMsg:(id)arg1;
- (void)onRecordAddMsg:(id)arg1;
- (void)onForwardMessageOK;
- (id)getCurrentViewController;
- (void)onMultiOprationComplete;
- (void)setMultiSelectModeOnComplete:(CDUnknownBlockType)arg1;
- (void)onMultiMsgSelected:(id)arg1 Username:(id)arg2;
- (void)onMultiMsgDelete:(id)arg1;
- (void)onMultiSelectCancel;
- (void)downloadMultiMsg:(id)arg1 saveToAlbum:(_Bool)arg2;
- (void)sendMultiMsgBySystemMail:(id)arg1;
- (void)sendMultiMsgToBrandContact:(id)arg1 To:(id)arg2;
- (void)sendMultiMsgByMail:(id)arg1;
- (void)sendMultiMsgToFriend:(id)arg1;
- (void)addMultiMsgToMyFav:(id)arg1;
- (void)toBeEditing:(_Bool)arg1;
- (id)GetRightBarBtn;
- (_Bool)hasDownMoreMsg;
- (_Bool)hasMoreMsg;
- (void)StartPlayVideo:(id)arg1;
- (void)StartDownloadShortVideo:(id)arg1;
- (void)StartDownloadVideo:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (void)StartDownloadVideo:(id)arg1;
- (void)StartUploadVideo:(id)arg1;
- (void)StopDownloadVideo:(id)arg1;
- (void)StopUploadVideo:(id)arg1;
- (_Bool)canShowChatRoomInfo;
- (void)resetWithMessageWrap:(id)arg1;
- (id)QueryMsgText:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(unsigned int)arg4 LeftCount:(unsigned int *)arg5;
- (void)SetMsgPlayed:(id)arg1;
- (void)StartPlayMessage:(id)arg1;
- (id)genMsgSource;
- (void)QuicklySaveDraft:(id)arg1;
- (void)SaveContentAndState;
- (void)saveDraft:(id)arg1;
- (void)onVideoOperation;
- (void)selectVideo;
- (id)GetDownMsgByOneIndex:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (id)GetDownMsgByDoubleIndex:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (unsigned int)getMsgCountToLoad;
- (void)onShareLocationMsgToOpenSDK:(id)arg1 ViewController:(id)arg2;
- (void)onSendLocationToFriend:(id)arg1 ViewController:(id)arg2;
- (id)onGetRightBarButton;
- (void)onCancelSeletctedLocation;
- (void)onFinishSelectedLocation;
- (void)OnSendMessageFail:(id)arg1 WithError:(int)arg2;
- (void)OnSendMessageOK:(id)arg1;
- (void)onCardPackageViewSelectCardItem:(id)arg1;
- (void)onCardPackageViewCancelSelectCard;
- (id)getContactToForward;
- (void)exitTracking;
- (void)openTrackRoom:(id)arg1;
- (void)AddLocationMessageWithLocation:(id)arg1;
- (void)RecommenWego;
- (void)OpenNativeUrl:(id)arg1;
- (void)OpenUrl:(id)arg1;
- (id)getPreviewForLink:(id)arg1;
- (void)OnTagLink:(id)arg1 messageWrap:(id)arg2;
- (void)SendImageMessage:(id)arg1 withData:(id)arg2 ImageInfo:(id)arg3;
- (void)SendImageMessageByMMAsset:(id)arg1;
- (id)tagForCurrentPage;
- (_Bool)isChatStatusNotifyOpen;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)contactVerifyOk:(id)arg1 opCode:(unsigned int)arg2;
- (void)verifyContactByUsrNameWithOpCode:(unsigned int)arg1 userName:(id)arg2;
- (void)OnVideoPlayEnd:(id)arg1 isForceStop:(_Bool)arg2;
- (void)onEndPlay:(unsigned int)arg1 isForceStop:(_Bool)arg2;
- (void)onForceEarpieceModeChanged;
- (_Bool)isShakeEnabled;
- (void)PlayNodeAtId:(unsigned int)arg1;
- (id)GetMessagesNodeArray;
- (_Bool)canAutoplayWhenMessageDownloaded;
- (id)formImageMsgByMMAsset:(id)arg1 toUserName:(id)arg2;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3 withImageInfo:(id)arg4;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2;
- (id)FormTextMsg:(id)arg1 withText:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2 SysMsg:(id)arg3;
- (void)OnRevokeMsg:(id)arg1 MsgWrap:(id)arg2 ResultCode:(unsigned int)arg3 ResultMsg:(id)arg4 EducationMsg:(id)arg5;
- (void)viewDidRotateToOrientation:(long long)arg1;
- (void)viewWillRotateToOrientation:(long long)arg1;
- (void)openOpenSDKAppBrand:(id)arg1;
- (void)openWaApp:(id)arg1;
- (void)shareDataToOpenSDK:(id)arg1;
- (void)RevokeMsg:(id)arg1;
- (void)onClickPlayMusicBtn:(id)arg1 isPlay:(_Bool)arg2;
- (void)onClickMsg:(id)arg1;
- (void)onDeleteMsg:(id)arg1;
- (void)onClickFavMenu:(id)arg1;
- (void)onClickVoiceTranslate:(id)arg1;
- (void)onClickTranslateMsg:(id)arg1 translateInfo:(id)arg2;
- (void)onClickTextFloatPreView:(id)arg1;
- (void)SetReadWithMessageWrap:(id)arg1 isNotifyModMsg:(_Bool)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)performDeleteMsg:(id)arg1;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnUpdateVideoStatus:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddEmoticonMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (void)onMultiSelectContactsEndWithReportSelectedCount:(unsigned int)arg1 hasReachLimit:(_Bool)arg2 clickCount:(unsigned int)arg3;
- (void)onMultiSelectContactsDidFinishSelect:(id)arg1 tmpDisplayView:(id)arg2;
- (void)onMultiSelectContactsDidFinishSelect:(id)arg1;
- (void)Reset;
- (id)init;
- (id)initWithLocalID:(unsigned int)arg1 CreateTime:(unsigned int)arg2 ContentViewDisshowStatus:(int)arg3;
- (id)initWithLocalID:(unsigned int)arg1 CreateTime:(unsigned int)arg2 ContentViewDisshowStatus:(int)arg3 fromScene:(int)arg4;
- (id)getNavigationController;
- (id)getViewController;
- (id)getMsgContentViewController;
- (unsigned int)GetFirstLocalID;
- (unsigned int)GetLastLocalID;
- (void)initViewController;
- (void)initProperties;
- (void)initPropertiesWithLocalID:(unsigned int)arg1 CreateTime:(unsigned int)arg2;
- (void)resetController;
- (void)initControllers;
- (void)OnMyselfCloseMode:(id)arg1;
- (void)OnRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (void)DidAddMsg:(id)arg1;
- (_Bool)isNeedCached;
- (void)RestoreStatusAndRegisterFromCacheStatus;
- (void)ClearStatusAndUnRegisterForCacheStatus;

@end

