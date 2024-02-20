 #include <iostream>
#include <cstring>
#include "shape.h"
#include "oval.h"
#include "circle.h"

using namespace std;
 
 int main()
 {
  //comparing the sizes of sizes
   std::cout <<" Size of shape : "<<sizeof(shape)<<std::endl;
    std::cout <<" Size of oval : "<<sizeof(oval)<<std::endl;
     std::cout <<" Size of circle : "<<sizeof(circle)<<std::endl;

//slicing
circle circle1(3.3,"circle1");
shape shape1 =circle1; 
shape1.draw(); //shape::draw
//because we are not using base pointers or base references, we are not going to get  dynamic polymorphism results
//in this example we are only using raw objects...
  return 0;
 } 