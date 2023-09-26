#include <iostream>
using namespace std;

// multiple inheritance - when one child class inherits from two
//or more classes

class A
{
public:
    void eat()
    {
        cout << "Animal is eating" << endl;
    }
    void sleep()
    {
        cout << "Animal can sleep" << endl;
    }
};

class B
{
    // this will contain things specific to dog
public:
    void bark()
    {
        cout << "Dog is barking" << endl;
    }
};

class C : public A, public B
{
    // this will contain things specific to dog
public:
    void woof()
    {
        cout << "Dog is woofing" << endl;
    }
};

int main()
{
    return 0;
}