//
//  CommentViewModel.h
//  Ash_AWord
//
//  Created by xmfish on 15/6/5.
//  Copyright (c) 2015年 ash. All rights reserved.
//

#import "BaseViewModel.h"

@interface CommentInfoViewModel : BaseViewModel
@property (nonatomic, strong) NSString *commentId;
@property (nonatomic, strong) NSString *ownerId;
@property (nonatomic, strong) NSString *ownerFigureurl;
@property (nonatomic, strong) NSString *ownerName;
@property (nonatomic, strong) NSString *content;
@property (nonatomic, strong) NSString *createTime;
@property (nonatomic, strong) NSString *toUserId;
@property (nonatomic, strong) NSString *toUserName;
@property (nonatomic, assign) NSInteger status;//状态。0：未读，1：已读
@property (nonatomic, assign) CommentType commentType;
@property (nonatomic, assign) NSInteger recordId;
@end
@interface CommentViewModel : BaseViewModel

@property (nonatomic, strong)NSArray* commentInfoArr;

+(PropertyEntity*)requireAddCommentWithReconrdId:(NSInteger)recordId withContent:(NSString*)content WithType:(CommentType)commentType withToUid:(NSString*)otherId;
+(PropertyEntity*)requireDelCommentWithCommentId:(NSInteger)commentId;

+(PropertyEntity*)requireLoadCommentWithRecordId:(NSInteger)recordId withPage:(NSInteger)page withPage_size:(NSInteger)page_size WithType:(CommentType)commentType;

+(PropertyEntity*)requireLoadMyCommentWithPage:(NSInteger)page withPage_size:(NSInteger)page_size;
+(PropertyEntity*)requireReadCommentWithCommentId:(NSInteger)commentId;
+(PropertyEntity*)requireReadAllComment;
@end
