//
//  AppDelegate.h
//  ChatBubble
//
//  Created by WeKanCode on 19/05/17.
//  Copyright © 2017 nsdecode. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

