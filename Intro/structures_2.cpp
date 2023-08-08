#include<iostream>
using namespace std;

struct Employee{
    int age;
    float salary;
    int employeeId;
};

void displayInfo(Employee emp){
    cout<< "Age is "<< emp.age<<endl;
    cout<< "Salary is "<< emp.salary<<endl;
    cout<< "Employee ID is "<< emp.employeeId<<endl;
}

int main()
{
    Employee e1;
    Employee e2;

    e1.age = 30;
    e1.salary = 1000;
    e1.employeeId = 007;

    e2.age = 20;
    e2.salary = 3000;
    e2.employeeId = 12;

    displayInfo(e1);
    displayInfo(e2);
}