#include<iostream>
#include<math.h>
using namespace std;
int no_of_digits(int n)
{
    int a=0;
    while(n!=0)
    {
        n=n/10;
        a++;
    }
    return(a);
}
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int temp=num;
    int sum=0;
    int no_of_dig=no_of_digits(num);
    while(num!=0)
    {
        int rem=num%10;
        sum=sum+pow(rem,no_of_dig);
        num=num/10;
    }
    if(sum==temp)
    {
        cout<<temp<<" is an armstrong number";
    }
    else
    {
        cout<<temp<<" is not an armstrong number";
    }
}