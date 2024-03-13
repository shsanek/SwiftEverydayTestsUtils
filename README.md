# SwiftEverydayTestsUtils

This is a library with frequently used test utility code. At the moment it has only one function which `SETAssert` allows to point to an error in an arbitrary file. This cannot be done in standard Swift because XCTAssert accepts only StaticString as file argument.
