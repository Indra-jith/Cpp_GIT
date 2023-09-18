//NOT(!) WILL SWAP THE VALUES

#include <iostream>
#include<algorithm>
using namespace std;

class Shift
{
    int a;
    int b;

public:
    Shift()
    {
        a=0;
        b=0;
    }

    void setValues()
    {
        cout<<"Enter the first value: ";
        cin>>a;
        cout<<"Enter the second value: ";
        cin>>b;
    }

    void operator !()
    {
        swap(a,b);
    }

    void displayValues()
    {
        cout<<"First value is "<<a<<endl;
        cout<<"Second value is "<<b<<endl;
    }
};
int main()
{
    Shift s1;
    s1.setValues();
    !s1;
    s1.displayValues();
}