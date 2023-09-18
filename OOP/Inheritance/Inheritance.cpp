/*
--Inheritance is a process in which one object acquires all the
properties and behaviours of its parent object successfully.

-- In such a way that we can reuse,extend or modify the attributes
and behvaviors which are defined in the other class.

-- Advantage - reusability

*/

#include <iostream>
using namespace std;

// class Base
// {

// };

// class Derived : public Base // - - - > Syntax
// {

// };


//NOTE: Single level inheritance 
// 1 parent 1 child
//or
// 1 base class 1 derived class

class Animal // can cantain all common things to all animals
{
    public:
    void eat()
    {
        cout<<"Animal is eating"<<endl;
    }
    void sleep()
    {
        cout<<"Animal can sleep"<<endl;
    }

};

class Dog : public Animal // - - - > Syntax
{
    //this will contain things specific to dog
    public:
    void bark()
    {
        cout<<"Dog is barking"<<endl;
    }
};

int main()
{
    Dog d1;
    d1.eat();
}