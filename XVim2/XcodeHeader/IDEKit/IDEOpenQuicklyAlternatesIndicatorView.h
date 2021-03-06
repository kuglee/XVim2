//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSAttributedString, NSButton, NSImage, NSString;
@protocol IDEOpenQuicklyAlternatesIndicatorViewDelegate;

@interface IDEOpenQuicklyAlternatesIndicatorView : NSView
{
    NSAttributedString *_cachedAttributedTitle;
    NSAttributedString *_cachedAttributedHighlightedTitle;
    NSImage *_cachedBackgroundImage;
    NSImage *_cachedHighlightedBackgroundImage;
    NSButton *_button;
    long long _backgroundStyle;
    NSString *_title;
    id <IDEOpenQuicklyAlternatesIndicatorViewDelegate> _delegate;
}

+ (struct CGSize)fixedSize;
+ (id)attributedStringForTitle:(id)arg1 color:(id)arg2;
+ (id)buttonBackgroundImageWithBorderColor:(id)arg1 fillColor:(id)arg2 lineWidth:(double)arg3;
@property __weak id <IDEOpenQuicklyAlternatesIndicatorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
- (void).cxx_destruct;
- (void)dropCaches;
- (void)layout;
- (id)effectiveHighlightedBackgroundImage;
- (id)effectiveBackgroundImage;
- (id)backgroundImageWithBorderColor:(id)arg1 fillColor:(id)arg2;
- (id)effectiveAttributedHighlightedTitle;
- (id)effectiveAttributedTitle;
- (id)effectiveFillColor;
- (id)effectiveBorderColor;
- (void)toggleShowAlternates:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

