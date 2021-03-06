// Generated by Apple Swift version 3.0.2 (swiftlang-800.0.63 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIImage;

SWIFT_CLASS("_TtC10SweetUIKit20OpenInSafariActivity")
@interface OpenInSafariActivity : UIActivity
@property (nonatomic, readonly) UIActivityType _Nullable activityType;
@property (nonatomic, readonly, copy) NSString * _Nullable activityTitle;
@property (nonatomic, readonly, strong) UIImage * _Nullable activityImage;
- (BOOL)canPerformWithActivityItems:(NSArray * _Nonnull)activityItems;
- (void)prepareWithActivityItems:(NSArray * _Nonnull)activityItems;
- (void)performActivity;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UICollectionView;
@class UICollectionViewLayout;
@class NSCoder;
@class NSBundle;

SWIFT_CLASS("_TtC10SweetUIKit25SweetCollectionController")
@interface SweetCollectionController : UIViewController
@property (nonatomic, strong) UICollectionView * _Nonnull collectionView;
- (nonnull instancetype)initWithCollectionViewLayout:(UICollectionViewLayout * _Nonnull)layout OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end

@class UITableView;

SWIFT_CLASS("_TtC10SweetUIKit20SweetTableController")
@interface SweetTableController : UIViewController
@property (nonatomic, strong) UITableView * _Nonnull tableView;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end

@class NSError;

@interface UIAlertController (SWIFT_EXTENSION(SweetUIKit))
/**
  Creates a dismissable alert controller.
  \param title The title.

  \param message The message.


  returns:
  The alert controller.
*/
+ (UIAlertController * _Nonnull)dismissableAlertWithTitle:(NSString * _Nonnull)title message:(NSString * _Nullable)message;
/**
  Creates a alert controller configurated for destructive confirmations.
  \param title The title.

  \param message The message.

  \param destructiveActionTitle The title for the destructive button.

  \param destructiveBlock The block to be run when the destructive action gets triggered.


  returns:
  The alert controller.
*/
+ (UIAlertController * _Nonnull)destructiveConfirmationAlertWithTitle:(NSString * _Nullable)title message:(NSString * _Nonnull)message destructiveActionTitle:(NSString * _Nullable)destructiveActionTitle destructiveBlock:(void (^ _Nullable)(void))destructiveBlock;
/**
  Creates an alert controller to display an error.
  \param error The error.


  returns:
  The alert controller.
*/
+ (UIAlertController * _Nonnull)errorAlert:(NSError * _Nonnull)error;
/**
  Creates an alert controller to be displayed for tasks that block the UI or require you to wait for a response.
  \param title The title.


  returns:
  The alert controller.
*/
+ (UIAlertController * _Nonnull)progressAlert:(NSString * _Nonnull)title;
@end


@interface UICollectionReusableView (SWIFT_EXTENSION(SweetUIKit))
@end

@class UICollectionViewCell;

@interface UICollectionView (SWIFT_EXTENSION(SweetUIKit))
- (void)register:(SWIFT_METATYPE(UICollectionViewCell) _Nonnull)cellClass;
- (void)registerNib:(SWIFT_METATYPE(UICollectionViewCell) _Nonnull)cellClass;
- (void)register:(SWIFT_METATYPE(UICollectionReusableView) _Nonnull)supplementaryViewClass ofKind:(NSString * _Nonnull)kind;
@end


@interface UIColor (SWIFT_EXTENSION(SweetUIKit))
/**
  Base initializer, it creates an instance of \code
  UIColor
  \endcode using an HEX string.
  \param hex The base HEX string to create the color.

*/
- (nonnull instancetype)initWithHex:(NSString * _Nonnull)hex;
/**
  Compares if two colors are equal.
  \param color A UIColor to compare.


  returns:
  A boolean, true if same (or very similar) and false otherwise.
*/
- (BOOL)isEqualTo:(UIColor * _Nonnull)color;
@end


@interface UIImage (SWIFT_EXTENSION(SweetUIKit))
/**
  Returns the perfect frame to center a UIImage in the screen.
*/
- (CGRect)centeredFrame;
- (nullable instancetype)initWithColor:(UIColor * _Nonnull)color size:(CGSize)size;
@end


@interface UILabel (SWIFT_EXTENSION(SweetUIKit))
/**
  Calculates the width of the text. Because of a crash in Swift 3, it uses self.attributedText instead of self.text.

  returns:
  The width of the text.
*/
- (CGFloat)width;
/**
  Calculates the height of the text.

  returns:
  The height of the text for the current width of the label
*/
- (CGFloat)height;
/**
  Sets the attributedString with line spacing.
  \param text The text.

  \param lineSpacing The line spacing (as used in Sketch).

*/
- (void)setSpacedOutText:(NSString * _Nonnull)text lineSpacing:(CGFloat)lineSpacing;
@end


@interface UILocalNotification (SWIFT_EXTENSION(SweetUIKit))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull idKey;)
+ (NSString * _Nonnull)idKey;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull fireDateKey;)
+ (NSString * _Nonnull)fireDateKey;
/**
  Schedules a local notification.
  \param id The id used to represent a local notification in your app.

  \param date The date when the notification will trigger

  \param soundName The name of the sound to be used when the notification is received.

  \param message The message that the app will use for your local notification.

  \param actionTitle The title of the action to be displayed by your notification, it’s optional, though, since Apple provides a good default for this.

*/
+ (void)schedule:(NSString * _Nonnull)id at:(NSDate * _Nonnull)date soundName:(NSString * _Nullable)soundName message:(NSString * _Nonnull)message actionTitle:(NSString * _Nullable)actionTitle;
/**
  Finds a local notification for certain id.
  \param id The id used to store the notification.


  returns:
  A local notification that matches the provided id.
*/
+ (UILocalNotification * _Nullable)find:(NSString * _Nonnull)id;
/**
  Cancels a local notification.
  \param id The id used to store the notification.

*/
+ (void)cancel:(NSString * _Nonnull)id;
/**
  Cancels all the local notifications for the current app.
*/
+ (void)cancelAll;
@end


@interface UIScrollView (SWIFT_EXTENSION(SweetUIKit))
/**
  A Boolean value that indicates whether the scrollView’s contentOffset is located at the top.
*/
@property (nonatomic, readonly) BOOL isAtTheTop;
/**
  A Boolean value that indicates whether the scrollView’s contentOffset is located at the bottom.
*/
@property (nonatomic, readonly) BOOL isAtTheBottom;
@end

@class UITableViewCell;
@class UITableViewHeaderFooterView;

@interface UITableView (SWIFT_EXTENSION(SweetUIKit))
- (void)register:(SWIFT_METATYPE(UITableViewCell) _Nonnull)cellClass;
- (void)registerNib:(SWIFT_METATYPE(UITableViewCell) _Nonnull)cellClass;
- (void)registerHeaderFooter:(SWIFT_METATYPE(UITableViewHeaderFooterView) _Nonnull)viewClass;
@end


@interface UITableViewCell (SWIFT_EXTENSION(SweetUIKit))
@end


@interface UITableViewHeaderFooterView (SWIFT_EXTENSION(SweetUIKit))
@end


@interface UIView (SWIFT_EXTENSION(SweetUIKit))
/**
  Shakes the view. Useful for displaying failures to users.
*/
- (void)shake;
- (nonnull instancetype)initWithAutoLayout:(BOOL)autoLayout;
- (void)fillSuperviewWith:(UIEdgeInsets)insets;
- (void)setWithHeight:(CGFloat)height;
- (void)setWithWidth:(CGFloat)width;
- (void)attachToTop;
@end

@class UIWindow;

@interface UIViewController (SWIFT_EXTENSION(SweetUIKit))
/**
  Returns the main application window.
*/
- (UIWindow * _Nonnull)applicationWindow;
@end

#pragma clang diagnostic pop
