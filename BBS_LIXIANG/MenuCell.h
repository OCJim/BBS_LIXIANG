//
//  MenuCell.h
//  BBS_LIXIANG
//
//  Created by apple on 14-4-11.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MenuCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *titleImageView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UIImageView *edgeImageView;

@property (strong, nonatomic) NSString *imageName;
@property (strong, nonatomic) NSString *titleString;

-(void)setReadyShow;

@end
