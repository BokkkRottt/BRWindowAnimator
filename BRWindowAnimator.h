//
//  BRWindowAnimator.h
//  AnyShareManager
//
//  Created by Yang on 11/24/15.
//  Copyright © 2015 sgyang. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface BRWindowAnimator : NSObject
// flip activeWindow to targetWindow
- (void) flip:(NSWindow *)activeWindow to:(NSWindow *)targetWindow;

@property BOOL flipRight; // YES -rotation right
@property double duration; // time for animation, default value 2.0
@end
