//
//  AppDelegate.h
//  LearnGit
//
//  Created by 印林泉 on 2017/9/8.
//  Copyright © 2017年 亿宝贷. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

