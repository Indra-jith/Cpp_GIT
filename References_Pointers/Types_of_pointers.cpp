#include<iostream>
using namespace std;

int main()
{
//1.  NULL POINTERS
// - Which is pointing to nothing, if we don't have the address to be assigned
//   to a pointer, we can use NULL
    // int *p; //containing garbage value, not a good method
    // int *p = NULL;
    // cout<<p; //0


//2. DOUBLE POINTERS - we can create a pointer that in turn may point tp
// data or another pointer

// int a = 5;
// int *p = &a;
// int **q = &p;

// cout << &a <<endl;
// cout << p <<endl;
// cout << *q <<endl; //all 3 gives same stuff
// cout<<endl;
// cout<<&p<<endl;
// cout<<q<<endl;//these 2 gives same stuff

// cout<<a<<endl;
// cout<<*p<<endl;
// cout<<**q<<endl; //these 3 gives same stuff - 5

//3. VOID POINTERS - generic pointer
//It is a generic pointer and it has no associated type with it 
//It can hold an address of any type.
//IT cannot be dereferenced

// double i = 5;
// void *ptr = &i;


//4. WILD POINTERS - when a pointer is declared but not initialised
//They point at a random memory location
// int a = 5;
// int *p;
// cout<<p<<endl; //garbage addresss
// cout<<*p<<endl; //garbage value


//5. DANGLING POINTERS
// A pointer towards a memory location that has been deleted.
}
