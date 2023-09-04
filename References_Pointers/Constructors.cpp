#include<iostream>
using namespace std;

//A constructor is a special type of member function that is called
//automatically when an object is created 

/*
Constructors name is same as the class name
*/

class Student{
    public:
    string name;
    int age;
    string gender;
    //HIDDEN METHOD WHICH IS CALLED WHEN CLASS IS INITIALIZED

    //Default constructor
    Student() //automatically called 
    {
        cout<<"Automatically called "<<endl;
    }
};

int main()
{
    Student s1; // - > this calls a method which we can't see AKA CONSTRUCTOR!
    // cout<< s1.age; //gives garbage value if no constructors since it is not initialized.

}