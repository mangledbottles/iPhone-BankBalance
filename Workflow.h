/*
 *  Workflow.h
 *  BankBalance
 *
 *  Created by Damien Glancy on 05/05/2010.
 *  Copyright 2010 Lime Cubed. All rights reserved.
 *
 */

#import <Foundation/Foundation.h>


@interface Workflow : NSObject {
	
}

-(NSData*) executeRequest:(NSURL*)url requestBody:(NSString*)requestBody HTTPMethod:(NSString*)method;

@end
