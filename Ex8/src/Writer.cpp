#include <fstream>
#include "../headers/Writer.h"
#include "iostream"

Writer::Writer(/* args */)
{
}

Writer::~Writer()
{
}

void Writer::write(std::string filePath, std::vector<Triangle> &triangles)
{
  std::ofstream dataFile;
  dataFile.open(filePath);

  for (std::vector<Triangle> :: iterator it = triangles.begin(); it != triangles.end(); ++it)
  {
    std::cout << (*it).p1().x() << " " << (*it).p1().y() << " " << (*it).p1().z() << std::endl;
    std::cout << (*it).p2().x() << " " << (*it).p2().y() << " " << (*it).p2().z() << std::endl;
    std::cout << (*it).p3().x() << " " << (*it).p3().y() << " " << (*it).p3().z() << std::endl;
  }

  for (std::vector<Triangle> :: iterator it = triangles.begin(); it != triangles.end(); ++it)
  {
    dataFile << (*it).p1().x() << " " << (*it).p1().y() << " " << (*it).p1().z() << std::endl;
    dataFile << (*it).p2().x() << " " << (*it).p2().y() << " " << (*it).p2().z() << std::endl;
    dataFile << (*it).p3().x() << " " << (*it).p3().y() << " " << (*it).p3().z() << std::endl;
  }
  dataFile.close();
};