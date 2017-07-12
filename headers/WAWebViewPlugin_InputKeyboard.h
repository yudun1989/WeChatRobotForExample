//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAWebViewPluginBase.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSDictionary, NSString, UIButton, UITextField, UITextRange, WACustomKeyboard, WAJSEventHandler_BaseEvent;

@interface WAWebViewPlugin_InputKeyboard : WAWebViewPluginBase <UIGestureRecognizerDelegate, UITextFieldDelegate, UIScrollViewDelegate>
{
    double _toolBarHeight;
    _Bool _showConfirmButton;
    long long _orientation;
    _Bool _durationSwith;
    _Bool _systemKeyboard;
    id <InputKeyboardDelegate> _inputDelegate;
    UITextField *_field;
    UITextRange *_selectedTextRange;
    NSString *_defaultValue;
    NSString *_userData;
    double _originTop;
    long long _maxLength;
    UIButton *_switchButton;
    WACustomKeyboard *_customKeyboard;
    NSDictionary *_delayParam;
    WAJSEventHandler_BaseEvent *_handler;
    struct CGRect _rcInput;
}

@property(retain, nonatomic) WAJSEventHandler_BaseEvent *handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSDictionary *delayParam; // @synthesize delayParam=_delayParam;
@property(retain, nonatomic) WACustomKeyboard *customKeyboard; // @synthesize customKeyboard=_customKeyboard;
@property(retain, nonatomic) UIButton *switchButton; // @synthesize switchButton=_switchButton;
@property(nonatomic) _Bool systemKeyboard; // @synthesize systemKeyboard=_systemKeyboard;
@property(nonatomic) _Bool durationSwith; // @synthesize durationSwith=_durationSwith;
@property(nonatomic) long long maxLength; // @synthesize maxLength=_maxLength;
@property(nonatomic) double originTop; // @synthesize originTop=_originTop;
@property(nonatomic) struct CGRect rcInput; // @synthesize rcInput=_rcInput;
@property(retain, nonatomic) NSString *userData; // @synthesize userData=_userData;
@property(retain, nonatomic) NSString *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(retain, nonatomic) UITextRange *selectedTextRange; // @synthesize selectedTextRange=_selectedTextRange;
@property(retain, nonatomic) UITextField *field; // @synthesize field=_field;
@property(nonatomic) __weak id <InputKeyboardDelegate> inputDelegate; // @synthesize inputDelegate=_inputDelegate;
- (void).cxx_destruct;
- (void)onDone;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)hideKeyBoard;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)onKeyboardDidHide:(id)arg1;
- (void)setDelayedHandler:(id)arg1 withParam:(id)arg2;
- (_Bool)keyboardVisible;
- (void)onKeyboardWillHide:(id)arg1;
- (void)adjustViewPosition:(double)arg1;
- (void)didRotate:(id)arg1;
- (void)onSystemKeyboardWillShow:(id)arg1;
- (void)showCustomKeyboard:(long long)arg1 confirmButton:(_Bool)arg2;
- (void)showSystemKeyboard:(_Bool)arg1;
- (void)switchEmojiKeyBoard;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (void)setInputValue:(id)arg1 cursorPos:(long long)arg2;
- (_Bool)haveChineseChar:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)showKeyBoard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

