#line 1 "/Users/lichaoqun/Desktop/QG_FQ/QG_FQDylib/Logos/QG_FQDylib.xm"


#import <UIKit/UIKit.h>
#import "ModelTool.h"




#include <substrate.h>
#if defined(__clang__)
#if __has_feature(objc_arc)
#define _LOGOS_SELF_TYPE_NORMAL __unsafe_unretained
#define _LOGOS_SELF_TYPE_INIT __attribute__((ns_consumed))
#define _LOGOS_SELF_CONST const
#define _LOGOS_RETURN_RETAINED __attribute__((ns_returns_retained))
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif

@class ChatViewController; @class LoginViewController; @class AFHTTPRequestSerializer; @class RCConversationViewController; 
static void (*_logos_orig$_ungrouped$ChatViewController$didTapMessageCell$)(_LOGOS_SELF_TYPE_NORMAL ChatViewController* _LOGOS_SELF_CONST, SEL, RCMessageModel *); static void _logos_method$_ungrouped$ChatViewController$didTapMessageCell$(_LOGOS_SELF_TYPE_NORMAL ChatViewController* _LOGOS_SELF_CONST, SEL, RCMessageModel *); static void (*_logos_orig$_ungrouped$LoginViewController$didClickLoginBtn$)(_LOGOS_SELF_TYPE_NORMAL LoginViewController* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$LoginViewController$didClickLoginBtn$(_LOGOS_SELF_TYPE_NORMAL LoginViewController* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$RCConversationViewController$didReceiveMessageNotification$)(_LOGOS_SELF_TYPE_NORMAL RCConversationViewController* _LOGOS_SELF_CONST, SEL, NSNotification *); static void _logos_method$_ungrouped$RCConversationViewController$didReceiveMessageNotification$(_LOGOS_SELF_TYPE_NORMAL RCConversationViewController* _LOGOS_SELF_CONST, SEL, NSNotification *); static void (*_logos_orig$_ungrouped$AFHTTPRequestSerializer$setValue$forHTTPHeaderField$)(_LOGOS_SELF_TYPE_NORMAL AFHTTPRequestSerializer* _LOGOS_SELF_CONST, SEL, NSString *, NSString *); static void _logos_method$_ungrouped$AFHTTPRequestSerializer$setValue$forHTTPHeaderField$(_LOGOS_SELF_TYPE_NORMAL AFHTTPRequestSerializer* _LOGOS_SELF_CONST, SEL, NSString *, NSString *); 

#line 8 "/Users/lichaoqun/Desktop/QG_FQ/QG_FQDylib/Logos/QG_FQDylib.xm"

static void _logos_method$_ungrouped$ChatViewController$didTapMessageCell$(_LOGOS_SELF_TYPE_NORMAL ChatViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, RCMessageModel * arg1){

    _logos_orig$_ungrouped$ChatViewController$didTapMessageCell$(self, _cmd, arg1);
}




static void _logos_method$_ungrouped$LoginViewController$didClickLoginBtn$(_LOGOS_SELF_TYPE_NORMAL LoginViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1){
    [ModelTool loginComplete:^(id) {
        _logos_orig$_ungrouped$LoginViewController$didClickLoginBtn$(self, _cmd, arg1);
    }];
}



static void _logos_method$_ungrouped$RCConversationViewController$didReceiveMessageNotification$(_LOGOS_SELF_TYPE_NORMAL RCConversationViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, NSNotification * arg1){
    _logos_orig$_ungrouped$RCConversationViewController$didReceiveMessageNotification$(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFHTTPRequestSerializer$setValue$forHTTPHeaderField$(_LOGOS_SELF_TYPE_NORMAL AFHTTPRequestSerializer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, NSString * value, NSString * field){
    if([[field lowercaseString] isEqualToString:@"authorization"]){
        [ModelTool saveDefatutAuthorzationWithString:value];
        NSString *str = [ModelTool getAuthorzation];
        _logos_orig$_ungrouped$AFHTTPRequestSerializer$setValue$forHTTPHeaderField$(self, _cmd, str, field);
    }else{
        _logos_orig$_ungrouped$AFHTTPRequestSerializer$setValue$forHTTPHeaderField$(self, _cmd, value, field);
    }
}


static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$ChatViewController = objc_getClass("ChatViewController"); MSHookMessageEx(_logos_class$_ungrouped$ChatViewController, @selector(didTapMessageCell:), (IMP)&_logos_method$_ungrouped$ChatViewController$didTapMessageCell$, (IMP*)&_logos_orig$_ungrouped$ChatViewController$didTapMessageCell$);Class _logos_class$_ungrouped$LoginViewController = objc_getClass("LoginViewController"); MSHookMessageEx(_logos_class$_ungrouped$LoginViewController, @selector(didClickLoginBtn:), (IMP)&_logos_method$_ungrouped$LoginViewController$didClickLoginBtn$, (IMP*)&_logos_orig$_ungrouped$LoginViewController$didClickLoginBtn$);Class _logos_class$_ungrouped$RCConversationViewController = objc_getClass("RCConversationViewController"); MSHookMessageEx(_logos_class$_ungrouped$RCConversationViewController, @selector(didReceiveMessageNotification:), (IMP)&_logos_method$_ungrouped$RCConversationViewController$didReceiveMessageNotification$, (IMP*)&_logos_orig$_ungrouped$RCConversationViewController$didReceiveMessageNotification$);Class _logos_class$_ungrouped$AFHTTPRequestSerializer = objc_getClass("AFHTTPRequestSerializer"); MSHookMessageEx(_logos_class$_ungrouped$AFHTTPRequestSerializer, @selector(setValue:forHTTPHeaderField:), (IMP)&_logos_method$_ungrouped$AFHTTPRequestSerializer$setValue$forHTTPHeaderField$, (IMP*)&_logos_orig$_ungrouped$AFHTTPRequestSerializer$setValue$forHTTPHeaderField$);} }
#line 42 "/Users/lichaoqun/Desktop/QG_FQ/QG_FQDylib/Logos/QG_FQDylib.xm"
