//
//  ViewController.h
//  FaceAR_SDK_IOS_OpenFace_RunFull
//
//  Created by Keegan Ren on 7/5/16.
//  Copyright © 2016 Keegan Ren. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <opencv2/videoio/cap_ios.h>


@interface ViewController : UIViewController<CvVideoCameraDelegate>

//- (IBAction)startButtonPressed:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *start;
@property (weak, nonatomic) IBOutlet UIButton *stop;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (nonatomic, strong) CvVideoCamera* videoCamera;
@property (weak, nonatomic) IBOutlet UIImageView *adornment;
@property (weak, nonatomic) IBOutlet UIButton *choose;
//@property (weak, nonatomic) IBOutlet UIButton *start;
@end
