//
//  WeatherMAPAppDelegate.h
//  WeatherMAP
//
//  Created by Jay Yu on 12. 12. 11..
//  Copyright (c) 2012년 TEAM H&J. All rights reserved.
//

#import <UIKit/UIKit.h>

//@interface LSAppDelegate : UIResponder <UIApplicationDelegate, CLLocationManagerDelegate>
@interface WeatherMAPAppDelegate : UIResponder <UIApplicationDelegate>

- (NSDictionary *)readPOIList;

@property (strong, nonatomic) UIWindow *window;

@property (strong, readonly) NSDictionary *poiDictionary;
@property (weak, readonly) NSArray *allPOIs;
@property (weak, readonly) NSArray *libraryPOIs;
@property (weak, readonly) NSArray *restaurantPOIs;
@property (weak, readonly) NSArray *printerPOIs;

//@property (strong, readonly) CLLocation *currUserLocation;
@end
