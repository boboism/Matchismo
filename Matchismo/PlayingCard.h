//
//  PlayingCard.h
//  Matchismo
//
//  Created by Jianbo Su on 4/8/13.
//  Copyright (c) 2013 Jianbo Su. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
