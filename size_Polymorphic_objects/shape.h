#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <string>
#include <string_view>


class shape {
    public:
    shape()=default;
    shape (const std::string_view description)
        : m_description(description) {
             
        }
    ~shape(){

    }
    virtual void draw() const {
        std::cout <<"Shape::draw() called. \tDrawing " <<m_description<<std::endl;

    }
    protected:
    std::string m_description{""};
};
#endif //SHAPE_H