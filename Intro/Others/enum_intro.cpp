#include<iostream>
using namespace std;

enum season{summer=10, winter=20, autumn=30, spring=40};
//default ->    0         1          2          3

// or .. 
//enum season{
//     summer,winter,autumn,spring
// };


int main()
{
    season s1;
    s1=summer;
    cout<<s1<<endl; //10
}

/*
    enums - Enumeration is defined with enum keyword
          - Size of enum is 4 X (number of items inside) as 
            each constant is an integer of 4 byte.
          - collection of user defined datatypes for representing 
            integer based constants
    */