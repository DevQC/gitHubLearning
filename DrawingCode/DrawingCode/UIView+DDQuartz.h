//
//  UIView+DDQuartz.h
//  DrawingCode
//
//  Created by warren on 16/1/4.
//  Copyright © 2016年 warren. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface UIView (DDQuartz)

//tools
-(UIImage *)getImage;




//矩形
-(void)drawRectangle:(CGRect)rect;
//圆角矩形
-(void)drawRectangle:(CGRect)rect withRadius:(float)radius;
//画多边形
//pointArray = @[[NSValue valueWithCGPoint:CGPointMake(200, 400)]];
-(void)drawPolygon:(NSArray *)pointArray;
//圆形
-(void)drawCircleWithCenter:(CGPoint)center
                     radius:(float)radius;
//曲线
-(void)drawCurveFrom:(CGPoint)startPoint
                  to:(CGPoint)endPoint
       controlPoint1:(CGPoint)controlPoint1
       controlPoint2:(CGPoint)controlPoint2;

//弧线
-(void)drawArcFromCenter:(CGPoint)center
                  radius:(float)radius
              startAngle:(float)startAngle
                endAngle:(float)endAngle
               clockwise:(BOOL)clockwise;
//扇形
-(void)drawSectorFromCenter:(CGPoint)center
                     radius:(float)radius
                 startAngle:(float)startAngle
                   endAngle:(float)endAngle
                  clockwise:(BOOL)clockwise;

//直线
-(void)drawLineFrom:(CGPoint)startPoint
                 to:(CGPoint)endPoint;

/*
 折线，连续直线
 pointArray = @[[NSValue valueWithCGPoint:CGPointMake(200, 400)]];
 */
-(void)drawLines:(NSArray *)pointArray;

//画虚线
-(void)drawDottedLineFrom:(CGPoint)startPoint
                       to:(CGPoint)endPoint
                lineColor:(UIColor*)color
                 dotWidth:(CGFloat)margin;

-(CGMutablePathRef)pathwithFrame:(CGRect)frame withRadius:(float)radius;


//绘制文字
-(void)drawWordWithContent:(NSString *)content;

//绘制图像
-(void)drawImageWithUIImage:(UIImage *)image Rect:(CGRect)rect;



@end
