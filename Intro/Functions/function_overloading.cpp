#include<iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

float add(float a, float b){
    return a+b;
}

int main()
{
    //matches with arguments
    cout<<add(2,2)<<endl;//matches with the first fn
    cout<<add(2.2f,2.2f);//matches with the second fn
}