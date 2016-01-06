//
//  ViewController.m
//  DrawingCode
//
//  Created by warren on 16/1/4.
//  Copyright © 2016年 warren. All rights reserved.
//

#import "ViewController.h"
#import "testView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
    testView *view = [[testView alloc]initWithFrame:CGRectMake(0, 100, 320, 500)];
    [self.view addSubview:view];
}
-(UIStatusBarStyle)preferredStatusBarStyle
{
    return UIStatusBarStyleLightContent;
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
