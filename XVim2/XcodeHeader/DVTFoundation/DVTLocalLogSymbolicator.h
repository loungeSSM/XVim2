//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface DVTLocalLogSymbolicator : NSObject
{
    NSArray *_dSYMs;
    NSSet *_missingUUIDs;
}

+ (id)symbolicatorWithDSYMs:(id)arg1;
+ (id)symbolicator;
+ (id)symbolicateCrashPath;
@property(copy) NSSet *missingUUIDs; // @synthesize missingUUIDs=_missingUUIDs;
@property(readonly, copy) NSArray *dSYMs; // @synthesize dSYMs=_dSYMs;
- (void).cxx_destruct;
- (void)_parseToolStandardError:(id)arg1;
- (void)symbolicateLogData:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)symbolicateLogData:(id)arg1 error:(id *)arg2;

@end

