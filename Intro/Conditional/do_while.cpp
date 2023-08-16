#include<iostream>
using namespace std;
int main()
{
    int i=1;
    do{
        cout<<i<<endl;
        i++;
    }
    while(i<1); //first case is executed even if the condition is false
}