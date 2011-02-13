/*
 *  SettingsViewControllerDelegate.h
 *  BankBalance
 *
 *  Created by Damien Glancy on 05/05/2010.
 *  Copyright 2010 Lime Cubed. All rights reserved.
 *
 */

#import <UIKit/UIKit.h>
#import "PinViewController.h"

@protocol SettingsViewControllerDelegate;

@interface SettingsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, PinViewControllerDelegate> {
	id <SettingsViewControllerDelegate> delegate;
	UITableView *settingsTableView;
	UISwitch *pinSwitch;
}

@property(nonatomic, assign) id <SettingsViewControllerDelegate> delegate;
@property(nonatomic, retain) UITableView *settingsTableView;
@property (nonatomic, retain) UISwitch *pinSwitch;

- (void) finishedWithSettingsView:(id)sender;
- (void) setPinProtection;
@end

@protocol SettingsViewControllerDelegate
- (void) settingsViewControllerDidFinish:(SettingsViewController *) controller;
@end