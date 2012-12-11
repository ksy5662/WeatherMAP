//
//  LSLocation.h
//  WeatherMAP
//
//  Created by Jay Yu on 12. 12. 11..
//  Copyright (c) 2012년 TEAM H&J. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>

@interface LSLocation : NSObject <MKAnnotation>

@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;
@property (copy) NSString *title;
@property (copy) NSString *subtitle;
@property (copy) NSString *location;
@property (strong, readonly) NSString *addressOfLocation;

@property CLLocationDegrees longitude;
@property CLLocationDegrees latitude;

@property (strong, readonly) UIImage *annotationImage;


@end
