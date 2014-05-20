//
//  SUViewController.h
//  Shorty
//
//  Created by Callum D E Smith on 20/05/2014.
//  Copyright (c) 2013 New-Reign Interactive. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SUViewController : UIViewController <UIWebViewDelegate,
                                                NSURLConnectionDelegate,
                                                NSURLConnectionDataDelegate>

@property (weak,nonatomic) IBOutlet UITextField *urlField;
@property (weak,nonatomic) IBOutlet UIWebView *webView;

@property (weak,nonatomic) IBOutlet UIBarButtonItem *shortenButton;
@property (weak,nonatomic) IBOutlet UIBarButtonItem *shortLabel;
@property (weak,nonatomic) IBOutlet UIBarButtonItem *clipboardButton;

- (IBAction)loadLocation:(id)sender;
- (IBAction)shortenURL:(id)sender;
- (IBAction)clipboardURL:(id)sender;

@end
