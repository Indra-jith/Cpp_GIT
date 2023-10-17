#include<iostream>
using namespace std;

class Number{
    int n;
    public:
    Number(int n)
    {
        this->n = n;
    }
    void print()
    {
        cout<<n;
    }
};

int main()
{
    /*
    float x =2.345;
    int y;
    y = x;
    */

   //---------------------------------------------------------------
   //1. Basic to class type conversion
   /*
   When we create object using the variables of primary data type then
   it is called as basic to class type conversion. G
   */
    Number num = 10;
    num.print();
    //-------------------------------------------------------
    /*
    2. class type to basic type
    When we assign an object to a primitive data type variable,
    it is known as class type to basic conversion. TO perform this type
    of conversion we have to define the casting operator function.

    This casting operator dunction must be member of member of class
    this function cannot have any return datatype
    this function cannot take any parameter
    operator datatype()
    {
    }
    */
}