//
//  AppDelegate.h
//  JiangNiuWorld
//
//  Created by Js Tech on 2019/6/20.
//  Copyright © 2019 陈思祥. All rights reserved.
//

#import <UIKit/UIKit.h>
#if TARGET_IPHONE_SIMULATOR
#else
#import "JPUSHService.h"
#endif
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;


@end

