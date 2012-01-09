//
//  TwitterAppDelegate.h
//  Twitter
//
//  Created by Gurmail Singh on 09/01/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TwitterViewController;

@interface TwitterAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) TwitterViewController *viewController;

@end
