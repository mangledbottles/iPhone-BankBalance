/*
 *  ProgressBarUpdate.h
 *  BankBalance
 *
 *  Created by Damien Glancy on 05/05/2010.
 *  Copyright 2010 Lime Cubed. All rights reserved.
 *
 */

#import <Foundation/Foundation.h>


@interface ProgressBarUpdate : NSObject {
	NSString *message;
	NSInteger progressPercentage;
}

@property(nonatomic, retain) NSString *message;
@property(nonatomic, assign) NSInteger progressPercentage;

- (float)getProgressPercentageAsFloat;

@end
