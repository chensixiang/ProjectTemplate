//
//  Api.h
//  renfang
//
//  Created by FLY_AY on 16/6/23.
//  Copyright © 2016年 FLY_AY. All rights reserved.
//

#ifndef Api_h
#define Api_h

#ifdef DEBUG

//#   define ISHome_Host @"119.23.146.101:8080/cmp"
#   define ISHome_Host @"192.168.111.106:8080/cmp"

#define JGPushIsProduction 0

#else
//#   define ISHome_Host @"192.168.111.106:8080/cmp"

#   define ISHome_Host @"cmp.ishanghome.com/cmp"//192.168.111.10/cmp


#define AppStoreUrl @"itms-apps://itunes.apple.com/cn/app/i%E5%B0%9A%E5%AF%B9%E8%AE%B2/id1240122374?mt=8"
#define JGPushIsProduction 0

#endif


#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)//屏幕宽
#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)//屏幕高

#define degreesToRadians(x) (M_PI*(x)/180.0) //把角度转换成PI的方式

#define TAG @"tag"
#define MESSAGE @"Message"
#define RESULT @"result"


#endif /* Api_h */
