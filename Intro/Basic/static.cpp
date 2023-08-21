#include<iostream>
using namespace std;

class Employee{
    static int count;
    string name;
    int emp_id;
    public:
    void setDetails(string n,int i)
    {
        name=n;
        emp_id=i;
        count++;
    }
    static int countdisplay()
    {
        return count;
    }
    void displayDetails()
    {
        cout<<"Name of employee"<<countdisplay() <<" is "<<name<<endl;
        cout<<"ID of employee "<<countdisplay() <<" is "<<emp_id<<endl;
    }
};
int Employee::count=0;
int main()
{
    Employee e1,e2;
    int id;
    string n;
    cin>>n;
    cin>>id;
    e1.setDetails(n,id);
    e1.displayDetails();
    int id2;
    string n2;
    cin>>n2;
    cin>>id2;
    e2.setDetails(n2,id2);
    e2.displayDetails();
}