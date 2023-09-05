#include<iostream>
using namespace std;

/*
Destructor -> same name as class but with a "~" sign.

Destructor is used to destory the object of a class when
the scope of object ends

It has the same name as the class and starts with ~ (tilde)
*/
class Person{
    public:
    //CONSTRUCTOR -> automatically called
    Person()
    {
        cout<<"Constructor called"<<endl;
    }

    //DESTRUCTOR -> also automatically called
    ~Person()
    {
        cout<<"Destructor called"<<endl;
    }

};
int main()
{
    Person p1,p2; // first both constructors will be called, then 
    //once it goes out of scope, both destructors are called
    //(Destructors are called when things are destroyed by themselves (happens automatically))

}