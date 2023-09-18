#include <iostream>
using namespace std;

/*Operator overloading -> we can overload an opeartor as long as we are operating
on user-defined types like objects and structures

We cannot use operator overloading for basic types such as
int,double etc.*/

// IT IS A COMPILE TIME POLYMORPHISM
class Count
{
    int value;

public:
    Count()
    {
        value = 10; // vale gets initialized to this as soon as an object
                    // is initialized
    }

    void operator++() //when this ++ opeartor is used..
    { // syntax void operator 'operator' ()
        value = value + 1; //can be anything 
    }

    void display()
    {
        cout << "Count : " << value << endl;
    }
};

int main()
{
    Count count1;
    ++count1;
    count1.display();
}