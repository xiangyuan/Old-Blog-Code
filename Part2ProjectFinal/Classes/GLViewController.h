//
//  GLViewController.h
//  Part2Project
//
//  Created by jeff on 4/30/09.
//  Copyright Jeff LaMarche 2009. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <OpenGLES/EAGL.h>
#import <OpenGLES/ES1/gl.h>
#import <OpenGLES/ES1/glext.h>

@class GLView;
@interface GLViewController : UIViewController {
}
- (void)drawView:(GLView*)view;
- (void)setupView:(GLView*)view;

@end
