//
//  FDUIMacro.h
//  Feed_iOS
//
//  Created by zhao tianwei on 2018/3/21.
//  Copyright © 2018年 Feed.com. All rights reserved.
//

#ifndef FDUIMacro_h
#define FDUIMacro_h

#define RGBCOLOR(r, g, b) [UIColor colorWithRed:(r) / 255.0 green:(g) / 255.0 blue:(b) / 255.0 alpha:1]
#define RGBACOLOR(r, g, b, a) [UIColor colorWithRed:(r) / 255.0 green:(g) / 255.0 blue:(b) / 255.0 alpha:(a)]
#define HEXRGBCOLOR(h) RGBCOLOR(((h >> 16) & 0xFF), ((h >> 8) & 0xFF), (h & 0xFF))
#define HEXRGBACOLOR(h, a) RGBACOLOR(((h >> 16) & 0xFF), ((h >> 8) & 0xFF), (h & 0xFF), a)

#define SCREEN_WIDTH    ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT    ([UIScreen mainScreen].bounds.size.height)

#define FDImage(imageName) [UIImage imageNamed:imageName]
#define FDString(key) NSLocalizedString(key, @"")
#define FDFont(x) [UIFont systemFontOfSize:x]

#endif /* FDUIMacro_h */

