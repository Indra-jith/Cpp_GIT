#include<iostream>
using namespace std;

void printName(string name)
{
    cout << "The name is : " << name <<endl;
}
// void printName(string name = "hello")
//then no argument is needed 
//if argument is present, overriding takes place

void fullName(string firstName, string lastName)
{
    cout<<"First name is : "<<firstName<<"and last name is : "<<lastName<<endl;
}

void myFunction(string name,float marks)
{
    cout<<"My name is "<<name<<" and i got "<<marks<<" in 12th"<<endl;
}
int main()
{
    myFunction("indrajith",98.5);
    fullName("Hello","world");
    printName("Hello");
}