//
//  CaptchaView.h
//  yanZhengCode
//
//  Created by 王双龙 on 16/8/3.
//  Copyright © 2016年 王双龙. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    DefaultType,
    CountType
} IdentifyingCodeType;

@interface CaptchaView : UIView

@property (nonatomic, retain) NSArray *changeArray; //字符素材数组
@property (nonatomic, retain) NSMutableString *changeString;  //验证码的字符串

@property (nonatomic,assign) IdentifyingCodeType CodeType;//验证码类型
@property (nonatomic,assign) NSString * countString;//算术验证码的字符串

- (instancetype)initWithFrame:(CGRect)frame WithType:(IdentifyingCodeType)type;

@end
