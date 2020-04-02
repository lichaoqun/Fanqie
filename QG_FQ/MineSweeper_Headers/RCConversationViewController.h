//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCBaseViewController.h"

#import "RCAdminEvaluationViewDelegate-Protocol.h"
#import "RCCSAlertViewDelegate-Protocol.h"
#import "RCChatSessionInputBarControlDataSource-Protocol.h"
#import "RCChatSessionInputBarControlDelegate-Protocol.h"
#import "RCMessageCellDelegate-Protocol.h"
#import "RCPublicServiceMessageCellDelegate-Protocol.h"
#import "RCRobotEvaluationViewDelegate-Protocol.h"
#import "RCTypingStatusDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSTimer, RCCSAlertView, RCCSEvaluateView, RCChatSessionInputBarControl, RCConversationCollectionViewHeader, RCConversationViewLayout, RCCustomerServiceConfig, RCCustomerServiceInfo, RCDiscussion, RCEmojiBoardView, RCMessage, RCMessageModel, RCPluginBoardView, RCRecallMessageImageView, UIButton, UICollectionView, UIImageView, UILabel, UITapGestureRecognizer, UIToolbar, UIView;
@protocol OS_dispatch_queue;

@interface RCConversationViewController : RCBaseViewController <RCMessageCellDelegate, RCChatSessionInputBarControlDelegate, UINavigationControllerDelegate, RCPublicServiceMessageCellDelegate, RCTypingStatusDelegate, UIAlertViewDelegate, RCAdminEvaluationViewDelegate, RCRobotEvaluationViewDelegate, RCCSAlertViewDelegate, UIActionSheetDelegate, RCChatSessionInputBarControlDataSource, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, UIScrollViewDelegate>
{
    _Bool _enableUnreadMessageIcon;
    _Bool _enableNewComingMessageIcon;
    _Bool _displayUserNameInCell;
    _Bool _enableContinuousReadUnreadVoice;
    _Bool _enableSaveNewPhotoToLocalSystem;
    _Bool _isIndicatorLoading;
    _Bool _isConversationAppear;
    _Bool _isTakeNewPhoto;
    _Bool _isNeedScrollToBottom;
    _Bool _isChatRoomHistoryMessageLoaded;
    _Bool _isClear;
    _Bool _loadHistoryMessageFromRemote;
    _Bool _humanEvaluated;
    _Bool _hasReceiveNewMessage;
    _Bool _isContinuousPlaying;
    _Bool _isLoadingHistoryMessage;
    _Bool _isNeedLoadMessageWhenScroll;
    _Bool _allMessagesAreLoaded;
    _Bool _isTouchScrolled;
    _Bool _isFirstLoadMessage;
    _Bool _enableCustomerServiceOverTimeRemind;
    int _defaultHistoryMessageCountOfChatRoom;
    int _customerServiceReciveMessageOverTimeRemindTimer;
    int _customerServiceSendMessageOverTimeRemindTimer;
    unsigned long long _conversationType;
    NSString *_targetId;
    NSString *_userName;
    long long _locatedMessageSentTime;
    NSMutableArray *_conversationDataRepository;
    UICollectionView *_conversationMessageCollectionView;
    NSArray *_displayConversationTypeArray;
    long long _unReadMessage;
    UILabel *_unReadMessageLabel;
    UIButton *_unReadButton;
    UILabel *_unReadNewMessageLabel;
    RCChatSessionInputBarControl *_chatSessionInputBarControl;
    long long _defaultInputType;
    UIView *_extensionView;
    UIToolbar *_messageSelectionToolbar;
    RCCustomerServiceInfo *_csInfo;
    double _csEvaInterval;
    RCConversationCollectionViewHeader *_collectionViewHeader;
    RCConversationViewLayout *_customFlowLayout;
    long long _currentBottomBarStatus;
    RCMessageModel *_longPressSelectedModel;
    RCDiscussion *_currentDiscussion;
    UIImageView *_unreadRightBottomIcon;
    NSMutableArray *_unreadNewMsgArr;
    UIView *_typingStatusView;
    UILabel *_typingStatusLabel;
    NSObject<OS_dispatch_queue> *_rcTypingMessageQueue;
    NSMutableArray *_typingMessageArray;
    NSString *_typingUserStr;
    NSString *_navigationTitle;
    UITapGestureRecognizer *_resetBottomTapGesture;
    long long _recordTime;
    RCCustomerServiceConfig *_csConfig;
    RCCSAlertView *_csAlertView;
    NSDate *_csEnterDate;
    unsigned long long _currentServiceStatus;
    RCRecallMessageImageView *_rcImageProressView;
    NSArray *_unreadMentionedMessages;
    NSObject<OS_dispatch_queue> *_appendMessageQueue;
    NSArray *_extensionMessageCellInfoList;
    NSMutableDictionary *_cellMsgDict;
    NSTimer *_notReciveMessageAlertTimer;
    NSTimer *_notSendMessageAlertTimer;
    RCMessage *_firstUnreadMessage;
    NSString *_customerServiceReciveMessageOverTimeRemindContent;
    NSString *_customerServiceSendMessageOverTimeRemindContent;
    NSString *_customerServiceQuitMsg;
    RCCSEvaluateView *_evaluateView;
    long long _showUnreadViewMessageId;
    NSArray *_enabledReadReceiptMessageTypeList;
    RCMessageModel *_currentSelectedModel;
    NSArray *_leftBarButtonItems;
    NSArray *_rightBarButtonItems;
}

@property(retain, nonatomic) NSArray *rightBarButtonItems; // @synthesize rightBarButtonItems=_rightBarButtonItems;
@property(retain, nonatomic) NSArray *leftBarButtonItems; // @synthesize leftBarButtonItems=_leftBarButtonItems;
@property(retain, nonatomic) RCMessageModel *currentSelectedModel; // @synthesize currentSelectedModel=_currentSelectedModel;
@property(copy, nonatomic) NSArray *enabledReadReceiptMessageTypeList; // @synthesize enabledReadReceiptMessageTypeList=_enabledReadReceiptMessageTypeList;
@property(nonatomic) long long showUnreadViewMessageId; // @synthesize showUnreadViewMessageId=_showUnreadViewMessageId;
@property(retain, nonatomic) RCCSEvaluateView *evaluateView; // @synthesize evaluateView=_evaluateView;
@property(copy, nonatomic) NSString *customerServiceQuitMsg; // @synthesize customerServiceQuitMsg=_customerServiceQuitMsg;
@property(copy, nonatomic) NSString *customerServiceSendMessageOverTimeRemindContent; // @synthesize customerServiceSendMessageOverTimeRemindContent=_customerServiceSendMessageOverTimeRemindContent;
@property(nonatomic) int customerServiceSendMessageOverTimeRemindTimer; // @synthesize customerServiceSendMessageOverTimeRemindTimer=_customerServiceSendMessageOverTimeRemindTimer;
@property(copy, nonatomic) NSString *customerServiceReciveMessageOverTimeRemindContent; // @synthesize customerServiceReciveMessageOverTimeRemindContent=_customerServiceReciveMessageOverTimeRemindContent;
@property(nonatomic) int customerServiceReciveMessageOverTimeRemindTimer; // @synthesize customerServiceReciveMessageOverTimeRemindTimer=_customerServiceReciveMessageOverTimeRemindTimer;
@property(nonatomic) _Bool enableCustomerServiceOverTimeRemind; // @synthesize enableCustomerServiceOverTimeRemind=_enableCustomerServiceOverTimeRemind;
@property(nonatomic) _Bool isFirstLoadMessage; // @synthesize isFirstLoadMessage=_isFirstLoadMessage;
@property(nonatomic) _Bool isTouchScrolled; // @synthesize isTouchScrolled=_isTouchScrolled;
@property(nonatomic) _Bool allMessagesAreLoaded; // @synthesize allMessagesAreLoaded=_allMessagesAreLoaded;
@property(retain, nonatomic) RCMessage *firstUnreadMessage; // @synthesize firstUnreadMessage=_firstUnreadMessage;
@property(nonatomic) _Bool isNeedLoadMessageWhenScroll; // @synthesize isNeedLoadMessageWhenScroll=_isNeedLoadMessageWhenScroll;
@property(nonatomic) _Bool isLoadingHistoryMessage; // @synthesize isLoadingHistoryMessage=_isLoadingHistoryMessage;
@property(nonatomic) _Bool isContinuousPlaying; // @synthesize isContinuousPlaying=_isContinuousPlaying;
@property(retain, nonatomic) NSTimer *notSendMessageAlertTimer; // @synthesize notSendMessageAlertTimer=_notSendMessageAlertTimer;
@property(retain, nonatomic) NSTimer *notReciveMessageAlertTimer; // @synthesize notReciveMessageAlertTimer=_notReciveMessageAlertTimer;
@property(retain, nonatomic) NSMutableDictionary *cellMsgDict; // @synthesize cellMsgDict=_cellMsgDict;
@property(retain, nonatomic) NSArray *extensionMessageCellInfoList; // @synthesize extensionMessageCellInfoList=_extensionMessageCellInfoList;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *appendMessageQueue; // @synthesize appendMessageQueue=_appendMessageQueue;
@property(retain, nonatomic) NSArray *unreadMentionedMessages; // @synthesize unreadMentionedMessages=_unreadMentionedMessages;
@property(nonatomic) _Bool hasReceiveNewMessage; // @synthesize hasReceiveNewMessage=_hasReceiveNewMessage;
@property(retain, nonatomic) RCRecallMessageImageView *rcImageProressView; // @synthesize rcImageProressView=_rcImageProressView;
@property(nonatomic) _Bool humanEvaluated; // @synthesize humanEvaluated=_humanEvaluated;
@property(nonatomic) unsigned long long currentServiceStatus; // @synthesize currentServiceStatus=_currentServiceStatus;
@property(retain, nonatomic) NSDate *csEnterDate; // @synthesize csEnterDate=_csEnterDate;
@property(retain, nonatomic) RCCSAlertView *csAlertView; // @synthesize csAlertView=_csAlertView;
@property(retain, nonatomic) RCCustomerServiceConfig *csConfig; // @synthesize csConfig=_csConfig;
@property(nonatomic) long long recordTime; // @synthesize recordTime=_recordTime;
@property(nonatomic) _Bool loadHistoryMessageFromRemote; // @synthesize loadHistoryMessageFromRemote=_loadHistoryMessageFromRemote;
@property(retain, nonatomic) UITapGestureRecognizer *resetBottomTapGesture; // @synthesize resetBottomTapGesture=_resetBottomTapGesture;
@property(copy, nonatomic) NSString *navigationTitle; // @synthesize navigationTitle=_navigationTitle;
@property(copy, nonatomic) NSString *typingUserStr; // @synthesize typingUserStr=_typingUserStr;
@property(retain, nonatomic) NSMutableArray *typingMessageArray; // @synthesize typingMessageArray=_typingMessageArray;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *rcTypingMessageQueue; // @synthesize rcTypingMessageQueue=_rcTypingMessageQueue;
@property(retain, nonatomic) UILabel *typingStatusLabel; // @synthesize typingStatusLabel=_typingStatusLabel;
@property(retain, nonatomic) UIView *typingStatusView; // @synthesize typingStatusView=_typingStatusView;
@property(nonatomic) _Bool isClear; // @synthesize isClear=_isClear;
@property(retain, nonatomic) NSMutableArray *unreadNewMsgArr; // @synthesize unreadNewMsgArr=_unreadNewMsgArr;
@property(retain, nonatomic) UIImageView *unreadRightBottomIcon; // @synthesize unreadRightBottomIcon=_unreadRightBottomIcon;
@property(retain, nonatomic) RCDiscussion *currentDiscussion; // @synthesize currentDiscussion=_currentDiscussion;
@property(nonatomic) _Bool isChatRoomHistoryMessageLoaded; // @synthesize isChatRoomHistoryMessageLoaded=_isChatRoomHistoryMessageLoaded;
@property(nonatomic) _Bool isNeedScrollToBottom; // @synthesize isNeedScrollToBottom=_isNeedScrollToBottom;
@property(nonatomic) _Bool isTakeNewPhoto; // @synthesize isTakeNewPhoto=_isTakeNewPhoto;
@property(nonatomic) _Bool isConversationAppear; // @synthesize isConversationAppear=_isConversationAppear;
@property(retain, nonatomic) RCMessageModel *longPressSelectedModel; // @synthesize longPressSelectedModel=_longPressSelectedModel;
@property(nonatomic) _Bool isIndicatorLoading; // @synthesize isIndicatorLoading=_isIndicatorLoading;
@property(nonatomic) long long currentBottomBarStatus; // @synthesize currentBottomBarStatus=_currentBottomBarStatus;
@property(retain, nonatomic) RCConversationViewLayout *customFlowLayout; // @synthesize customFlowLayout=_customFlowLayout;
@property(nonatomic) __weak RCConversationCollectionViewHeader *collectionViewHeader; // @synthesize collectionViewHeader=_collectionViewHeader;
@property(nonatomic) double csEvaInterval; // @synthesize csEvaInterval=_csEvaInterval;
@property(retain, nonatomic) RCCustomerServiceInfo *csInfo; // @synthesize csInfo=_csInfo;
@property(nonatomic) _Bool enableSaveNewPhotoToLocalSystem; // @synthesize enableSaveNewPhotoToLocalSystem=_enableSaveNewPhotoToLocalSystem;
@property(nonatomic) _Bool enableContinuousReadUnreadVoice; // @synthesize enableContinuousReadUnreadVoice=_enableContinuousReadUnreadVoice;
@property(retain, nonatomic) UIToolbar *messageSelectionToolbar; // @synthesize messageSelectionToolbar=_messageSelectionToolbar;
@property(nonatomic) int defaultHistoryMessageCountOfChatRoom; // @synthesize defaultHistoryMessageCountOfChatRoom=_defaultHistoryMessageCountOfChatRoom;
@property(nonatomic) _Bool displayUserNameInCell; // @synthesize displayUserNameInCell=_displayUserNameInCell;
@property(retain, nonatomic) UIView *extensionView; // @synthesize extensionView=_extensionView;
@property(nonatomic) long long defaultInputType; // @synthesize defaultInputType=_defaultInputType;
@property(retain, nonatomic) RCChatSessionInputBarControl *chatSessionInputBarControl; // @synthesize chatSessionInputBarControl=_chatSessionInputBarControl;
@property(retain, nonatomic) UILabel *unReadNewMessageLabel; // @synthesize unReadNewMessageLabel=_unReadNewMessageLabel;
@property(nonatomic) _Bool enableNewComingMessageIcon; // @synthesize enableNewComingMessageIcon=_enableNewComingMessageIcon;
@property(retain, nonatomic) UIButton *unReadButton; // @synthesize unReadButton=_unReadButton;
@property(retain, nonatomic) UILabel *unReadMessageLabel; // @synthesize unReadMessageLabel=_unReadMessageLabel;
@property(nonatomic) long long unReadMessage; // @synthesize unReadMessage=_unReadMessage;
@property(nonatomic) _Bool enableUnreadMessageIcon; // @synthesize enableUnreadMessageIcon=_enableUnreadMessageIcon;
@property(retain, nonatomic) NSArray *displayConversationTypeArray; // @synthesize displayConversationTypeArray=_displayConversationTypeArray;
@property(retain, nonatomic) UICollectionView *conversationMessageCollectionView; // @synthesize conversationMessageCollectionView=_conversationMessageCollectionView;
@property(retain, nonatomic) NSMutableArray *conversationDataRepository; // @synthesize conversationDataRepository=_conversationDataRepository;
@property(nonatomic) long long locatedMessageSentTime; // @synthesize locatedMessageSentTime=_locatedMessageSentTime;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(nonatomic) unsigned long long conversationType; // @synthesize conversationType=_conversationType;
- (void).cxx_destruct;
- (void)resetSectionHeaderView;
- (void)registerSectionHeaderView;
@property(nonatomic) _Bool allowsMessageCellSelection;
- (void)updateNavigationBarItem;
- (void)onMessagesSelectedCountChanged:(id)arg1;
- (void)deleteMessages;
@property(readonly, nonatomic) NSArray *selectedMessages;
- (void)showToolBar:(_Bool)arg1;
- (void)onCancelMultiSelectEvent:(id)arg1;
- (void)onMultiSelectMessageCell:(id)arg1;
- (void)stopPlayingVoiceMessage;
- (void)cancelAlert:(id)arg1;
- (void)longTimeNotSendMessageAlert;
- (void)longTimeNotReciveMessageAlert;
- (void)startNotSendMessageAlertTimer;
- (void)startNotReciveMessageAlertTimer;
- (void)stopNotReciveMessageAlertTimer;
- (void)stopNotSendMessageAlertTimer;
- (_Bool)enabledReadReceiptMessage:(id)arg1;
- (void)sendReadReceiptResponseForMessages:(id)arg1;
- (void)onReceiveMessageReadReceiptRequest:(id)arg1;
- (void)onReceiveMessageReadReceiptResponse:(id)arg1;
- (void)syncReadStatus;
- (void)sendReadReceipt;
- (void)didLongPressCellPortrait:(id)arg1;
- (void)handleWillResignActive;
- (void)handleAppResume;
- (void)onTypingStatusChanged:(unsigned long long)arg1 targetId:(id)arg2 status:(id)arg3;
- (void)robotEvaluateView:(id)arg1 didEvaluateValue:(_Bool)arg2;
- (void)robotEvaluateViewCancel:(id)arg1;
- (void)adminEvaluateView:(id)arg1 didEvaluateValue:(int)arg2;
- (void)adminEvaluateViewCancel:(id)arg1;
- (void)willCSAlertViewDismiss:(id)arg1;
- (void)announceViewWillShow:(id)arg1 announceClickUrl:(id)arg2;
- (void)announceViewWillShow;
- (void)showCustomerServiceEndAlert;
- (void)showEvaView;
- (void)onCustomerServiceModeChanged:(unsigned long long)arg1;
- (void)customerServiceWarning:(id)arg1 quitAfterWarning:(_Bool)arg2 needEvaluate:(_Bool)arg3 needSuspend:(_Bool)arg4;
- (void)customerServiceLeftCurrentViewController;
- (void)commentCustomerServiceWithStatus:(unsigned long long)arg1 commentId:(id)arg2 quitAfterComment:(_Bool)arg3;
- (void)leftCustomerServiceWithEvaluate:(_Bool)arg1;
- (void)suspendCustomerService;
- (void)didTapCustomerService:(id)arg1 RobotResoluved:(_Bool)arg2;
- (void)switchRobotInputType:(_Bool)arg1;
- (void)robotSwitchButtonDidTouch;
- (void)resetBottomBarStatus;
- (void)didTapImageTxtMsgCell:(id)arg1 webViewController:(id)arg2;
- (void)didLongTouchPublicServiceMessageCell:(id)arg1 inView:(id)arg2;
- (void)didTapUrlInPublicServiceMessageCell:(id)arg1 model:(id)arg2;
- (void)onPublicServiceMenuItemSelected:(id)arg1;
- (void)playNextVoiceMesage:(id)arg1;
- (void)receiveContinuousPlayNotification:(id)arg1;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (_Bool)isAtTheBottomOfTableView;
- (void)saveNewPhotoToLocalSystemAfterSendingSuccess:(id)arg1;
- (void)notifyUpdateUnreadMessageCount;
- (void)setMessagePortraitSize:(struct CGSize)arg1;
- (void)setMessageAvatarStyle:(long long)arg1;
- (void)notifyUnReadMessageCount:(long long)arg1;
- (void)deleteMessage:(id)arg1;
- (void)recallMessage:(long long)arg1;
- (id)geyKeybordWindow;
- (void)onRecallMessage:(id)arg1;
- (void)reloadRecalledMessage:(long long)arg1;
- (void)onDeleteMessage:(id)arg1;
- (void)onCopyMessage:(id)arg1;
- (void)tap4ResetDefaultBottomBarStatus:(id)arg1;
- (void)tabRightBottomMsgCountIcon:(id)arg1;
- (void)sendTypingStatusTimerFired;
- (void)sightDidFinishRecord:(id)arg1 thumbnail:(id)arg2 duration:(unsigned long long)arg3;
- (void)imageDidCapture:(id)arg1;
- (void)locationDidSelect:(struct CLLocationCoordinate2D)arg1 locationName:(id)arg2 mapScreenShot:(id)arg3;
- (void)imageDataDidSelect:(id)arg1 fullImageRequired:(_Bool)arg2;
- (void)fileDidSelect:(id)arg1;
- (void)onCancelRecordEvent;
- (void)onEndRecordEvent;
- (void)onBeginRecordEvent;
- (void)recordDidCancel;
- (void)recordDidEnd:(id)arg1 duration:(long long)arg2 error:(id)arg3;
- (void)recordDidBegin;
- (void)emojiView:(id)arg1 didTouchSendButton:(id)arg2;
- (void)emojiView:(id)arg1 didTouchedEmoji:(id)arg2;
- (void)openDynamicFunction:(long long)arg1;
- (void)openFileSelector;
- (void)openLocationPicker;
- (void)openSystemCamera;
- (void)openSystemAlbum;
- (void)presentViewController:(id)arg1 functionTag:(long long)arg2;
- (void)pluginBoardView:(id)arg1 clickedItemWithTag:(long long)arg2;
- (void)setChatSessionInputBarStatus:(long long)arg1 animated:(_Bool)arg2;
- (void)inputTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)inputTextViewDidTouchSendKey:(id)arg1;
- (void)chatInputBar:(id)arg1 shouldChangeFrame:(struct CGRect)arg2;
- (id)getSelectingUserInfo:(id)arg1;
- (void)getSelectingUserIdList:(CDUnknownBlockType)arg1 functionTag:(long long)arg2;
- (void)didCancelMessage:(id)arg1;
- (void)didSendMessage:(long long)arg1 content:(id)arg2;
- (id)willAppendAndDisplayMessage:(id)arg1;
- (id)willSendMessage:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)didSendingMessageNotification:(id)arg1;
- (void)clearOldestMessagesWhenMemoryWarning;
- (void)didReceiveMessageNotification:(id)arg1;
- (void)didReceiveRecallMessageNotification:(id)arg1;
- (void)receiveMessageHasReadNotification:(id)arg1;
- (void)uploadImage:(id)arg1 uploadListener:(id)arg2;
- (void)sendImageMessage:(id)arg1 pushContent:(id)arg2 appUpload:(_Bool)arg3;
- (void)sendImageMessage:(id)arg1 pushContent:(id)arg2;
- (void)uploadMedia:(id)arg1 uploadListener:(id)arg2;
- (void)sendMediaMessage:(id)arg1 pushContent:(id)arg2 appUpload:(_Bool)arg3;
- (void)sendMediaMessage:(id)arg1 pushContent:(id)arg2;
- (void)sendMessage:(id)arg1 pushContent:(id)arg2;
- (void)updateForMessageSendCanceled:(long long)arg1 content:(id)arg2;
- (void)updateForMessageSendError:(long long)arg1 messageId:(long long)arg2 content:(id)arg3;
- (void)updateLastMessageReadReceiptStatus:(long long)arg1 content:(id)arg2;
- (void)updateForMessageSendSuccess:(long long)arg1 content:(id)arg2;
- (void)updateForMessageSendProgress:(int)arg1 messageId:(long long)arg2;
- (void)updateForMessageSendOut:(id)arg1;
- (void)presentFilePreviewViewController:(id)arg1;
- (void)presentLocationViewController:(id)arg1;
- (void)presentSightViewPreviewViewController:(id)arg1;
- (void)presentImagePreviewController:(id)arg1;
- (void)didTapmessageFailedStatusViewForResend:(id)arg1;
- (void)resendMessage:(id)arg1;
- (id)findDataIndexFromMessageList:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)cancelUploadMedia:(id)arg1;
- (void)didTapCancelUploadButton:(id)arg1;
- (void)didLongTouchMessageCell:(id)arg1 inView:(id)arg2;
- (id)getLongTouchMessageCellMenuList:(id)arg1;
- (_Bool)canRecallMessageOfModel:(id)arg1;
- (void)didTapCellPortrait:(id)arg1;
- (void)didTapPhoneNumberInMessageCell:(id)arg1 model:(id)arg2;
- (void)didTapUrlInMessageCell:(id)arg1 model:(id)arg2;
- (void)didTapMessageCell:(id)arg1;
- (struct CGSize)rcConversationCollectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)rcConversationCollectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)willDisplayConversationTableCell:(id)arg1 atIndexPath:(id)arg2;
- (void)willDisplayMessageCell:(id)arg1 atIndexPath:(id)arg2;
- (void)handleMessagesAfterLoadMore:(id)arg1;
- (long long)appendLastestMessageToDataSource;
- (void)loadMoreNewerMessage;
- (void)loadRemoteHistoryMessages;
- (void)loadMoreHistoryMessage;
- (void)loadLatestHistoryMessage;
- (_Bool)pushOldMessageModel:(id)arg1;
- (_Bool)isShowUnreadView:(id)arg1;
- (_Bool)appendMessageModel:(id)arg1;
- (void)appendAndDisplayMessage:(id)arg1;
- (void)appendAndDisplayMessageAutoScrollToBottom:(id)arg1;
- (void)figureOutLatestModel:(id)arg1;
- (void)figureOutAllConversationDataRepository;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)referenceExtraHeight:(Class)arg1 messageModel:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (_Bool)isExtensionCell:(id)arg1;
- (struct CGSize)rcUnkownConversationCollectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)rcUnkownConversationCollectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollToBottomAnimated:(_Bool)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)loadRemainMessageAndScrollToBottom:(_Bool)arg1;
- (_Bool)isRemainMessageExisted;
- (id)getLastIndexPathForVisibleItems;
- (void)updateUnreadMsgCountLabel;
@property(retain, nonatomic) RCPluginBoardView *pluginBoardView;
@property(retain, nonatomic) RCEmojiBoardView *emojiBoardView;
- (float)getIPhonexExtraBottomHeight;
- (void)initializedSubViews;
- (void)quitConversationViewAndClear;
- (void)leftBarButtonItemPressed:(id)arg1;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didTipUnReadButton:(id)arg1;
- (void)labelAdaptive:(id)arg1;
- (void)setupUnReadMessageView;
- (void)currentViewFrameChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)rightBarButtonItemClicked:(id)arg1;
- (void)cancelAlertAndGoBack:(id)arg1;
- (void)alertErrorAndLeft:(id)arg1;
- (void)onSelectCustomerServiceGroup:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)viewDidLoad;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forMessageClass:(Class)arg2;
- (void)onConnectionStatusChangedNotification:(id)arg1;
- (void)registerNotification;
- (void)rcinit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithConversationType:(unsigned long long)arg1 targetId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
