//
//  Constants.h
//  Brow
//
//  Created by Tim Schröder on 27.06.16.
//  Copyright © 2016 Tim Schröder. All rights reserved.
//


typedef enum {
    Safari,
    Chrome,
    Firefox
} Browser;

#define FIREFOX_OUTPUT_PATH @"/Library/Caches/Metadata/Brow/Firefox"
#define CHROME_OUTPUT_PATH @"/Library/Caches/Metadata/Brow/Chrome"

#define BROW_HELPER_UTI @"com.timschroeder.brow-helper"

#define BOOKMARK_KEY_NAME @"Name"
#define BOOKMARK_KEY_URL @"URL"
#define BOOKMARK_KEY_BROWSER @"Browser"

#define FIREFOX @"Firefox"
#define CHROME @"Chrome"