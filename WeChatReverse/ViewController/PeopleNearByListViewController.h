//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"
#import "SeePeopleNearByLogicController.h"
#import "PeopleNearByListHeaderViewDelegate.h"
#import "PeopleNearByListViewControllerDelegate.h"

@class LbsContactInfoList, MFBannerBtn, MMTableView, NSArray, NSMutableDictionary, NSString, PeopleNearByListHeaderView, SeePeopleNearByLogicController;

@interface PeopleNearByListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, PeopleNearByListHeaderViewDelegate>
{
    PeopleNearByListHeaderView *m_lbsHeaderView;
    LbsContactInfoList *m_lbsContactList;
    MMTableView *m_tableView;
    SeePeopleNearByLogicController *m_logicController;
    NSMutableDictionary *m_userHeaderImageCache;
    NSInteger m_iRoomMemberCount;
    id <PeopleNearByListViewControllerDelegate> m_delegate;
    MFBannerBtn *m_bannerBtn;
    NSArray *m_lbsPoiList;
    NSUInteger m_abtestResult;
}

@property(strong, nonatomic) NSArray *lbsPoiList; // @synthesize lbsPoiList=m_lbsPoiList;
@property(nonatomic) NSInteger iRoomMemberCount; // @synthesize iRoomMemberCount=m_iRoomMemberCount;
@property(strong, nonatomic) NSMutableDictionary *userHeaderImageCache; // @synthesize userHeaderImageCache=m_userHeaderImageCache;
@property(strong, nonatomic) SeePeopleNearByLogicController *logicController; // @synthesize logicController=m_logicController;
@property(strong, nonatomic) MMTableView *tableView; // @synthesize tableView=m_tableView;
@property(strong, nonatomic) LbsContactInfoList *lbsContactList; // @synthesize lbsContactList=m_lbsContactList;

- (void)setDelegate:(id <PeopleNearByListViewControllerDelegate>)delegate;
- (void)adjustSubviewRects;
- (void)reloadWithLbsPoiList:(id)poiList;
- (void)reloadWithLbsContactInfoList:(id)contactInfoList;
- (id)genLBSPeopleCell:(id)cell cellForRowAtIndexPath:(NSIndexPath *)indexPath;
- (id)genLBSPoiCell:(id)cell cellForRowAtIndexPath:(NSIndexPath *)indexPath;

- (void)checkBannerLogic;
- (void)createBannerBtn;
- (void)startBindQQ;
- (void)startUploadAddressbook;
- (void)startBindPhone;
- (BOOL)isLBSPeopleIndex:(id)arg1;
- (id)getCachedHeaderImageForUser:(id)arg1;
- (void)showChatRoomView;




@end

