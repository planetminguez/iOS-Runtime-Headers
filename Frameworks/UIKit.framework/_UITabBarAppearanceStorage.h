/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, UIColor, UIImage, _UITabBarItemAppearanceStorage;

@interface _UITabBarAppearanceStorage : NSObject {
    NSMutableDictionary *_dividerImages;
    UIImage *backgroundImage;
    UIColor *selectedImageTintColor;
    UIImage *selectionIndicatorImage;
    UIImage *shadowImage;
    _UITabBarItemAppearanceStorage *tabItemAppearanceStorage;
    UIColor *tintColor;
}

@property(retain) UIImage * backgroundImage;
@property(retain) UIColor * selectedImageTintColor;
@property(retain) UIImage * selectionIndicatorImage;
@property(retain) UIImage * shadowImage;
@property(retain) _UITabBarItemAppearanceStorage * tabItemAppearanceStorage;
@property(retain) UIColor * tintColor;

- (id)_dividerImageForLeftButtonState:(unsigned int)arg1 rightButtonState:(unsigned int)arg2;
- (void)_setDividerImage:(id)arg1 forLeftButtonState:(unsigned int)arg2 rightButtonState:(unsigned int)arg3;
- (id)_tabItemAppearanceStorage;
- (id)backgroundImage;
- (void)dealloc;
- (id)selectedImageTintColor;
- (id)selectionIndicatorImage;
- (void)setBackgroundImage:(id)arg1;
- (void)setSelectedImageTintColor:(id)arg1;
- (void)setSelectionIndicatorImage:(id)arg1;
- (void)setShadowImage:(id)arg1;
- (void)setTabItemAppearanceStorage:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)shadowImage;
- (id)tabItemAppearanceStorage;
- (id)tintColor;

@end
