//
//  LHBaseViewController.h
//  LaHuo
//
//  Created by ljh on 14-10-23.
//  Copyright (c) 2014年 LaHuo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BaseViewController : UIViewController <UITextViewDelegate>

@property (assign, nonatomic) BOOL isVedio;


-(void)popToVC;

- (void)forbidLeftSlide;

- (void)dealloc;
@end
