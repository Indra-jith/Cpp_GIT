// single parent multiple child (opposite of multiple)

/*
In this, we derive more than one child class from a base class
*/

class Animation
{
    // running
    // jumping
};

class character1 : public Animation
{
    // fly
};

class C : public Animation
{
    // swim
};

#include <iostream>
using namespace std;
int main()
{
}