//
//  testView.m
//  DrawingCode
//
//  Created by warren on 16/1/4.
//  Copyright © 2016年 warren. All rights reserved.
//

#import "testView.h"
#import "UIView+DDQuartz.h"

@implementation testView

-(instancetype)initWithFrame:(CGRect)frame
{
    if (self = [super initWithFrame:frame]) {
        
        self.backgroundColor = [UIColor lightGrayColor];
    }
    
    return self;
}

-(void)drawRect:(CGRect)rect
{
    [self drawDottedLineFrom:CGPointMake(100, 100) to:CGPointMake(200, 450) lineColor:[UIColor redColor] dotWidth:2];
    
    [self drawDottedLineFrom:CGPointMake(100, 100) to:CGPointMake(100, 450) lineColor:[UIColor redColor] dotWidth:2];
}


@end
