//
//  WeatherMAPViewController.m
//  WeatherMAP
//
//  Created by Jay Yu on 12. 12. 11..
//  Copyright (c) 2012년 TEAM H&J. All rights reserved.
//

#import "WeatherMAPViewController.h"

@interface WeatherMAPViewController ()

@end

@implementation WeatherMAPViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
        self.title = @"Weather Map";
        self.tabBarItem.image = [UIImage imageNamed:@"map_view_tab_icon"];
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
