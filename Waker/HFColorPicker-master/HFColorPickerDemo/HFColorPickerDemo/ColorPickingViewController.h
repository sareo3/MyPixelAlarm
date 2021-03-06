//
//  DemoTableViewController.h
//  HFColorPickerDemo
//
//  Created by Hendrik Frahmann on 30.04.14.
//  Copyright (c) 2014 Hendrik Frahmann. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HFColorPickerView.h"

@interface ColorPickingViewController : UITableViewController <HFColorPickerViewDelegate>

@property (nonatomic, strong) IBOutlet UILabel* labelColor;
@property (nonatomic, strong) IBOutlet HFColorPickerView* colorPickerView;
@property UIColor * colorChosen;
@property NSString * colorInText;
@end
