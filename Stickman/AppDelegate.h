//
//  AppDelegate.h
//  Stickman
//
//  Created by Ignazio Calò on 1/30/12.
//  Copyright Ignazio Calò 2012. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
