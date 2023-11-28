#include "../headers/Triangulation.h"
#include "../headers/Triangle.h"

Triangulation::Triangulation(std::list<Triangle> triangles)    //Use of List instead of vectors
:mBBox(triangles)
{
    mTriangles=triangles;
}

Triangulation::~Triangulation()
{
}

std::list<Triangle> Triangulation::getTriangles(){
    return mTriangles;
}