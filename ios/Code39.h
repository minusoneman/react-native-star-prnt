#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Code39 : NSObject

+ (UIImage *)code39ImageFromString:(NSString *)strSource Width:(CGFloat)barcodew Height:(CGFloat)barcodeh;

@end
