//
//  MenuViewController.h
//  BBS_LIXIANG
//
//  Created by apple on 14-4-5.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIViewController+MJPopupViewController.h"

#import "ASIFormDataRequest.h"
#import "InputViewController.h"  //输入搜索文字
#import "LoginViewController.h"

#import "User.h"

@interface MenuViewController : UITableViewController<InputSearchStrDelegate,LoginDelegate,UIActionSheetDelegate>

@property (weak, nonatomic) IBOutlet UIImageView *headPhotoView;
@property (weak, nonatomic) IBOutlet UIView *headView;
@property (weak, nonatomic) IBOutlet UILabel *name1Label;
@property (weak, nonatomic) IBOutlet UILabel *name2Label;

@property (nonatomic, strong) UINavigationController *navSwitchViewController;
@property (nonatomic, strong) UINavigationController *navCommonComponentVC;
@property (nonatomic, strong) UINavigationController *navMailViewController;
@property (nonatomic, strong) UINavigationController *navSearchViewController;
@property (nonatomic, strong) UINavigationController *navMyCollectViewController;
@property (nonatomic, strong) UINavigationController *navReplymeViewController;
@property (nonatomic, strong) UINavigationController *navSettingViewController;

@property (nonatomic, strong) ASIFormDataRequest *request;

@property (nonatomic, strong) InputViewController *inputSearchVC;


- (IBAction)clickButton:(id)sender;

@end
