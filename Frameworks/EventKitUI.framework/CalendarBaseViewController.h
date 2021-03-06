/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <CalendarInvitationButtonDelegate>, CalendarModel;

@interface CalendarBaseViewController : UIViewController <CalendarViewControllerProtocol> {
    <CalendarInvitationButtonDelegate> *_invitationButtonDelegate;
    CalendarModel *_model;
}

- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (BOOL)containsRangeForStartDate:(double)arg1 endDate:(double)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)initWithModel:(id)arg1;
- (void)inspectSelectedOccurrenceAnimated:(BOOL)arg1 isSearching:(BOOL)arg2 isNewEvent:(BOOL)arg3;
- (void)inspectSelectedOccurrenceAnimated:(BOOL)arg1;
- (id)inspectorPassthroughViews;
- (id)invitationDelegate;
- (id)navigationAreaBackgroundImageForOrientation:(int)arg1;
- (id)navigationTitle;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })preferredDateForDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForEventOccurrence:(id)arg1 inView:(id)arg2;
- (void)resetInspectSelectedOccurrenceFlag;
- (void)setEditDelegate:(id)arg1;
- (void)setInvitationDelegate:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)toolbarBackgroundImageForOrientation:(int)arg1;
- (int)type;

@end
