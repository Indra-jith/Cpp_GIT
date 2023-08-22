#include <iostream>
using namespace std;

int main()
{

    // int a = 5;
    // cout << &a << endl; //address of a

    // Pointers are also variables which stores the address of some variable

    int var = 10;

    int *ptr = &var;

    cout << &var << endl; //prints address of variable
    cout << ptr << endl; //ptr stores address of variable
    cout << *ptr << endl; //*ptr prints value stored at address in ptr
}