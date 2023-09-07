#include<iostream>
using namespace std;

int main()
{
    int i=11;
    int* ptr1 = &i; //single pointer
    int** ptr2 = &ptr1; //double pointer

    cout<<"Value of i using ptr1: "<<*ptr1<<endl;
    cout<<"Value of i using ptr2: "<< **ptr2 <<endl;

}