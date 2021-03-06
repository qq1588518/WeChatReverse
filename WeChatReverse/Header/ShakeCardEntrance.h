//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface ShakeCardEntrance : MMObject <PBCoding>
{
    unsigned int beginTime;
    unsigned int endTime;
    unsigned int svrDownLimitTime;
    unsigned int activityType;
    NSString *shakeCardEntranceTip;
    NSString *entranceName;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *entranceName; // @synthesize entranceName;
@property(nonatomic) unsigned int activityType; // @synthesize activityType;
@property(retain, nonatomic) NSString *shakeCardEntranceTip; // @synthesize shakeCardEntranceTip;
@property(nonatomic) unsigned int svrDownLimitTime; // @synthesize svrDownLimitTime;
@property(nonatomic) unsigned int endTime; // @synthesize endTime;
@property(nonatomic) unsigned int beginTime; // @synthesize beginTime;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

