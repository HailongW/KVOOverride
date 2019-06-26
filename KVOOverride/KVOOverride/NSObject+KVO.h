//
//  NSObject+KVO.h
//  KVOOverride
//
//  Created by 王海龙 on 2019/3/15.
//  Copyright © 2019 WHL. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^ObservingBlock)(id observerObject, NSString *observerKey, id OldValue, id newValue);

@interface NSObject (KVO)

- (void)addObserver:(NSObject *)observer forKey:(NSString *)key withBlock:(ObservingBlock)block;


@end

NS_ASSUME_NONNULL_END
