#include<iostream>
using namespace std;
int maximum(int num1,int num2,int num3)
{
    if(num1>=num2 && num1>=num3)
    {
        return num1;
    }
    else if(num2>=num1 && num2>=num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

int minimum(int num1,int num2,int num3)
{
    if(num1<=num2 && num1<=num3)
    {
        return num1;
    }
    else if(num2<=num1 && num2<=num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

int main()
{
    int num1,num2,num3;
    cout<<"Enter the 3 numbers :";
    cin>>num1>>num2>>num3;
    cout<<"The maximum of three numbers is "<<maximum(num1,num2,num3)<<endl;
    cout<<"The minimum of three numbers is "<<minimum(num1,num2,num3)<<endl;
}