//
//  UIView+WQFrame.m
//  WQViewFrameDemo
//
//  Created by shmily on 2017/7/25.
//  Copyright © 2017年 shmily. All rights reserved.
//

#import "UIView+WQFrame.h"

@implementation UIView (WQFrame)

#pragma mark - Frame
- (void)setWq_origin:(CGPoint)wq_origin
{
    CGRect newFrame = self.frame;
    newFrame.origin = wq_origin;
    self.frame = newFrame;
}
- (CGPoint)wq_origin
{
    return self.frame.origin;
}
- (void)setWq_size:(CGSize)wq_size
{
    CGRect newFrame = self.frame;
    newFrame.size = wq_size;
    self.frame = newFrame;
}
- (CGSize)wq_size
{
    return self.frame.size;
}

#pragma mark - Frame Origin
- (void)setWq_x:(CGFloat)wq_x
{
    CGRect newFrame = self.frame;
    newFrame.origin.x = wq_x;
    self.frame = newFrame;
}
- (CGFloat)wq_x
{
    return self.frame.origin.x;
}
- (void)setWq_y:(CGFloat)wq_y
{
    CGRect newFrame = self.frame;
    newFrame.origin.y = wq_y;
    self.frame = newFrame;
}
- (CGFloat)wq_y
{
    return self.frame.origin.y;
}

#pragma mark - Frame Size
- (void)setWq_width:(CGFloat)wq_width
{
    CGRect newFrame = self.frame;
    newFrame.size.width = wq_width;
    self.frame = newFrame;
}
- (CGFloat)wq_width
{
    return self.frame.size.width;
}
- (void)setWq_height:(CGFloat)wq_height
{
    CGRect newFrame = self.frame;
    newFrame.size.height = wq_height;
    self.frame = newFrame;
}
- (CGFloat)wq_height
{
    return self.frame.size.height;
}

#pragma mark - Frame Borders
- (void)setWq_top:(CGFloat)wq_top
{
    self.wq_y = wq_top;
}
- (CGFloat)wq_top
{
    return self.wq_y;
}
- (void)setWq_right:(CGFloat)wq_right
{
    self.wq_x = wq_right - self.wq_width;
}
- (CGFloat)wq_right
{
    return self.wq_x + self.wq_width;
}
- (void)setWq_bottom:(CGFloat)wq_bottom
{
    self.wq_y = wq_bottom - self.wq_height;
}
- (CGFloat)wq_bottom
{
    return self.wq_y + self.wq_height;
}
- (void)setWq_left:(CGFloat)wq_left
{
    self.wq_x = wq_left;
}
- (CGFloat)wq_left
{
    return self.wq_x;
}

#pragma mark - Center Point
- (void)setWq_center:(CGPoint)wq_center
{
    self.wq_x = wq_center.x - self.wq_middleWidth;
    self.wq_y = wq_center.y - self.wq_middleHeight;
}
- (CGPoint)wq_center
{
    return CGPointMake(self.wq_x + self.wq_middleWidth, self.wq_y + self.wq_middleHeight);
}
- (void)setWq_centerX:(CGFloat)wq_centerX
{
    self.wq_center = CGPointMake(wq_centerX, self.wq_centerY);
}
- (CGFloat)wq_centerX
{
    return self.wq_center.x;
}
- (void)setWq_centerY:(CGFloat)wq_centerY
{
    self.wq_center = CGPointMake(self.wq_centerX, wq_centerY);
}
- (CGFloat)wq_centerY
{
    return self.wq_center.y;
}
#pragma mark - Middle Size
- (CGFloat)wq_middleWidth
{
    return self.wq_width / 2;
}
- (CGFloat)wq_middleHeight
{
    return self.wq_height / 2;
}

@end
