/*Write a C++ class called "Rectangle" that has two private member variables: 
"length" and "width". The class should have a constructor that 
initializes these member variables and public member functions 
called "getArea" and "getPerimeter" that return the rectangle's 
area and perimeter, respectively.*/


#include<iostream>
using namespace std;

class Rectangle{
    int length;
    int breadth;
    public:
    Rectangle()
    {
        cout<<"Default constructor has been called"<<endl;
    }
    Rectangle(int l,int b)
    {
        length = l;
        breadth = b;
    }
    
    int getArea()
    {
        return length*breadth;
    }

    int getPerimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    Rectangle r1(20,10);
    cout<<"Area of rectangle is: "<<r1.getArea()<<endl;
    cout<<"Perimeter of rectangle is: "<<r1.getPerimeter()<<endl;
}