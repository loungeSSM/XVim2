//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class IDEEditorDocument;

@protocol IDESingleFileCommandSupportingEditor
- (void)compileCurrentFile;
- (BOOL)canCompileFile;
- (void)analyzeCurrentFile;
- (BOOL)canAnalyzeFile;
- (void)preprocessCurrentFile;
- (BOOL)canPreprocessFile;
- (void)assembleCurrentFile;
- (BOOL)canAssembleFile;
@property(nonatomic, readonly) IDEEditorDocument *document;
@end

