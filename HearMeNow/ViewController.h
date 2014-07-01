//
//  ViewController.h
//  HearMeNow
//
//  Created by liuxin on 14-7-1.
//  Copyright (c) 2014年 liu xin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController<AVAudioPlayerDelegate, AVAudioRecorderDelegate>
@property (weak, nonatomic) IBOutlet UIButton *recordButton;
@property (weak, nonatomic) IBOutlet UIButton *playButton;
- (IBAction)recordPressed:(id)sender;

- (IBAction)playPressed:(id)sender;
@end
