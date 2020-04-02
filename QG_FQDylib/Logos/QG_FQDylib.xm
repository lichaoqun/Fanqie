// See http://iphonedevwiki.net/index.php/Logos

#import <UIKit/UIKit.h>
#import "ModelTool.h"


// - 踩雷页
%hook ChatViewController
- (void)didTapMessageCell:(RCMessageModel *)arg1{
//    [ModelTool didReceviceNotification:arg1];
    %orig;
}
%end

// - 登录页
%hook LoginViewController
- (void)didClickLoginBtn:(id)arg1{
    [ModelTool loginComplete:^(id) {
        %orig;
    }];
}
%end

%hook RCConversationViewController
- (void)didReceiveMessageNotification:(NSNotification *)arg1{
    %orig;
}
%end

%hook AFHTTPRequestSerializer
- (void)setValue:(NSString *)value forHTTPHeaderField:(NSString *)field{
    if([[field lowercaseString] isEqualToString:@"authorization"]){
        [ModelTool saveDefatutAuthorzationWithString:value];
        NSString *str = [ModelTool getAuthorzation];
        %orig(str, field);
    }else{
        %orig(value, field);
    }
}
%end

