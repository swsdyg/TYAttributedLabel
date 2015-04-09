//
//  TYTextRunProtocol.h
//  TYAttributedLabelDemo
//
//  Created by tanyang on 15/4/8.
//  Copyright (c) 2015年 tanyang. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    TYDrawAlignmentTop,     // 底部齐平 向上伸展
    TYDrawAlignmentCenter,  // 中心齐平
    TYDrawAlignmentButtom,  // 顶部齐平 向下伸展
} TYDrawAlignment;

static NSString * const kTYTextRunAttributedName = @"TYTextRunAttributedName";
@protocol TYTextRunProtocol <NSObject>

@required

/**
 *  范围
 */
- (NSRange)range;

/**
 *  添加属性到 attributedString
 *
 *  @param attributedString 属性字符串
 */
- (void)addTextRunWithAttributedString:(NSMutableAttributedString *)attributedString;

@optional

/**
 *  添加View 或 绘画 到该区域
 *
 *  @param rect 绘画区域
 */
- (void)drawRunWithRect:(CGRect)rect;

@end
