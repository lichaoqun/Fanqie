//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RETableViewTextCell.h"

@class REFormattedNumberField, RENumberItem;

@interface RETableViewNumberCell : RETableViewTextCell
{
    _Bool _enabled;
    RENumberItem *_item;
    REFormattedNumberField *_textFieldNumber;
}

+ (_Bool)canFocusWithItem:(id)arg1;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) REFormattedNumberField *textFieldNumber; // @synthesize textFieldNumber=_textFieldNumber;
@property(retain, nonatomic) RENumberItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)textFieldNumberDidEndEditing:(id)arg1;
- (void)textFieldNumberDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutSubviews;
- (void)cellWillAppear;
- (void)cellDidLoad;
- (void)dealloc;

@end

