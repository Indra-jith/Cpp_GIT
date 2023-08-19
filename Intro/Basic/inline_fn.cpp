#include<iostream>
using namespace std;

class Square{
    double side;
    //class declaration = inline 
    public:
    void setSide(double s)
    {
        if(s>0)
        {
            side = s;
        }
    }
    double getArea(){return side*side;}
};
int main()
{
    Square s1;
    cout<<"Enter side: ";
    double size;
    cin>>size;
    s1.setSide(size);
    cout<<"Area is: "<<s1.getArea();
}