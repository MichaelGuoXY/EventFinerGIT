//
//  MyEventInfo.h
//  MyEventFinder
//
//  Created by Guo Xiaoyu on 10/12/15.
//  Copyright © 2015 Xiaoyu Guo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MyEventInfo : NSObject
//<NSCoding> {
//    NSString *nameOfEvent;
//    NSString *timeOfEvent;
//    NSString *dateOfEvent;
//    NSString *locationOfEvent;
//    NSString *introOfEvent;
//    NSString *posterOfEvent;
//    NSNumber *lngOfEvent;
//    NSNumber *latOfEvent;
//    NSData *imageOfEvent;
//    NSData *imageOfPoster;
//    NSString *tagOfEvent;
//    NSArray *participantsOfEvent;
//}

@property (nonatomic, strong) NSString *nameOfEvent;
@property (nonatomic, strong) NSNumber *startingTime;
@property (nonatomic, strong) NSNumber *endingTime;
@property (nonatomic, strong) NSString *locationOfEvent;
@property (nonatomic, strong) NSString *introOfEvent;
@property (nonatomic, strong) NSNumber *lngOfEvent;
@property (nonatomic, strong) NSNumber *latOfEvent;
@property (nonatomic, strong) NSArray *imageOfEvent;
@property (nonatomic, strong) NSString *primaryTag;
@property (nonatomic, strong) NSArray *secondaryTag;
@property (nonatomic, strong) NSString *restricttionOfEvent;
@property (nonatomic, strong) NSDictionary *participantsOfEvent;
@property (nonatomic, strong) NSNumber *postDate;
@property (nonatomic, strong) NSNumber *postTime;
@property (nonatomic, strong) NSString *authorName;
@property (nonatomic, strong) NSString *authorProfileImg;
@property (nonatomic, strong) NSNumber *numberOfViewed;

/*
 events {
	String (timestamp): {
 nameOfEvent: String,
 startingDate: Number, // year + month + day
 endingDate: Number,
 startingTime: Number, // hour + minute
 endingTime: Number,
 latOfEvent: Number,
 lngOfEvent: Number,
 locationOfEvent: String,
 primaryTag: String,
 secondaryTag: [0: String, 1: String, ...],
 introOfEvent: String,
 restrictionOfEvent: String,
 imageOfEvent: [0: String, 1: String, ...],
 
 postDate: Number,
 postTime: Number,
 authorName: String,
 authorProfileImg: String,
 participantsOfEvent: [String (timestamp) {
 username: String,
 usrProfileImage: String
 }, ...]
	}
 }

 */
@end
