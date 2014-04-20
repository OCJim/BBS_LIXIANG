//
//  MailViewController.h
//  BBS_LIXIANG
//
//  Created by apple on 14-4-6.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AFNetworking.h"
#import "Mail.h"


@interface MailViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>

@property (nonatomic, retain) UITableView *mailsTableView;

@property (nonatomic, retain) NSMutableArray *mailsArr;

@property (nonatomic, retain) Mail *selectMail;

@end
