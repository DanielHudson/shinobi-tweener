//
//  ShinobiTweenerAppDelegate.m
//  ShinobiTweener
//
//  Created by lznpde on 12/06/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "ShinobiTweenerAppDelegate.h"

@implementation ShinobiTweenerAppDelegate


@synthesize window=_window;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    // Override point for customization after application launch.
    aFloat = 0.0f;
    
    // [SC] Start Loop
    isTweenFinished = NO;
    [self tweenLoop];
    
    // [SC] Tween a float
    [[ShinobiTweener sharedTweener] addTweenToFloat:&aFloat finish:999.0f timeDuration:2.0f transition:TWEENER_TRANSITION_BACK_EASE_IN_OUT onComplete:@selector(tweenFinish) forObject:self];
    
    [self.window makeKeyAndVisible];
    return YES;
}

- (void)tweenUpdate
{
    if(!isTweenFinished)
    {
        [[ShinobiTweener sharedTweener] update];
        NSLog(@"aFloat: %f", aFloat);
        
        [self tweenLoop];
    }
}
- (void)tweenLoop
{
    [NSTimer scheduledTimerWithTimeInterval:(1.0f / 30.0f) target:self selector:@selector(tweenUpdate) userInfo:nil repeats:NO];
}

- (void)tweenFinish
{
    isTweenFinished = YES;
}

- (void)applicationWillResignActive:(UIApplication *)application
{
    /*
     Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
     Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
     */
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    /*
     Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later. 
     If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
     */
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    /*
     Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
     */
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    /*
     Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
     */
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    /*
     Called when the application is about to terminate.
     Save data if appropriate.
     See also applicationDidEnterBackground:.
     */
}

- (void)dealloc
{
    [_window release];
    [super dealloc];
}

@end
