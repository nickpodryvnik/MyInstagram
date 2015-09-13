//
//  MIPhotoDetailsPresenter.h
//  MyInstagram
//
//  Created by Vladimir Vasilev on 08.09.15.
//  Copyright (c) 2015 Vladimir Vasilev. All rights reserved.
//

#import "MIBasePresenter.h"
#import "MIPhotoDetailsPresenterInterface.h"
#import "MIPhotoDetailsViewControllerInterface.h"
#import "MICommentsPresenterInterface.h"
#import "MIAddCommentInteractorIOInterface.h"
#import "MIAddCommentPresenterInterface.h"
#import "MIPhotoDetailsInteractorIOInterface.h"

@interface MIPhotoDetailsPresenter : MIBasePresenter <MIPhotoDetailsPresenterInterface, MIAddCommentInteractorOutputInterface, MIAddCommentPresenterInterface, MIPhotoDetailsInteractorOutputInterface>

@property (nonatomic, weak) id<MIPhotoDetailsViewControllerInterface> controller;
@property (nonatomic, strong) id<MIAddCommentInteractorInputInterface, MIPhotoDetailsInteractorInputInterface> interactor;
@property (nonatomic, strong) id<MICommentsPresenterInterface> commentsPresenter;

@end
