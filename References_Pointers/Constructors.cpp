#include<iostream>
using namespace std;

//A constructor is a special type of member function that is called
//automatically when an object is created 

/*
Constructors name is same as the class name


Default constructor has not parameters, however input arguments
are available for paramterized constructors and copy
constructors. 

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
        cout<<"Default constructor invoked "<<endl;
    }

    Student(string myGender)
    {
        gender = myGender;
    }

    //Parameterized constructor
    Student(string myName,int myAge)
    {
        cout<<"Parameter constructor invoked "<<endl;
        name = myName;
        age = myAge;
    }
};

int main()
{
    Student s1; // - > this calls a method which we can't see AKA CONSTRUCTOR!
    // cout<< s1.age; //gives garbage value if no constructors since it is not initialized.
    Student s2("Hello",18);
    Student s3("M"); //-> Normal
    // Student s3("M",33); // -> But this actually calls the method with 2 parameters
    cout<<s2.name<<endl; // prints hello..
    cout<<s2.age<<endl; // 18
    cout<<s3.gender;


}