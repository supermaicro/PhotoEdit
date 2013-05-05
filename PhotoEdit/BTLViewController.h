//
//  BTLViewController.h
//  PhotoEdit
//
//  Created by Benedikt Lotter on 5/4/13.
//  Copyright (c) 2013 Benedikt Lotter. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>

@interface BTLViewController : UIViewController <MFMessageComposeViewControllerDelegate,MFMailComposeViewControllerDelegate>

@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end
