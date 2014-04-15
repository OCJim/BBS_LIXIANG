//
//  MenuCell.m
//  BBS_LIXIANG
//
//  Created by apple on 14-4-11.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#import "MenuCell.h"

@implementation MenuCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

-(void)setReadyShow
{
    [_titleImageView setImage:[UIImage imageNamed:_imageName]];
    [_titleLabel setText:_titleString];
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
