#include <iostream>
#include <cstring>
#include "shape.h"
#include "oval.h"
#include "circle.h"

//using namespace std;
void draw_circle(const circle& circle) {
    circle.draw();
}
void draw_oval(const oval & oval) {
    oval.draw();
}
 
 int main(){

    shape shape1("shape1");
    // shape1.draw();
    oval oval1(2.0,3.5,"oval1");
   // oval1.draw();
    circle circle1(3.3,"circle1");
   // circle1.draw();

    shape *shape_ptr=&shape1;
    shape_ptr-> draw();

  shape_ptr=&oval1;
    shape_ptr-> draw();

    shape_ptr=&circle1;
    shape_ptr-> draw();

   // oval * shape_ptr1=&oval1;
   //c   shape_ptr1->draw();

   //Base references ~static binding
   //e.g
   shape& shape_ref =oval1;
   shape_ref.draw();
   //drawing shapes 
   draw_circle(circle1);
   draw_oval(oval1);

//instead of the two last functions, we can have dynamic binding 

//introducing dynamic binding /polymorphism with  the virtual functions 





    /*
    polymorphism
    using a base pointer to manage the derived classes and objects
     - Polymorphism also allows us to store base pointers in a collection like array but array with different types of objects   
    -Polymorphism def: a base pointer or reference managing derived class objects
    e.g
    shape * Shape =new circle;
    shape * Shape= new rectangel;
    shape * Shape =new oval;

    shape& ref1 {&Shape1};
    shape& ref2 {&Shape2};
    shape& ref3 {&Shape3};

    //releasing the memory 
    ***

Managing derived objects in memory through base pointers or 
references and getting the right called on the base pointer or reference. 
    ***
     
    */

return 0;

 }