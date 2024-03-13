//
//  Utils.h
//  
//
//  Created by Alex Shipin on 3/12/24.
//

#ifndef Utils_h
#define Utils_h

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

@class XCTestCase;
void SETAssert(XCTestCase * test, const char *filePath, u_int32_t lineNumber, const char * text);

#ifdef __cplusplus
}
#endif

#endif /* Utils_h */
