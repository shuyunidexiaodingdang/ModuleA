//
//  Person.m
//  ModuleA
//
//  Created by 丁灿 on 2018/2/28.
//  Copyright © 2018年 丁灿. All rights reserved.
//

#import "Person.h"

@implementation Person
- (NSString *)info {
    return [NSString stringWithFormat:@"name = %@, gender = %@", self.name, self.gender];
}
@end
