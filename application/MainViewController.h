/*
 *  MainViewController.h
 *  BankBalance
 *
 *  Created by Damien Glancy on 05/05/2010.
 *  Copyright 2010 Lime Cubed. All rights reserved.
 *
 */

#import <UIKit/UIKit.h>
#import "PinViewController.h"

@interface MainViewController : UIViewController <PinViewControllerDelegate> {
	BOOL isAppPinSet;
}

@property(assign) BOOL isAppPinSet;

- (void) displayPinView;
- (void) displayBankBalanceView;

- (void)pinViewControllerDidFinish:(PinViewController *)controller;
- (void)markIncorrectPinTry;
- (BOOL)checkPin:(NSString *)pin;
- (NSInteger)getIncorrectPinTries;
- (void)resetIncorrectPinTries;

@end
