#include<iostream>
using namespace std;
int main()
{
    int num,rev_num;
    rev_num=0;
    cout<<"Enter your number: ";
    cin>>num;
    while(num!=0)
    {
        int rem=num%10;
        rev_num=rev_num*10+rem;
        num=num/10;
    }
    cout<<"Reverse of the number is "<<rev_num;
}