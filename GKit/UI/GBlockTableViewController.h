//
// Created by Cao Hua <glare.ch@gmail.com> on 2012
// Copyright 2012 GKit
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import "GTableViewController.h"

@interface GBlockTableViewController : GTableViewController

//block
typedef NSInteger (^BlockNumberOfSections)(UITableView *);
typedef NSInteger (^BlockNumberOfRowsInSection)(UITableView *, NSInteger);
typedef UITableViewCell *(^BlockCellForRowAtIndexPath)(UITableView *, NSIndexPath *);
typedef void (^BlockDidSelectRowAtIndexPath)(UITableView *, NSIndexPath *);

@property (nonatomic, copy) BlockNumberOfSections blockNumberOfSections;
@property (nonatomic, copy) BlockNumberOfRowsInSection blockNumberOfRowsInSection;
@property (nonatomic, copy) BlockCellForRowAtIndexPath blockCellForRowAtIndexPath;
@property (nonatomic, copy) BlockDidSelectRowAtIndexPath blockDidSelectRowAtIndexPath;


@end
