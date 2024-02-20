#ifndef OVAL_H
#define OVAL_H
#include <string_view>
 #include <iostream>
 #include <cstring>    
 #include "shape.h"
 class oval: public shape
 {
    public:
    oval()=default;
    oval(double x_radius, double y_radius, const std::string_view description)
        : shape(description),m_x_radius(x_radius),m_y_radius(y_radius)
        {}
    ~oval(){
 
    }
virtual void draw() const {
    std::cout <<"oval::draw () called.\t Drawing "<<m_description <<" with m_x_radius :" <<m_x_radius <<" and m_y_radius : "<<m_y_radius <<
    std::endl;

}
protected:
double get_x_radius()const {
    return m_x_radius;
}
double get_y_radius() const {
    return m_y_radius;
}
private:
double m_x_radius{0.0};
double m_y_radius{0.0};

 };

 #endif //oval_h
