#include<iostream>
using namespace std;

class A{
    int a,b;

    public:

    A(int a,int b)
    {
        // a=a; //compiler: visible confusion
        // b=b; // not correct, garbage value
        this->a=a; 
        this->b=b; //compiler: UNDERSTOOD
    }

    void display()
    {
        cout<<a<<" "<<b<<endl;
    }
};

int main()
{
    A obj1(10,20);

    obj1.display(); //garbage value without "this"
    //proper value with this


}