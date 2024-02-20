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
  shape shapes1[] {circle1,oval1,circle2,oval2,circle3,oval3};
      std::cout<<"sizeof (circle): " <<sizeof(circle1) <<std::endl;

  for(shape s: shapes1){
    
    std::cout<<"sizeof (object): " <<sizeof(s) <<std::endl;
    s.draw(); //
  
  }
  /*the above array does not work ....
  //what if we try references? References in this arrays are not left assignable and results in compiler errors

  //what if we store the data in base pointers?? This one works perfectly since polymorphism was created to work with base pointers(mostly...)
  shape *shapes3[] {&circle1,&oval1,&circle2,&oval2,&circle3,&oval3};
  for(shape* shape_ptr :shapes3){
    std::cout <<"Inside array, sizeof(*shape_ptr): "<<sizeof(*shape_ptr)<<std::endl;    
    shape_ptr->draw();
    std::cout <<std::endl;
  }
*/
//using smart pointers
std::shared_ptr<shape> shapes3[]{std::make_shared<circle> (12.2,"circle"),std::make_shared<oval>(10.0,20.0,"oval4")};
for(auto & s: shapes3) {
  s->draw();
}
//introducing override in cpp
  return 0;    
 }  