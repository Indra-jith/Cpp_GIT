#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number between 1 and 5 : ";
    cin>>num;
    switch (num)
    {
        case 1 : cout << "You entered number 1" << endl;
        break;

        case 2 : cout <<"You entered number 2" <<endl;
        break;

        case 3 : cout <<"You entered number 3" <<endl;
        break;

        case 4 : cout <<"You entered number 4" <<endl;
        break;

        case 5 : cout <<"You entered number 5" <<endl;
        break;
        
        default: cout <<"The number is not in the range from 1 to 5" <<endl;
        break;
    }
}