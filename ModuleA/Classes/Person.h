//
//  Person.h
//  ModuleA
//
//  Created by 丁灿 on 2018/2/28.
//  Copyright © 2018年 丁灿. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *gender;

- (NSString *)info;
@end
