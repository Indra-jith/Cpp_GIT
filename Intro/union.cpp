#include<iostream>
using namespace std;

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
    cout << sizeof(car1)<<endl;
    cout << sizeof(bike1)<<endl;
}