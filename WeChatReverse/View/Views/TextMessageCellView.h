//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonMessageCellView.h"

#import "ILinkEventExt.h"
#import "ITranslateMsgMgrExt.h"
#import "MMTipsViewControllerDelegate.h"
#import "RichTextLayoutDelegate.h"
#import "TextFloatPreviewDelegate.h"
#import "WCActionSheet.h"

@class MMTipsViewController, NSString, RichTextView, TextFloatPreview, TextMessageViewModel, UIButton, UIImageView, WCUIActionSheet;

@interface TextMessageCellView : CommonMessageCellView <ILinkEventExt, RichTextLayoutDelegate, WCActionSheetDelegate, MMTipsViewControllerDelegate, TextFloatPreviewDelegate, ITranslateMsgMgrExt>
{
    RichTextView *m_richTextView;
    UIButton *m_oTranslateStatusButton;
    UIImageView *m_oTranslateLineView;
    MMTipsViewController *m_oTranslateIntroView;
    WCUIActionSheet *m_uiActionSheet;
    TextFloatPreview *m_floatPreview;
}

#pragma mark - ITranslateMsgMgrExt
- (void)onTranslateMessageChanged:(CMessageWrap *)arg1;
- (void)onTranslateMessageFailed:(CMessageWrap *)arg1 errTip:(NSString *)arg2;

- (void)onPhoneClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkHighlighted:(_Bool)arg1 url:(id)arg2;
- (_Bool)handleMagicTapAction:(id)arg1;
- (void)addMagicTapActions:(id)arg1;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)onWindowHide;
- (void)onHide;
- (void)triggerLongPressFor3DTouchAtLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)onTouchCancel;
- (void)onLongTouch;
- (void)onTouchDownRepeat;
- (void)translateMsg;
- (void)onTranslateMsg:(id)arg1;
- (void)onCopy:(id)arg1;
- (_Bool)canShowTranslateMenuItem;
- (id)operationMenuItems;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLinkLongPressed:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onCopyLinkText:(id)arg1;
- (_Bool)onlyContainsLink;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (_Bool)canPeek;
- (struct CGRect)getPreviewLinkFrameForLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (id)getPreviewLinkForLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (void)initTranslateStatusButton;
- (void)initTranslateLineView;
- (void)initRichTextView;
- (void)setNeedsDisplay;
- (double)contentViewCenterY;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateStatus;
- (void)layoutContentView;
- (_Bool)canBeReused;
- (void)prepareForReuse;
- (void)setViewModel:(id)arg1;
- (void)dealloc;

@property(readonly, nonatomic) TextMessageViewModel *viewModel; // @dynamic viewModel;

@end

