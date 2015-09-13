//
//  MIProfileInteractor.h
//  MyInstagram
//
//  Created by Vladimir Vasilev on 10.09.15.
//  Copyright (c) 2015 Vladimir Vasilev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MIProfileInteractorIOInterface.h"

@interface MIProfileInteractor : NSObject <MIProfileInteractorInputInterface>

@property (nonatomic, weak) id<MIProfileInteractorOutputInterface> presenter;

@end
