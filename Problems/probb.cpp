// Write a C++ class called "Employee" that has 
// three private member variables: "name", "salary", and
//  "employeeCode". The class should have a constructor 
//  that initializes these member variables and a public
//   member function called "displayInfo" that prints out 
//   the employee's name, salary, and employeeCode.


#include<iostream>
using namespace std;

class Employee{
    string name;
    int salary;
    int employeeCode;
    public:
    Employee()
    {
        cout<<"Default constructor has been called"<<endl;
    }
    Employee(string myName,int money,int empCode)
    {
        name = myName;
        salary = money;
        employeeCode = empCode;
    }
    void displayInfo(){
        cout<<"Name of employee is: "<<name<<endl;
        cout<<"Salary of employee is: "<<salary<<endl;
        cout<<"Employee code of employee is: "<<employeeCode<<endl;
    }
};

int main()
{
    Employee e1("Rohan",56000,1234);
    e1.displayInfo();
}