//
//  NSObject+KVO.m
//  KVOOverride
//
//  Created by 王海龙 on 2019/3/15.
//  Copyright © 2019 WHL. All rights reserved.
//

#import "NSObject+KVO.h"
#import <objc/runtime.h>
#import <objc/message.h>

@implementation NSObject (KVO)


- (void)addObserver:(NSObject *)observer forKey:(NSString *)key withBlock:(ObservingBlock)block {
    
}

@end
