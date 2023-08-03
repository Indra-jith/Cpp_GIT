#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter your marks : ";
    cin >> num;

    if(num < 0 || num > 100)
    {
        cout << "Invalid Marks";
    }
    else if(num >= 90 && num < 100)
    {
        cout << "Your grade is A";
    }
    else if(num >= 80 && num < 90)
    {
        cout << "Your grade is B";
    }
    else if(num >= 70 && num < 80)
    {
        cout << "Your grade is C";
    }
    else if(num >= 60 && num < 70)
    {
        cout << "Your grade is D";
    }
    else
    {
        cout << "You failed";
    }
}

