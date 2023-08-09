#include<iostream>
using namespace std;
//forward declaration
class B;
//otherwise line 15 won;t understand about B
class A{
    int data; //private// friend -> used to make it available for a function

    public:

    void setValue(int value){
        data = value;
    }   

    friend void printData(A,B);
};

class B{

    int data;

    public:
    void setValue(int value)
    {
        data = value;
    }
    friend void printData(A,B);
};

void printData(A obj1, B obj2){
    cout<< "Adding object values of A and B :";
    //since it was private(data) we add friend
    cout<<obj1.data<<" "<<obj2.data;
}

int main()
{
    A a1;
    a1.setValue(10);
    B b1;
    b1.setValue(20);
    printData(a1,b1);
}