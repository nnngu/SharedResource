#import <UIKit/UIKit.h>

@interface Placeholder : UIView {
}

+ (CGFloat)height;
+ (UIColor*)backgroundColor;

- (id)initWithFrame:(CGRect)frame
                 target:(id)target
     onBackSelector:(SEL)backSel
     onHomeSelector:(SEL)homeSel;

- (void)setEnable:(BOOL)bLeft right:(BOOL)bRight;

@end
