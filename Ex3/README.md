# Assignment3: File Handling in C++ Part1

## Overview

In this assignment we used file handling to read and process triangle data from a file. The implementation is split between two files: `Reader.cpp` and `Writer.cpp`. For this we used the `getline()` function, utilizing `istringstream` for string parsing, creating `Point3D` objects, and populating a vector of `Triangle` objects.

## Implementation Steps

1. **Implemented getline() function in getTriangles() in location `Ex3\Updated Sketchers\src\Reader.cpp`**.
2. **Used an istringstream to parse the string in location `Ex3\Updated Sketchers\src\Reader.cpp`**.
3. **Took all the values and pass each (x, y, z) values to the point3D class object in location `Ex3\Updated Sketchers\src\Reader.cpp`**.
4. **Added that object in the Triangle class type vector in location `Ex3\Updated Sketchers\src\Reader.cpp`**.
**Used a for each loop to print out the data from each object in write() function in location `Ex3\Updated Sketchers\src\Writer.cpp`**.
**Used a range-for loop to write the data from each object of Triangle stored in vector triangles in location `Ex3\src\Writer.cpp`**.