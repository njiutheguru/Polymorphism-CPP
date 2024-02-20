 #include <iostream>
 #include <memory>
#include <cstring>
#include "shape.h"
#include "oval.h"
#include "circle.h"

using namespace std;
 
 int main()
 {
  circle circle1(7.2,"circle1");
  oval oval1(13.3,1.2,"oval1");
  circle circle2(11.2,"circle2");
  oval oval2(31.3,15.2,"oval2");
  circle circle3(12.2,"circle3");
  oval oval3(53.3, 9.2, "oval3");
 

  
  shape *shapes3[] {&circle1,&oval1,&circle2,&oval2,&circle3,&oval3};
  for(shape* shape_ptr :shapes3){
    shape_ptr->draw();
    std::cout <<std::endl;
  }
//using smart pointers
//overriding uses the override keyworkd which is different from overloading 
//let's introduce the vietual method overloads 
//introducing override in cpp
  return 0;    
 }  