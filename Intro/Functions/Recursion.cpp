
//when a function calls itself
//void fn()
//        fn()

//example: fibonacci

#include<iostream>
using namespace std;

int fib(int n)
{
    //base case
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-1)+fib(n-2);
}
int main()
{
    cout<<fib(4);
}