//
//  TSLMenuView.h
//  popView
//
//  Created by BackNotGod on 16/9/15.
//  Copyright © 2016年 BackNotGod. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TSLMenuManager.h"

@interface TSLMenuView : UIView

@property(weak,nonatomic)id<TSLMenuViewDataSource> dataSource;
@property(weak,nonatomic)id<TSLMenuViewDataDelegate> delegate;


@property(nonatomic)CGPoint cornerPoint;

@property(nonatomic)TSPOPOPTION option;

@property(nonatomic,strong)UIView* mask;

@end
