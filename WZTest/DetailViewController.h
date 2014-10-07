//
//  DetailViewController.h
//  WZTest
//
//  Created by Rait Avastu on 07/10/14.
//  Copyright (c) 2014 Rait Avastu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

