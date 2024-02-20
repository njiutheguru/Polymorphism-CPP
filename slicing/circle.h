#ifndef CIRCLE_H
#define CIRCLE_H
#include <string_view>
 #include <iostream>
 #include <cstring>    
 #include "oval.h" 
 class circle: public oval
 {
    public:
    circle()=default;
    circle(double radius, std::string_view description)
        : oval(radius, radius,description)
            {}
    ~circle(){
 
    }
virtual void draw() const {
    std::cout <<"circle::draw () called.\tDrawing "<<m_description <<" with m_x_radius : " <<get_x_radius() <<std::endl;
}

 };

 #endif //circle_h
