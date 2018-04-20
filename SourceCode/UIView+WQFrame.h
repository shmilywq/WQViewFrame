//
//  UIView+WQFrame.h
//  WQViewFrameDemo
//
//  Created by shmily on 2017/7/25.
//  Copyright © 2017年 shmily. All rights reserved.
//

#import <UIKit/UIKit.h>

/*↓↓↓↓↓↓↓↓↓↓↓↓ <屏幕frame> ↓↓↓↓↓↓↓↓↓↓↓↓*/
// 屏幕宽
#define kWQScreenWidth ([UIScreen mainScreen].bounds.size.width)
// 屏幕高
#define kWQScreenHeight ([UIScreen mainScreen].bounds.size.height)
// 状态栏高
#define kWQStatusBarHeight (kWQScreenHeight == 812.f ? 44.f : 20.f)
// 导航栏高度
#define kWQNavBarHeight 44.f
// 导航栏+状态栏高
#define kWQNavStatusHeight (kWQStatusBarHeight + kWQNavBarHeight)
// 底部安全区的高度
#define kWQBottomSafeAreaHeight (kWQScreenHeight == 812.f ? 34.f : 0.f)
// 底部标签栏高度
#define kWQTabBarHeight 49.f
// 底部标签栏+安全区高度
#define kWQTabSafeHeight (kWQTabBarHeight + kWQBottomSafeAreaHeight)
// 有导航栏时高度
#define kWQScreenHeight_Nav ([UIScreen mainScreen].bounds.size.height - kWQNavStatusHeight)
// 有标签栏时高度
#define kWQScreenHeight_Tab ([UIScreen mainScreen].bounds.size.height - kWQTabSafeHeight)
// 有导航栏和标签栏高度
#define kWQScreenHeight_NavTab ([UIScreen mainScreen].bounds.size.height - kWQNavStatusHeight - kWQTabSafeHeight)
//iPhone6的屏幕宽度的比例
#define kWQFitWidth ([UIScreen mainScreen].bounds.size.width / 375)
//iPhone6的屏幕高度的比例
#define kWQFitHeight ([UIScreen mainScreen].bounds.size.height / 667)
/*↑↑↑↑↑↑↑↑↑↑↑↑ <屏幕frame> ↑↑↑↑↑↑↑↑↑↑↑↑*/


/*↓↓↓↓↓↓↓↓↓↓↓↓ <颜色> ↓↓↓↓↓↓↓↓↓↓↓↓*/
// 数值RGB颜色 RGB(234,223,145)
#define kWQRGB(r,g,b) RGBA(r,g,b,1.0f)
// 数值RGB颜色,带透明度 RGBA(234,223,145,0.6f)
#define kWQRGBAlpha(r,g,b,a) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]
// 十六进制RGB颜色
#define kWQHexRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
// 十六进制RGB颜色,带透明度
#define kWQHexRGBAlpha(rgbValue, a) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:(a)]
// 随机颜色
#define kWQRandomColor [UIColor colorWithRed:arc4random_uniform(255)/255.0 green:arc4random_uniform(255)/255.0 blue:arc4random_uniform(255)/255.0 alpha:1]
/*↑↑↑↑↑↑↑↑↑↑↑↑ <颜色> ↑↑↑↑↑↑↑↑↑↑↑↑*/


@interface UIView (WQFrame)

// Frame
@property (nonatomic, assign) CGPoint wq_origin; // 坐标
@property (nonatomic, assign) CGSize wq_size; // 大小

// Frame Origin
@property (nonatomic, assign) CGFloat wq_x;
@property (nonatomic, assign) CGFloat wq_y;

// Frame Size
@property (nonatomic, assign) CGFloat wq_width;
@property (nonatomic, assign) CGFloat wq_height;

// Frame Borders
@property (nonatomic, assign) CGFloat wq_left;
@property (nonatomic, assign) CGFloat wq_right;
@property (nonatomic, assign) CGFloat wq_top;
@property (nonatomic, assign) CGFloat wq_bottom;

// Center Point
@property (nonatomic, assign) CGPoint wq_center;
@property (nonatomic, assign) CGFloat wq_centerX;
@property (nonatomic, assign) CGFloat wq_centerY;

// Middle Size
@property (nonatomic, assign, readonly) CGFloat wq_middleWidth;
@property (nonatomic, assign, readonly) CGFloat wq_middleHeight;
@end
