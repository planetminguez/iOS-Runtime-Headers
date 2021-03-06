/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class <CKTextInteractionDelegate>, NSAttributedString, NSString, UIColor, UIFont;

@interface CKLazyTextView : UIView <CKTextBalloonContentView> {
    struct CGSize { 
        float width; 
        float height; 
    NSAttributedString *_attributedText;
    UIFont *_font;
    NSString *_fontCSS;
    float _lineHeight;
    NSString *_lineHeightCSS;
    UIColor *_shadowColor;
    } _shadowOffset;
    int _textAlignment;
    NSString *_textAlignmentCSS;
    UIColor *_textColor;
    NSString *_textColorCSS;
    NSString *_textShadowCSS;
    BOOL _webViewNeedsUpdate;
}

@property(copy) NSAttributedString * attributedText;
@property(retain) UIFont * font;
@property(copy) NSString * fontCSS;
@property <CKTextInteractionDelegate> * interactionDelegate;
@property float lineHeight;
@property(copy) NSString * lineHeightCSS;
@property(retain) UIColor * shadowColor;
@property struct CGSize { float x1; float x2; } shadowOffset;
@property int textAlignment;
@property(copy) NSString * textAlignmentCSS;
@property(retain) UIColor * textColor;
@property(copy) NSString * textColorCSS;
@property(copy) NSString * textShadowCSS;
@property BOOL webViewNeedsUpdate;

- (id)attributedText;
- (void)dealloc;
- (id)description;
- (id)font;
- (id)fontCSS;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)lineHeight;
- (id)lineHeightCSS;
- (void)setAttributedText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFontCSS:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLineHeight:(float)arg1;
- (void)setLineHeightCSS:(id)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setTextAlignmentCSS:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextColorCSS:(id)arg1;
- (void)setTextShadowCSS:(id)arg1;
- (void)setWebViewNeedsUpdate:(BOOL)arg1;
- (void)setWebViewNeedsUpdate;
- (id)shadowColor;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (id)styleString;
- (int)textAlignment;
- (id)textAlignmentCSS;
- (id)textColor;
- (id)textColorCSS;
- (id)textShadowCSS;
- (id)textView;
- (void)updateTextShadowCSS;
- (void)updateWebView;
- (void)updateWebViewIfNeeded;
- (BOOL)webViewNeedsUpdate;

@end
