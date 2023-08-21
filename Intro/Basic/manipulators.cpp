// Manipulator - are the special functions that are used to
// change certain charactertistics of i/o o/p
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a = 123;

    cout <<  setfill('%') << setw(5) << a << endl;
}