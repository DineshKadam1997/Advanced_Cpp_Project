# Assignment 8 - Implementation of Iterators.
 
## Overview
In this assignment we used iterators to print vertex points on the console. The task involves defining an iterator type for a vector of triangles and subsequently iterating through the vector to display the vertex coordinates.
 
## Implementation
 
1. **Defined Iterator Type as `Vector of Triangles` in `write` function in `\Ex8\src\Writer.cpp`**.
 
2. **The iterator type is declared explicitly as `std::vector<Triangle>::iterator`**.
 
3. **Iterator Values and Output:**
 
1) The iterator is used in a for loop to traverse the vector of triangles.
 
2) The vertex points (p1, p2, and p3) for each triangle are printed to the console using the iterator.
 
3) The following code snippet exemplifies the iterator implementation:
 
```
for (std::vector<Triangle>::iterator it = triangles.begin(); it != triangles.end(); ++it)
{
    std::cout << (*it).p1().x() << " " << (*it).p1().y() << " " << (*it).p1().z() << std::endl;
    std::cout << (*it).p2().x() << " " << (*it).p2().y() << " " << (*it).p2().z() << std::endl;
    std::cout << (*it).p3().x() << " " << (*it).p3().y() << " " << (*it).p3().z() << std::endl;
}
```
4. **The `*it` notation is a `dereferencing` operation applied to an iterator, allowing access to the value pointed to by the iterator**.