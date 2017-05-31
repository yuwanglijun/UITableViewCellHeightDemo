//
//  FirstViewController.h
//  TableViewCellHeight
//
//  Created by dulj on 17/5/31.
//  Copyright © 2017年 Lenovo. All rights reserved.
//

#import "BasicViewController.h"

@interface FirstViewController : BasicViewController<UITableViewDelegate,UITableViewDataSource>
@property (weak, nonatomic) IBOutlet UITableView *FirstTableView;

@end
