//
//  DefineHeader.h
//  BaseProject
//
//  Created by WYN on 2018/7/30.
//  Copyright © 2018年 WYN. All rights reserved.
//


/*
    此处为所有项目公用宏
 */

#ifndef DefineHeader_h
#define DefineHeader_h

///----<><><><><><><>------字体相关----------<><><><><><><><><><>-----
#define TextFont(name,x) [UIFont fontWithName:name size:ceilf(x * SCREEN_WIDTH /375.0)]

#define TextFont_PFSR(x) [UIFont fontWithName:@"PingFangSC-Regular" size:ceilf(x * SCREEN_WIDTH /375.0)] ?: [UIFont fontWithName:@"PingFangSC" size:ceilf(x * SCREEN_WIDTH /375.0)]

#define TextFont_PFSM(x) [UIFont fontWithName:@"PingFangSC-Medium" size:ceilf(x * SCREEN_WIDTH /375.0)]

//---------**********--------颜色相关--------*************------------
#define KColor(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]

#define KColora(r,g,b,a) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]

#define KRandomColor KColor(arc4random_uniform(256), arc4random_uniform(256), arc4random_uniform(256))

#define HexColor(color) [UIColor colorWithRed:((float)((color & 0xFF0000) >> 16))/255.0 green:((float)((color & 0xFF00) >> 8))/255.0 blue:((float)(color & 0xFF))/255.0 alpha:1.0]

#define HexAColor(color, a) [UIColor colorWithRed:((float)((color & 0xFF0000) >> 16))/255.0 green:((float)((color & 0xFF00) >> 8))/255.0 blue:((float)(color & 0xFF))/255.0 alpha:a]

///----<><><><><><><>------控件高度----------<><><><><><><><><><>-----
#define KSCREEN_HEIGHT [[UIScreen mainScreen] bounds].size.height
#define KSCREEN_WIDTH  [[UIScreen mainScreen] bounds].size.width
//状态栏高度
#define STATUSBAR_HEIGHT  (isIPhoneXAll ? 44.0f : 20.0f)
// TabBar高度
#define TABBAR_HEIGHT  (isIPhoneXAll ? 49.0f + 34.0f : 49.0f)
// 顶部安全区域远离高
#define TOPSAFE_HEIGHT (isIPhoneXAll ? 44.0f : 0.0f)
// 底部安全区域远离高度
#define BOTTOMSAFE_HEIGHT (isIPhoneXAll ? 34.0f : 0.0f)
// 导航栏高度
#define NAVBAR_HEIGHT  44.0f
//搜索栏高度
#define SEARCHBAR_HEIGHT  (SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(@"11.0") ? 52.0f : 44.0f)
//状态栏和导航栏总高度
#define STATUSBARNAVBAR_HEIGHT (isIPhoneXAll ? 88.0f : 64.0f)
//self.frame
#define UIX [[UIScreen mainScreen] bounds].origin.x
#define UIY [[UIScreen mainScreen] bounds].origin.y
#define UIH [[UIScreen mainScreen] bounds].size.height
#define UIW [[UIScreen mainScreen] bounds].size.width
//适配不同屏幕的宽高适配
#define kScreenWidthRatio  (UIScreen.mainScreen.bounds.size.width / 375.0)
#define kScreenHeightRatio (UIScreen.mainScreen.bounds.size.height / 667.0)
#define AdaptedWidth(x)  ceilf((x) * kScreenWidthRatio)
#define AdaptedHeight(x) ceilf((x) * kScreenHeightRatio)
#define AdaptedFontSize(R)     [UIFont systemFontOfSize:AdaptedWidth(R)]

//---------**********--------iPhone系列断--------*************-------
//iPhoneX系列
#define isIPhoneXAll ([UIScreen mainScreen].bounds.size.height == 812 || [UIScreen mainScreen].bounds.size.height == 896)

#define isIPhoneXAll1 ([[UIApplication sharedApplication] statusBarFrame].size.height == 44)
// iPhone4S
#define IS_iPhone_4S ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)
// iPhone5 iPhone5s iPhoneSE
#define IS_iPhone_5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)
// iPhone6 7 8
#define IS_iPhone_6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) || CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size)) : NO)
// iPhone6plus  iPhone7plus iPhone8plus
#define IS_iPhone6_Plus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(1125, 2001), [[UIScreen mainScreen] currentMode].size) || CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size)) : NO)
// iPhoneX
#define IS_iPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)
//判断是否 Retina屏、设备是否iPhone 5、是否是iPad
#define isRetina ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)
//判断是否为iPhone
#define isiPhone (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
// 判断是否是iPad
#define isiPad (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
// 判断是否为iPod
#define isiPod ([[[UIDevice currentDevice] model] isEqualToString:@"iPod touch"])

///----<><><><><><><>------图片相关----------<><><><><><><><><><>-----
#define ImageNamed(_pointer)         [UIImage imageNamed:_pointer]

//---------**********--------字符串数组字典--------*************-------
//字符串拼接
#define NSStringWithFormat(...) [NSString stringWithFormat:__VA_ARGS__]
//返回安全字符
#define kSafeString(str) str.length > 0 ? str : @""
//金融类项目安全字符
#define StringBy(x) [NSString stringWithFormat:@"%.2f",[StringIs(x) doubleValue]]
#define StringIs(str) StringIsEmpty(str)?@"":str
//判断字符串空
#define StringIsEmpty(str) ([str isKindOfClass:[NSNull class]] || str == nil ? YES : NO )
#define stringEmpty(str) ([str isKindOfClass:[NSNull class]] || str == nil || [str length] < 1 ? YES : NO )
//数组是否为空
#define KArrayIsEmpty(array) (array == nil || [array isKindOfClass:[NSNull class]] || array.count == 0)
//字典是否为空
#define KDictIsEmpty(dic) (dic == nil || [dic isKindOfClass:[NSNull class]] || dic.allKeys == 0)
//是否是空对象
#define KObjectIsEmpty(_object) (_object == nil \
|| [_object isKindOfClass:[NSNull class]] \
|| ([_object respondsToSelector:@selector(length)] && [(NSData *)_object length] == 0) \
|| ([_object respondsToSelector:@selector(count)] && [(NSArray *)_object count] == 0))

///----<><><><><><><>------简单调用----------<><><><><><><><><><>-----

#define WeakSelf(self) __weak typeof (&*self) weakSelf = self
#define WEAKSELF typeof(self) __weak weakSelf = self;
#define StrongSelf(strongSelf) __strong typeof (&*weakSelf) strongSelf = weakSelf
//属性快速声明
#define kPropertyString(name) @property(nonatomic,copy)NSString *name
#define kPropertyStrong(type,name) @property(nonatomic,strong)type *name
#define kPropertyAssign(name) @property(nonatomic,assign)NSInteger name


//---------**********--------存读取本地数据--------*************-------
#define SAVE(object,key) [[NSUserDefaults standardUserDefaults]setObject:object forKey:key];[[NSUserDefaults standardUserDefaults]synchronize];

#define READ(key) [[NSUserDefaults standardUserDefaults]objectForKey:key]

#define REMOVE(key) [[NSUserDefaults standardUserDefaults] removeObjectForKey:key];

///----<><><><><><><>------系统对象----------<><><><><><><><><><>-----
//APP对象 （单例对象）
#define kApplication [UIApplication sharedApplication]
//主窗口 （keyWindow）
#define kKeyWindow [UIApplication sharedApplication].keyWindow
//NSUserDefaults实例化
#define kUserDefaults [NSUserDefaults standardUserDefaults]
//通知中心 （单例对象）
#define kNotificationCenter [NSNotificationCenter defaultCenter]
//APP版本号
#define kVersion [[[NSBundle mainBundle] infoDictionary] valueForKey:@"CFBundleShortVersionString"]
//系统版本号
#define kSystemVersion [[UIDevice currentDevice] systemVersion]

//---------**********--------自定义log--------*************-------
#ifdef DEBUG
#define NSLog(FORMAT, ...) fprintf(stderr,"%s:%d\t%s\n",[[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], __LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
#else
#define NSLog(FORMAT, ...) nil
#endif

#endif /* DefineHeader_h */
