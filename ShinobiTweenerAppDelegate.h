//
//  ShinobiTweenerAppDelegate.h
//  ShinobiTweener
//
//  Created by lznpde on 12/06/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ShinobiTweener.h"

@interface ShinobiTweenerAppDelegate : NSObject <UIApplicationDelegate> {
    
    float aFloat;
    
    BOOL isTweenFinished;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

- (void) tweenUpdate;
- (void) tweenLoop;
- (void) tweenFinish;
@end
