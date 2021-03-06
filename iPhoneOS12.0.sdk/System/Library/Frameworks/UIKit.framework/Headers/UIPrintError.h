#if USE_UIKIT_PUBLIC_HEADERS || !__has_include(<UIKitCore/UIPrintError.h>)
//
//  UIPrintError.h
//  UIKit
//
//  Copyright 2010-2018 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>

NS_ASSUME_NONNULL_BEGIN

UIKIT_EXTERN NSErrorDomain const UIPrintErrorDomain __TVOS_PROHIBITED;

typedef NS_ERROR_ENUM(UIPrintErrorDomain, UIPrintErrorCode) {
    UIPrintingNotAvailableError = 1,  // cannot print at this time
    UIPrintNoContentError,            // empty list of files or images
    UIPrintUnknownImageFormatError,   // unrecognized image format
    UIPrintJobFailedError,            // internal error with print job
} __TVOS_PROHIBITED;

NS_ASSUME_NONNULL_END

#else
#import <UIKitCore/UIPrintError.h>
#endif
