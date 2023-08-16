#include<iostream>
using namespace std;

/*
    *Struct
        - Structure is defined with struct keyword
        - size of a structure is sum of all individual elements inside it. 
        - Structure is a collection of user defined data types stored at different memory locations.
        - Not Memory efficient

    *Union
        - Union is defined with union keyword
        - Size of union is the largest element inside it.
        - Union is a collection of user defined data types stored at same memory locations.
        - Memory efficient
*/

union car{
    char name[20];
    int price;
};//this union takes 20 bytes

struct bike{
    char name[20];
    int price;
}; //this structure takes 24 bytes

int main()
{
    car car1;
    bike bike1;
    cout << sizeof(car1) << endl;
    cout << sizeof(bike1) << endl;
}