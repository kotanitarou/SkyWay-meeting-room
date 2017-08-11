//
// AppDelegate.h
// SkyWay-iOS-Sample
//
// Author: <a href={@docRoot}/author.html}>Author</a>
// Copyright: <a href={@docRoot}/copyright.html}>Copyright</a>
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

// ここに受け渡ししたい変数を宣言
@property (nonatomic,retain) NSString *strId;

@end

