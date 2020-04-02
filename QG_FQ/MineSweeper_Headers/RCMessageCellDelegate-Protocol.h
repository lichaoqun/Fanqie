//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, RCMessageModel, UIView;

@protocol RCMessageCellDelegate <NSObject>

@optional
- (void)didTapNeedReceiptView:(RCMessageModel *)arg1;
- (void)didTapCustomerService:(RCMessageModel *)arg1 RobotResoluved:(_Bool)arg2;
- (void)didTapCancelUploadButton:(RCMessageModel *)arg1;
- (void)didTapReceiptCountView:(RCMessageModel *)arg1;
- (void)didTapmessageFailedStatusViewForResend:(RCMessageModel *)arg1;
- (void)didLongTouchMessageCell:(RCMessageModel *)arg1 inView:(UIView *)arg2;
- (void)didLongPressCellPortrait:(NSString *)arg1;
- (void)didTapCellPortrait:(NSString *)arg1;
- (void)didTapPhoneNumberInMessageCell:(NSString *)arg1 model:(RCMessageModel *)arg2;
- (void)didTapUrlInMessageCell:(NSString *)arg1 model:(RCMessageModel *)arg2;
- (void)didTapMessageCell:(RCMessageModel *)arg1;
@end

