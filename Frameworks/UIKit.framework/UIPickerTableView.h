/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableIndexSet;

@interface UIPickerTableView : UITableView <UITableViewDelegate> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct { 
        unsigned int allowsMultipleSelection : 1; 
        unsigned int scrollingDirection : 2; 
        unsigned int didSelectDisabled : 1; 
        unsigned int skipRowChangeNotifications : 1; 
        unsigned int scrollingForSelection : 1; 
        unsigned int pickerViewImplementsSelectionBarChanged : 2; 
        unsigned int cancellingAnimation : 1; 
    NSMutableIndexSet *_checkedRows;
    float _lastClickedOffset;
    } _pickerTableFlags;
    } _selectionBarRect;
    int _selectionBarRow;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } selectionBarRect;
@property int selectionBarRow;

- (BOOL)_beginTrackingWithEvent:(id)arg1;
- (id)_checkedRows;
- (id)_pickerView;
- (void)_playClickIfNecessary;
- (void)_rectChangedWithNewSize:(struct CGSize { float x1; float x2; })arg1 oldSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)_scrollRowAtIndexPathToSelectionBar:(id)arg1 animated:(BOOL)arg2;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2;
- (void)_scrollingFinished;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_selectionBarRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setSelectionBarRow:(int)arg1;
- (void)_updateContentInsets;
- (struct CGPoint { float x1; float x2; })contentOffsetForRowAtIndexPath:(id)arg1;
- (void)dealloc;
- (BOOL)didSelectDisabled:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (BOOL)isRowChecked:(int)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { float x1; float x2; })arg2 targetContentOffset:(struct CGPoint { float x1; float x2; }*)arg3;
- (BOOL)selectRow:(int)arg1 animated:(BOOL)arg2 notify:(BOOL)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionBarRect;
- (int)selectionBarRow;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setSelectionBarRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;

@end
