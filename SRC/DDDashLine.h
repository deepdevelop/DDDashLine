//
//  DDDashLine.h
//  DDDashLine
//
//  Created by 61 on 15/11/10.
//  Copyright (c) 2015年 DeepDevelop. All rights reserved.
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE
@interface DDDashLine : UIView

@property (nonatomic, assign) IBInspectable CGFloat dashWidth;
@property (nonatomic, assign) IBInspectable CGFloat dashPadding;
@property (nonatomic, strong) IBInspectable UIColor *dashColor;

@end
