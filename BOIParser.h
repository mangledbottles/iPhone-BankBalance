/*
 *  BOIParser.h
 *  BankBalance
 *
 *  Created by Damien Glancy on 05/05/2010.
 *  Copyright 2010 Lime Cubed. All rights reserved.
 *
 */

#import <Foundation/Foundation.h>
#import "Document.h"

@interface BOIParser : NSObject {

}

+(int) getChallenge: (Document *)htmlDocument;
+(NSString *) getPinDigit1: (Document *)htmlDocument;
+(NSString *) getPinDigit2: (Document *)htmlDocument;
+(NSString *) getPinDigit3: (Document *)htmlDocument;
+(NSString *) returnDigitBeingRequested: (NSString *) str;
+(NSArray *) getAccountList: (Document *)htmlDocument;
+(BOOL) stringIsCreditBalance:(NSString *)string;
+(NSString *) checkForBackendError: (Document *)htmlDocument;
+(BOOL) checkForSecurityPage:(Document *)htmlDocument;

@end
