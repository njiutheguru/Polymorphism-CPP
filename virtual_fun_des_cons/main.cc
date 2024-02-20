#include <iostream>
#include <string_view>
#include <string>
#include <memory>

using namespace std;
class base {
    public:
    base(){
        cout <<"Base constructor called" <<endl;
        this->setup(); //static binding kicks in here
    }
    virtual ~base() {
    cout<<" Base destructor called.."<<endl;
    }
    virtual void setup(){
        cout<<"Base::setup called "<<endl;
        m_value=10;
    }
    virtual void clean_up(){
        cout<<"Base clean_up called "<<endl;
    }
    int get_value()
    {
        return m_value;
    }
    protected:
        int m_value;

};

class derived: public base
{
    public:
        derived()
         :base() {
            cout<<"derived constructor called "<<endl;
         }
         virtual ~derived() {
            cout<<"Derived destructor called "<<endl;
         }
         virtual void setup() override {
            cout<<"Derived::setup() called "<<endl;
            m_value=100;
         }
         virtual void clean_up() override {
            cout <<" Derived::clean_up() called " <<endl;
         }
};
int main()
{

    base  *p_base=new derived;  
    p_base ->setup();
    auto value=p_base->get_value();
    cout <<"value: " <<value << endl; //100
    delete p_base;
    /*
        -if a class has at least one pure virtual function, it becomes an abstract class
        -you can't create objects of an abstract class, if you do that, you'll get a hard compiler error
        -derived classes from an abstract class must explicitly override all the pure virtual  functions 
        from the abstract parent class, if they don't they themselves become  abstract.
        -pure virtual functions don't have  an implementation in the abstract class. They are meant to be implemented by deriving classes.
        -You can't call the pure virtual functions from the constructor of the abstract class.

        -The constructor of the abstract class is used by deriving class to build up the base part of the object..  
    
    -An abstract class with only pure virtual functions and no member variable can 
    be used to model what is called an interface in OOP
    -An interface is a specification of something that will be fully implemented in a derived class, but the specification itself resides in the abstract class.
     




    */




    return 0;
}