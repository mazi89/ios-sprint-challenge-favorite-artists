//
//  Artist.h
//  FavoriteArtists
//
//  Created by Karen Rodriguez on 5/15/20.
//  Copyright © 2020 Hector Ledesma. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HLOArtist : NSObject

@property (nonatomic, readonly, copy) NSString *artistName;
@property (nonatomic, readonly, copy) NSString *artistBiography;
@property (nonatomic, readonly) int yearFormed;

- (instancetype)initWithName:(NSString *)artistName
             artistBiography:(NSString *)artistBiography
                  yearFormed:(int)yearFormed;


@end

NS_ASSUME_NONNULL_END
