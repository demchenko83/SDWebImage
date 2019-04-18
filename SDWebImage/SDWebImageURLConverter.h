//
//  SDWebImageURLConverter.h
//  SDWebImage
//
//  Created by Eugene Demchenko on 18/04/2019.
//  Copyright © 2019 mercury. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol SDWebImageURLConverter <NSObject>

- (nullable NSURL *)imageURLFromShortURL:(nullable NSString *)shortURL;
- (nullable NSString *)shortUrlFromImageURL:(nullable NSURL *)imageURL;

@end
