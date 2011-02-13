/*
 *  ProgressBarView.h
 *  BankBalance
 *
 *  Created by Damien Glancy on 05/05/2010.
 *  Copyright 2010 Lime Cubed. All rights reserved.
 *
 */

#import <UIKit/UIKit.h>


@interface ProgressBarView : UIView {
	UILabel *label;
	UIProgressView *progressBar;
}

@property(nonatomic, retain) UILabel *label;
@property(nonatomic, retain) UIProgressView *progressBar;

@end
