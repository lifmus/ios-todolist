//
//  TDLToDoItem.h
//  ToDoList
//
//  Created by Andrew Lin on 2/20/14.
//  Copyright (c) 2014 Currently. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TDLToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
