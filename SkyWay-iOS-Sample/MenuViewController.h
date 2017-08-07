//
// MenuViewController.h
// SkyWay-iOS-Sample
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface MenuViewController : UIViewController
{
    IBOutlet UISwitch *ledLightSwitch;
}

-(IBAction)changeSwitch;

@end
