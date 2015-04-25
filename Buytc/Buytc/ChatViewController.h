//
//  RootViewController.h
//  UUChatTableView
//
//  Created by shake on 15/1/4.
//  Copyright (c) 2015年 uyiuyao. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, ChatMode) {
    ChatModeBot = 100,
    ChatModeOneToOne
};

@interface ChatViewController : UIViewController
- (instancetype)initWithMode:(ChatMode)chatMode;
@end
