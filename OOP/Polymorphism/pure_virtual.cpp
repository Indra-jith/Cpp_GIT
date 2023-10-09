#include <iostream>
using namespace std;

/*
Pure virtual function - A function for which we donot have an implementation.
We donot write any functionality in it, we just declare this function

Any class containing one or more pure virtual functions and not be used to
define any object.

These classes are also known as abstract classes.

Classes derived from abstract classes need to implement the pure virutal
function.

syntax :  virtual <function_type> <function_name() = 0;

*/

class Shape
{
    public:
    virtual float calculate_area() = 0;

};

class Square : public Shape{
    public:
    
};
int main()
{

}