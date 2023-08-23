#include<iostream>
using namespace std;

int main()
{
// NULL POINTERS
// - Which is pointing to nothing, if we don't have the address to be assigned
//   to a pointer, we can use NULL
    // int *p; //containing garbage value, not a good method
    // int *p = NULL;
    // cout<<p; //0


//Double pointers - we can create a pointer that in turn may point tp
// data or another pointer

int a = 5;
int *p = &a;
int **q = &p;

cout << &a <<endl;
cout << p <<endl;
cout << *q <<endl; //all 3 gives same stuff
cout<<endl;
cout<<&p<<endl;
cout<<q<<endl;//these 2 gives same stuff

cout<<a<<endl;
cout<<*p<<endl;
cout<<**q<<endl; //these 3 gives same stuff - 5

}