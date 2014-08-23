/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEARCConversionAssistant.h>

#import "IDEComparisonEditorDataSource-Protocol.h"
#import "IDEReviewFilesDataSource-Protocol.h"

@class DVTBorderedView, IDENavigableItemCoordinator, IDENavigatorDataCell, IDEReviewFilesViewController, NSArray, NSMapTable;

@interface IDEARCConversionReviewChangesAssistant : IDEARCConversionAssistant <IDEReviewFilesDataSource, IDEComparisonEditorDataSource>
{
    NSMapTable *_translatedFilePathByOriginalFilePath;
    NSMapTable *_editorDocumentByFilePath;
    NSArray *_flatNavigableItems;
    IDENavigableItemCoordinator *_flatFileNavItemCoordinator;
    IDENavigatorDataCell *_containerFileReferenceDataCell;
    IDENavigatorDataCell *_groupDataCell;
    IDENavigatorDataCell *_fileReferenceDataCell;
    IDEReviewFilesViewController *_reviewFilesViewController;
    DVTBorderedView *_borderedView;
    id <DVTObservingToken> _comparisonEditorObservingToken;
    id _completionBlock;
}

- (void)_applyChanges;
- (id)_checkedDocuments;
- (id)_containerFileReferenceCell;
- (void)_document:(id)arg1 didSave:(BOOL)arg2 contextInfo:(void *)arg3;
- (id)_documentForLocation:(id)arg1 completionBlock:(id)arg2;
- (id)_fileReferenceCell;
- (void)_finishWithError:(id)arg1;
- (id)_groupCell;
- (BOOL)_selectedTargetsContainFilePath:(id)arg1;
- (void)_setInitialSelectionForNavigatorOutlineView:(id)arg1;
- (void)_snapshotAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)_snapshotContainerItem:(id)arg1 customizationBlock:(id)arg2;
- (BOOL)canFinish;
- (BOOL)canGoBack;
- (id)documentForPrimaryDocumentLocation:(id)arg1 completionBlock:(id)arg2;
- (id)documentForSecondaryDocumentLocation:(id)arg1 completionBlock:(id)arg2;
- (id)fileSystemNavigableItems;
- (void)finishWithCompletionBlock:(id)arg1;
@property(copy) NSArray *flatNavigableItems; // @synthesize flatNavigableItems=_flatNavigableItems;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(readonly) NSArray *issueNavigableItems;
- (void)loadView;
- (id)reviewFilesNavigator:(id)arg1 documentLocationForNavigableItem:(id)arg2;
- (id)reviewFilesNavigator:(id)arg1 outlineView:(id)arg2 dataCellForNavigableItem:(id)arg3;
- (void)setAssistantContext:(id)arg1;
- (BOOL)shouldSelectFirstDiff;
- (void)viewDidInstall;
@property(readonly) NSArray *workspaceNavigableItems;

@end
