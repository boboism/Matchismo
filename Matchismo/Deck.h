//
//  Deck.h
//  Matchismo
//
//  Created by Jianbo Su on 4/8/13.
//  Copyright (c) 2013 Jianbo Su. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject
- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (Card *)drawRandomCard;
@end
