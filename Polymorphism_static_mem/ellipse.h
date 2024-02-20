#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "shape.h"


class Ellipse: public shape {
    public:
    // int m_count{0};
    Ellipse()
        : Ellipse(0.0,0.0,"NoDescription"){
            
        }
    Ellipse(double x_radius, double y_radius,  std::string_view description)
       : shape(description), m_x_radius(x_radius), m_y_radius(y_radius)
       {
        ++m_count;
    }
    ~Ellipse()
    {
        --m_count;
    }
    virtual int get_count() const override{
        return m_count;
    }
    //static int m_count;

    private:
    double m_x_radius;
    double m_y_radius;


};
#endif //ELLIPSE_H 