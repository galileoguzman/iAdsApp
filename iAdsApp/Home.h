//
//  ViewController.h
//  iAdsApp
//
//  Created by Galileo Guzman on 07/02/15.
//  Copyright (c) 2015 Galileo Guzman. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <iAd/iAd.h>

@interface Home : UIViewController<ADBannerViewDelegate>
{
    ADBannerView *adView;
    BOOL bannerIsVisible;
}


@end

