//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (WLAdd)
+ (id)wl_dateWithISOFormatString:(id)arg1;
+ (id)wl_dateWithString:(id)arg1 format:(id)arg2 timeZone:(id)arg3 locale:(id)arg4;
+ (id)wl_dateWithString:(id)arg1 format:(id)arg2;
+ (id)wl_dayFromWeekday:(id)arg1;
- (id)wl_stringWithISOFormat;
- (id)wl_stringWithFormat:(id)arg1 timeZone:(id)arg2 locale:(id)arg3;
- (id)wl_stringWithFormat:(id)arg1;
- (id)wl_dateByAddingSeconds:(long long)arg1;
- (id)wl_dateByAddingMinutes:(long long)arg1;
- (id)wl_dateByAddingHours:(long long)arg1;
- (id)wl_dateByAddingDays:(long long)arg1;
- (id)wl_dateByAddingWeeks:(long long)arg1;
- (id)wl_dateByAddingMonths:(long long)arg1;
- (id)wl_dateByAddingYears:(long long)arg1;
- (id)wl_timeAgoSimple;
- (id)wl_dayFromWeekday;
@property(readonly, nonatomic) _Bool wl_isYesterday;
@property(readonly, nonatomic) _Bool wl_isToday;
@property(readonly, nonatomic) _Bool wl_isLeapYear;
@property(readonly, nonatomic) _Bool wl_isLeapMonth;
@property(readonly, nonatomic) long long wl_quarter;
@property(readonly, nonatomic) long long wl_yearForWeekOfYear;
@property(readonly, nonatomic) long long wl_weekOfYear;
@property(readonly, nonatomic) long long wl_weekOfMonth;
@property(readonly, nonatomic) long long wl_weekdayOrdinal;
@property(readonly, nonatomic) long long wl_weekday;
@property(readonly, nonatomic) long long wl_nanosecond;
@property(readonly, nonatomic) long long wl_second;
@property(readonly, nonatomic) long long wl_minute;
@property(readonly, nonatomic) long long wl_hour;
@property(readonly, nonatomic) long long wl_day;
@property(readonly, nonatomic) long long wl_month;
@property(readonly, nonatomic) long long wl_year;
@end

