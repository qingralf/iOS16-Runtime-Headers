/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTImageUtilities : NSObject

+ (void)cropImageWhitespace:(struct CGImage { }*)arg1 outsideRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 insideRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 resultBlock:(id /* block */)arg4;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })transparencyInsetsForImage:(struct CGImage { }*)arg1 requiringFullOpacity:(bool)arg2;
+ (id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)arg1;
+ (id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)arg1 requiringFullOpacity:(bool)arg2;

@end