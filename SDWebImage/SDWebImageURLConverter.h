//
//  SDWebImageURLConverter.h
//  Auto Agent
//
//  Created by Eugene Demchenko on 12/02/2018.
//  Copyright © 2018 mercury. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol SDWebImageURLConverter <NSObject>

- (NSURL *)imageURLFromShortURL:(NSString *)shortURL;
- (NSString *)shortUrlFromImageURL:(NSURL *)imageURL;

@end
