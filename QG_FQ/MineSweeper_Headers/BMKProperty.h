//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BMKPropertyType, NSMutableDictionary, NSString;

@interface BMKProperty : NSObject
{
    struct objc_property *_bmkProperty;
    NSString *_bmkName;
    BMKPropertyType *_bmkType;
    Class _bmkSrcClass;
    NSMutableDictionary *_propertyKeysDict;
    NSMutableDictionary *_objectClassInArrayDict;
}

+ (id)bmk_cachedPropertyWithProperty:(struct objc_property *)arg1;
@property(retain, nonatomic) NSMutableDictionary *objectClassInArrayDict; // @synthesize objectClassInArrayDict=_objectClassInArrayDict;
@property(retain, nonatomic) NSMutableDictionary *propertyKeysDict; // @synthesize propertyKeysDict=_propertyKeysDict;
@property(nonatomic) Class bmkSrcClass; // @synthesize bmkSrcClass=_bmkSrcClass;
@property(readonly, nonatomic) BMKPropertyType *bmkType; // @synthesize bmkType=_bmkType;
@property(readonly, nonatomic) NSString *bmkName; // @synthesize bmkName=_bmkName;
@property(nonatomic) struct objc_property *bmkProperty; // @synthesize bmkProperty=_bmkProperty;
- (void).cxx_destruct;
- (Class)bmk_objectClassInArrayForClass:(Class)arg1;
- (void)bmk_setObjectClassInArray:(Class)arg1 forClass:(Class)arg2;
- (id)bmk_propertyKeysForClass:(Class)arg1;
- (void)setBMKPorpertyKeys:(id)arg1 forClass:(Class)arg2;
- (void)bmk_setOriginKey:(id)arg1 forClass:(Class)arg2;
- (id)bmk_propertyKeysWithStringKey:(id)arg1;
- (void)bmk_setValue:(id)arg1 forObject:(id)arg2;
- (id)bmk_valueForObject:(id)arg1;
- (id)init;

@end
