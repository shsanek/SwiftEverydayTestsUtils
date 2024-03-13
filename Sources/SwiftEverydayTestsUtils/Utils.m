//
//  Utils.c
//  
//
//  Created by Alex Shipin on 3/12/24.
//

#include "Utils.h"
#import <XCTest/XCTest.h>

void SETAssert(XCTestCase *test, const char *filePath, u_int32_t lineNumber, const char * text) {
    _XCTFailureHandler(test, false, filePath, lineNumber, @"Error", @"%s", text);
}
