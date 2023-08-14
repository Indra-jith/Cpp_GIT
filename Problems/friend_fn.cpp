/*Define a class Rectangle with private attributes length
and width. Create a friend function named calculateArea 
that calculates the area of the rectangle.*/

#include<iostream>
using namespace std;

class Rectangle{
    int length,breadth;
    public:
    void setMeasurements(int a,int b)
    {
        length = a;
        breadth = b;
    }

    void print(){
        cout<<"Your number is : "<<length <<" + "<<breadth<<endl;
    }

    friend int calcArea(Rectangle);
};
int calcArea(Rectangle obj1)
{
    return obj1.length*obj1.breadth;
};
int main()
{
    Rectangle r1,r2;
    r1.setMeasurements(5,4);
    r1.print();
    int area = calcArea(r1); 
    cout<<area; //20
}

