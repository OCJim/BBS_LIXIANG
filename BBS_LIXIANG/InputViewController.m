//
//  InputViewController.m
//  BBS_LIXIANG
//
//  Created by apple on 14-4-10.
//  Copyright (c) 2014年 apple. All rights reserved.
//

#import "InputViewController.h"

@interface InputViewController ()

@end

@implementation InputViewController

-(void)dealloc
{
    _searchTxtField = nil;
}

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    //[self.view setCenter:CGPointMake(160, 200)];
}

- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event
{
    [_searchTxtField resignFirstResponder];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)startSearch:(id)sender {
    
    [_delegate pushToSearchViewWithValue:_searchTxtField.text];
    //[self dismissPopupViewControllerWithanimationType:MJPopupViewAnimationSlideBottomBottom];
}

- (IBAction)cancelSearch:(id)sender
{
    [_delegate cancelSearchView];
}

@end
