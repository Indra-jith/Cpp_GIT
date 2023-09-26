#include <iostream>
using namespace std;

/*
    Protected -
    like provate members, prtoected members are inaccessible outside the class,
    howvever they can be accessed by derived class.

    We need protected members if we want to hide the data of a class,
    but still want that data to be inherited by its derived class.

*/

class Animal
{

protected:
    string type;

public:
    void eat()
    {
        cout << "I can eat" << endl;
    }

    void sleep()
    {
        cout << "I can sleep" << endl;
    }
};

class Dog : public Animal
{
public:
    void setType(string tp)
    {
        type = tp;
    }
};
int main()
{
}