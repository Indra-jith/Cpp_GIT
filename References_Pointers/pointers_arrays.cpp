#include<iostream>
using namespace std;

int main()

{
    int arr[10] = {23,122,41,67}; //other 6 initialized with garbage values

    cout <<"1 - "<<arr <<endl;
    cout<<"2 - "<<arr[0]<<endl;//23
    cout<<"3 - "<<&arr[0]<<endl;
    //1 and 3 is the same
    cout<<"4 - "<<*arr<<endl; //23
    cout<<"5 - "<<*arr+1<<endl; //23+1
    cout<<"6 - "<<*(arr+1)<<endl;//122
    cout<<"7 - "<<*(arr)+1<<endl;//122
    cout<<"8 - "<<arr[2]<<endl;//41
    cout<<"9 - "<<*(arr+2);
    
    
}