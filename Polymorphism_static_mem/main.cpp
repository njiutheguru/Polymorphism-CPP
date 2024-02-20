 #include <iostream>
 #include "shape.h"
 #include "ellipse.h"

 int main()
 {
    shape shape1("shape1");
    std::cout <<"shape count: "<<shape::m_count <<std::endl;//1

    shape shape2("shape2");
    std::cout <<"shape count: "<<shape::m_count <<std::endl;//2n

    shape shape3("shape3");
    std::cout <<"shape count: "<<shape::m_count <<std::endl;//3

    std::cout <<"***************************************"<<std::endl;

    //ellipse
    Ellipse ellipse1(10,12,"ellipse");
    std::cout <<"shape count : "<<shape::m_count<<std::endl;//4
    std::cout <<"ellipse count: "<<Ellipse::m_count<<std::endl; //1



    return 0;
 }