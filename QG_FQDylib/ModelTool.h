

#import <Foundation/Foundation.h>
typedef NS_ENUM(NSInteger, Authorzation) {
    AuthorzationDefault,
    AuthorzationTail
};

@interface RCMessageModel
@property(retain, nonatomic) id content;
@end
@interface RCRedPacketMessage
@property(retain, nonatomic) NSString *pack_id;
@end


@interface TokenModel : NSObject
@property (nonatomic, copy) NSString *token_type;
@property (nonatomic, copy) NSString *expires_time;
@property (nonatomic, copy) NSString *access_token;
@property (nonatomic, copy) NSString *refresh_token;
@end

@interface LoginModel : NSObject
@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *mobile;
@property (nonatomic, copy) NSString *username;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *is_default_password;
@property (nonatomic, strong) TokenModel *token;
@end

@interface IGetPacketResultModel : NSObject
@property (nonatomic, copy) NSString *redpack_id;
@property (nonatomic, copy) NSString *money;
@property (nonatomic, assign) BOOL is_thunder;
@end

@interface OtherGetPacketResultModel : NSObject
@property(copy, nonatomic) NSString *update_time; // @synthesize update_time=_update_time;
@property(copy, nonatomic) NSString *is_optimum; // @synthesize is_optimum=_is_optimum;
@property(copy, nonatomic) NSString *is_ms; // @synthesize is_ms=_is_ms;
@property(copy, nonatomic) NSString *is_thunder; // @synthesize is_thunder=_is_thunder;
@property(copy, nonatomic) NSString *money; // @synthesize money=_money;
@property(copy, nonatomic) NSString *member_id; // @synthesize member_id=_member_id;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@end

@interface ResultModel : NSObject
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(copy, nonatomic) NSNumber *is_thunder; // @synthesize is_thunder=_is_thunder;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *grab_money; // @synthesize grab_money=_grab_money;
@property(copy, nonatomic) NSNumber *member_id; // @synthesize member_id=_member_id;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *num; // @synthesize num=_num;
@property(copy, nonatomic) NSString *total_money; // @synthesize total_money=_total_money;
@property (nonatomic, copy) NSString *resid_num;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *packet_id; // @synthesize packet_id=_packet_id;
@property (nonatomic, assign, readonly) BOOL isThunder;

@end

@interface ModelTool : NSObject
@property (nonatomic, assign) BOOL canGetPacket;
@property (nonatomic, assign) Authorzation authorzationType;

+(ModelTool *)shareTool;

/** 登录 */
+(void)didReceviceNotification:(id)arg1;
+(LoginModel *)saveLoginModelWithDict:(NSDictionary *)dict;
+(void)saveDefatutAuthorzationWithString:(NSString *)authorzation;
+(NSString *)getAuthorzation;

+(void)loginComplete:(void(^)(id))complete;
+(void)getLastaPacketWihtModel:(NSString *)arg1 complete:(void(^)(id))complete;
@end

