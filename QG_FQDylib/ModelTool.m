

#import "ModelTool.h"
#import "YYModel.h"
#import "MBProgressHUD.h"
#import <objc/message.h>

typedef void(^QGRequsetSuccessBlock)(id);
typedef void(^QGRequsetFailedBlock)(NSError *);

typedef void(^QGLoginRequsetSuccessBlock)(NSURLSessionDataTask *, id);
typedef void(^QGLoginRequsetFailedBlock)(NSURLSessionDataTask *, NSError *);



@implementation TokenModel
@end
@implementation LoginModel
@end

@implementation IGetPacketResultModel
@end
@implementation OtherGetPacketResultModel
@end
@implementation ResultModel
+ (nullable NSDictionary<NSString *, id> *)modelContainerPropertyGenericClass{
    return @{@"list" : [OtherGetPacketResultModel class]};
}

- (BOOL)isThunder{
    NSString *title = self.title;
    int totalMoney = [[[title componentsSeparatedByString:@"-"] firstObject] intValue];
    int thunder = [[[title componentsSeparatedByString:@"-"] lastObject] intValue];
    
    __block int sum = 0;
    [self.list enumerateObjectsUsingBlock:^(OtherGetPacketResultModel *obj, NSUInteger idx, BOOL * _Nonnull stop) {
        int value = [[[NSDecimalNumber decimalNumberWithString:obj.money] decimalNumberByMultiplyingBy:[NSDecimalNumber decimalNumberWithString:@"100"]] intValue];
        sum = sum + value;
    }];
    int residue = totalMoney * 100 - sum;
    int tail = residue % 10;
    NSLog(@"炸弹 : %d --- 尾数 : %d --- 余额 : %.2f", thunder, tail, residue / 100.f);
    if (tail == thunder) {
        NSLog(@"💣");
        return YES;
    }else{
        NSLog(@"💰");
        return NO;
    }
}
@end

@interface ModelTool ()
@property (nonatomic, strong) NSString *tailAuthorization;
@property (nonatomic, strong) NSString *headerAuthorization;
@end
@implementation ModelTool

+(void)showToast:(NSString *)toast{
    UIView *view =  [UIApplication sharedApplication].keyWindow;
    
    MBProgressHUD *HUD = (MBProgressHUD *)[view viewWithTag:10002];
    if (HUD) {
        [HUD removeFromSuperview];
        HUD = nil;
    }
    HUD = [[MBProgressHUD alloc] initWithView:view];
    HUD.tag = 10002;
    [view addSubview:HUD];
    HUD.contentColor = [UIColor whiteColor];
    HUD.bezelView.color = [UIColor colorWithWhite:0 alpha:0.7];
    HUD.defaultMotionEffectsEnabled = NO;
    HUD.bezelView.style = MBProgressHUDBackgroundStyleSolidColor;
    HUD.removeFromSuperViewOnHide = YES;
    HUD.label.text = toast;
    HUD.mode = MBProgressHUDModeCustomView;
    [HUD showAnimated:YES];
    [HUD hideAnimated:YES afterDelay:1];

}

static ModelTool *tool_;
+(instancetype)shareTool{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        tool_ = [[ModelTool alloc]init];
        tool_.canGetPacket = YES;
        tool_.authorzationType = AuthorzationDefault;
    });
    return tool_;
}

+(LoginModel *)saveLoginModelWithDict:(NSDictionary *)dict{
    LoginModel *model = [LoginModel yy_modelWithDictionary:dict];
    [self shareTool].tailAuthorization = [NSString stringWithFormat:@"%@ %@", model.token.token_type, model.token.access_token];
    return model;
}

+(void)saveDefatutAuthorzationWithString:(NSString *)authorzation{
    if (![self shareTool].headerAuthorization) {
        [self shareTool].headerAuthorization = authorzation;
    }
}

+(NSString *)getAuthorzation{
    if ([self shareTool].authorzationType == AuthorzationDefault) {
        return [self shareTool].headerAuthorization;

    }
    return [self shareTool].tailAuthorization;
}

+(void)didReceviceNotification:(id)arg1{
    id msg = arg1;
    if ([msg isKindOfClass:NSClassFromString(@"RCMessageModel")]) {
        id content = [msg valueForKey:@"content"];
        if ([content isKindOfClass:NSClassFromString(@"RCRedPacketMessage")]) {
            RCRedPacketMessage *red = (RCRedPacketMessage *)content;
            [self getLastaPacketWihtModel:red.pack_id complete:nil];
        }
    }
}

/** 登录 */
+(void)loginComplete:(void(^)(id))complete{

//    QGLoginRequsetSuccessBlock success = ^(NSURLSessionDataTask *task, id data){
//        LoginModel *model = [ModelTool saveLoginModelWithDict:data[@"info"]];
//        !complete ? : complete(model);
//    };
//    QGLoginRequsetFailedBlock failed = ^(NSURLSessionDataTask *task, NSError *error){
//        !complete ? : complete(nil);
//    };
//    NSString *URLString = @"https://api.oaqkl.com/App/User/Login/login";
//    NSString *appVersion = [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"];
//    NSDictionary *parameters =          @{@"device_type" : @"IOS",
//                                        @"password" : @"123123",
//                                        @"username" : @"18211159457",
//                                        @"version_name" : appVersion,
//                                        };
//
//    id (*fn)(Class, SEL) = (id (*)(Class, SEL))objc_msgSend;
//    id manager = fn(NSClassFromString(@"AFHTTPSessionManager"), @selector(manager));
//
//    id (*fn1)(id, SEL, id, id, id, id) = (id (*)(id, SEL, id, id, id, id))objc_msgSend;
//    fn1(manager, @selector(POST:parameters:success:failure:), URLString, parameters, success, failed);
    
    
    
    QGRequsetSuccessBlock success = ^(id data){
        LoginModel *model = [ModelTool saveLoginModelWithDict:data];
        [self showToast:[NSString stringWithFormat:@"%@登录成功", model.username]];
        !complete ? : complete(model);
    };
    QGRequsetFailedBlock failed = ^(NSError *error){
        [self showToast:[NSString stringWithFormat:@"登录失败"]];
        !complete ? : complete(nil);
    };
    
    id (*fn)(Class, SEL, id, id, id) = (id (*)(Class, SEL, id, id, id))objc_msgSend;
    fn(NSClassFromString(@"LoginModuleClient"), @selector(loginByPwdWithParams:Success:Failed:), @{@"password" : @"qwer123", @"username" : @"17124267535"}, success, failed);
}

/** 领取红包 */
+(void)getPacketWihtModel:(NSString *)arg1 complete:(void(^)(IGetPacketResultModel *result))complete{
    QGRequsetSuccessBlock success = ^(id data){
        IGetPacketResultModel *r = [IGetPacketResultModel yy_modelWithDictionary:data];
        !complete ? : complete(r);
    };
    QGRequsetFailedBlock failed = ^(NSError *error){
        !complete ? : complete(nil);
    };
    id (*fn)(Class, SEL, id, id, id) = (id (*)(Class, SEL, id, id, id))objc_msgSend;
    fn(NSClassFromString(@"ImModelClient"), @selector(imGrabRedpackWithParams:Success:Failed:), @{@"id" : arg1}, success, failed);

}

/** 获取领取红包列表 */
+(void)getPacketListWihtModel:(NSString *)pack_id complete:(void(^)(ResultModel *r))complete{
    QGRequsetSuccessBlock success = ^(id data){
        ResultModel *r = [ResultModel yy_modelWithDictionary:data];
        !complete ? : complete(r);
    };
    QGRequsetFailedBlock failed = ^(NSError *error){
        !complete ? : complete(nil);
    };
    id (*fn)(Class, SEL, id, id, id) = (id (*)(Class, SEL, id, id, id))objc_msgSend;
    fn(NSClassFromString(@"ImModelClient"), @selector(getImRedpackHistoryWithParams:Success:Failed:), @{@"id" : pack_id}, success, failed);
}

/** 扫尾红包 */
+(void)getLastaPacketWihtModel:(NSString *)arg1 complete:(void(^)(id))complete{
    // - 当前不能领取红包 不处理
    if (![self shareTool].canGetPacket) return;

    // - 当前可以领取红包,先修改状态为不可以领取然后用秒号去领取红包
    [self shareTool].canGetPacket = NO;
    [self getPacketWihtModel:arg1 complete:^(IGetPacketResultModel *result) {
        
        // - 抢成功了 就去轮询领取人数的状态
        if (result) {
            if (result.is_thunder) {
                [self showToast:@"中雷了"];
            }else{
                [self showToast:[NSString stringWithFormat:@"秒包成功领取红包%@", result.money]];
            }
            [self getPacketListLoopWithModel:arg1 complete:^(BOOL getpacekt) {
                
                // - 轮询到可以可以领取,就更换id 去领取红包
                if (getpacekt) {
                    
                    // - 修改为扫尾号的 id
                    [self shareTool].authorzationType = AuthorzationTail;
                    
                    // - 领取成功 更换为原来的 id 并把状态改为可以领取
                    [self getPacketWihtModel:arg1 complete:^(IGetPacketResultModel *result1) {
                        if (result1) {
                            
                            if (result1.is_thunder) {
                                [self showToast:@"中雷了"];
                            }else{
                                [self showToast:[NSString stringWithFormat:@"扫尾成功领取红包%@", result1.money]];
                            }
                        }else{
                            [self showToast:@"扫尾红包领取失败"];
                        }

                        
                        // - 修改状态
                        [self shareTool].canGetPacket = YES;
                        !complete ? complete : complete(nil);
                    }];
                    
                    // - 修改为扫尾号的 id
                    [self shareTool].authorzationType = AuthorzationDefault;

                }else{
                    
                    // - 轮询到不可以领取红包,就去修改状态为可以领取
                    [self shareTool].canGetPacket = YES;
                }
            }];
        }else{
            
            // - 抢失败,直接修改状态为可以领取
            [self shareTool].canGetPacket = YES;
            [self showToast:@"领取失败"];
        }
    }];
}

// - 轮询领取状态
+(void)getPacketListLoopWithModel:(NSString *)packid complete:(void(^)(BOOL getpacekt))complete{
    [self getPacketListWihtModel:packid complete:^(ResultModel *r) {
        if (r) {
            int totlePerson = [r.num intValue];
            int currentPerson = [r.resid_num intValue];
            
            if (currentPerson == totlePerson - 1) {
                BOOL isThunder = r.isThunder;
                if (isThunder) {
                    !complete ? : complete(NO);
                }else{
                    !complete ? : complete(YES);
                }
            }else if(totlePerson == currentPerson) {
                !complete ? : complete(NO);
            }else{
                [self getPacketListLoopWithModel:packid complete:complete];
            }
        }else{
            !complete ? : complete(NO);
        }
    }];
}



@end
