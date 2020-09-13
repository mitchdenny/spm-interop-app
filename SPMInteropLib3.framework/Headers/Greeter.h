//
//  Greeter.h
//  SPM Interop Lib3
//
//  Created by Mitch Denny on 12/9/20.
//  Copyright © 2020 Mitch Denny. All rights reserved.
//

#import <Foundation/Foundation.h>
@import SPMInteropLib1;

NS_ASSUME_NONNULL_BEGIN

@interface Greeter : NSObject
- (OutputTypeFromLib1*)processData:(InputTypeFromLib1*) input;
@end

NS_ASSUME_NONNULL_END
