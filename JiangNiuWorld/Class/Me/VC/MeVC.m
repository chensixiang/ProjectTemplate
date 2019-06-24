//
//  MeVC.m
//  JiangNiuWorld
//
//  Created by Js Tech on 2019/6/24.
//  Copyright © 2019 陈思祥. All rights reserved.
//

#import "MeVC.h"

@interface MeVC ()

@end

@implementation MeVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.title = @"我的";
    
    [self buildUI];
    [self buildVM];
    
}
-(void)buildUI{
    
}
-(void)buildVM{
}
/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
