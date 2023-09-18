#include <iostream>
using namespace std;

// Polymorphism -> Poly = many, Morph = forms
// Same thing but behaves differently

// Same entity (function or operator) behaves differently in
// different in different scenarios

/*Function Overloading --> in function overloading
we can use two functions having same name if they have different
parameters (either type or number of arguments)

It is a COMPILE TIME POLYMORPHISM because the compiler knows
which function to execute before the program is compiled*/

int sum(int num1, int num2)
{
    return num1 + num2;
}

double sum(double num1, double num2)
{
    return num1 + num2;
}

int sum(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}

int main()
{
    //--------------------------------------------------------------
    // int a = 5;
    // int b = 10;

    // int c = a + b; // notice this '+' operator here it is ADDING
    // cout << c;     // 15

    // cout << endl;

    // string x = "Hello";
    // string y = "World";

    // string z = x + y; // same + sign but behavior changed
    //                   // here it is CONCATENATION
    // cout << z;
    //---------------------------------------------------------------

    cout<<sum(2,3)<<endl;
}