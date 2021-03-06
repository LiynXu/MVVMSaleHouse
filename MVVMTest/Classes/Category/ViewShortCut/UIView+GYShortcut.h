//
//  UIView+GYShortcut.h
//  StockCalculate
//
//  Created by guzhiyang on 2017/7/4.
//  Copyright © 2017年 TonyPersonalProject. All rights reserved.
//

#import <UIKit/UIKit.h>

/// View属性快捷查找、设置
@interface UIView (GYShortcut)

@property(nonatomic) CGFloat left;
@property(nonatomic) CGFloat top;
@property(nonatomic) CGFloat right;
@property(nonatomic) CGFloat bottom;

@property(nonatomic) CGFloat width;
@property(nonatomic) CGFloat height;

@property(nonatomic) CGFloat centerX;
@property(nonatomic) CGFloat centerY;

@property(nonatomic,readonly) CGFloat screenX;
@property(nonatomic,readonly) CGFloat screenY;
@property(nonatomic,readonly) CGFloat screenViewX;
@property(nonatomic,readonly) CGFloat screenViewY;
@property(nonatomic,readonly) CGRect screenFrame;

@property(nonatomic) CGPoint origin;
@property(nonatomic) CGSize size;

/**
 *  从父视图删除当前子视图
 */
- (void)removeAllSubviews;

/**
 *  设置圆形UIView
 *
 *  @param isRadius YES-圆形，NO-不处理
 */

-(void)setCornerRadius:(BOOL)isRadius;

/**
 *  设置圆形
 *  @param width       边框宽度
 */
-(void)setCornerWidthRadius:(CGFloat)width;

/**
 *  设置圆形
 *
 *  @param isRadius    圆形
 *  @param width       边框宽度
 *  @param borderColor 边框颜色
 */
-(void)setCornerRadius:(BOOL)isRadius
           borderWidth:(CGFloat)width
           borderColor:(UIColor*)borderColor;

/**
 *  设置圆形
 *
 *  @param width       圆形宽度值
 *  @param bordWidth   边框宽度
 *  @param borderColor 边框颜色
 */
-(void)setCornerWidthRadius:(CGFloat)width
                borderWidth:(CGFloat)bordWidth
                borderColor:(UIColor*)borderColor;

/**
 *  获取当前cell所在的viewcontroller
 */
-(UIViewController *)curViewController;

///获取截屏
- (UIImage *)getSnapImage;

@end
