#include<iostream>
using namespace std;

class Number{
    int a;

    public:
    Number()
    {
        cout<< "Default constructor"<<endl;

        a = 0;
    }

    Number(int num)
    {
        cout<< "Parameter constructor"<<endl;

        a = num;
    }

    //COPY CONSTRUCTOR
    Number(Number &obj)
    {
        cout<<"Copy constructor "<<endl;
        a=obj.a;
    }

    void display()
    {
        cout<<"The value of a is : "<<a<<endl;
    }
};

int main()
{
    Number n1;
    n1.display();
    Number n2(10);
    n2.display();
    Number n3(n2);
    n3.display(); //10 because in n2 it was 10
    //if it was n3(n1) it would have displayed 0
    

}