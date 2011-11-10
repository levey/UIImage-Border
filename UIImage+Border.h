//
//  UIImage+Border.h
//
//  Created by Levey on 11/10/11.
//  Copyright (c) 2011 Vanillatech. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface UIImage(Border)
- (UIImage *)imageWithColoredBorder:(NSUInteger)thickness borderColor:(UIColor *)color;
- (UIImage *)imageWithTransparentBorder:(NSUInteger)thickness;
@end
