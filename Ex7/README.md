# Assignment 7: Genralized capture with initialization

## Overview

In this assignment, a lambda expression named `displayMsgFileNotFound` has been implemented in the `Reader.cpp` file with `Genralized capture with initialization`.The purpose of this lambda expression is to provide a message indicating that the file was not found.

## Implementation Steps

1. **Implemented a lambda expression `getTriangles` function in location `Ex6\Updated Sketchees\src\Reader.cpp`**.
   ```
    std::string msg="Error Message";
    auto printMsgFileNotFound = [msg = "File not found"]()mutable
    {
        return msg;
    };

2. **Defined `displayMsgFileNotFound` with `Genralized capture with initialization` as `[msg = "File not found"]`.**
3. **This expression returns string to print `File not found` on the console if file was not found.**
4. **We implemented the same things on `Writer.cpp`.**