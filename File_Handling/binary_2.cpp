#include <iostream>
#include <fstream>
#include<string.h>
using namespace std;

class Employee
{
public:
    int id;
    char name[30];
    char address[50];
    Employee(int _id, string _name, string _address)
    {
        id = _id;
        // name = _name;
        // address = _address;
        strcpy(name,_name.c_str()); // <- important
        strcpy(address, _address.c_str());
    }
    void info()
    {
        cout << "ID: " << id << "\tName : " << name << "\tAddress : " << address << endl;

    }
};

void Create(Employee obj)
{
    ofstream file("details.dat",ios::binary);
    file.write((char*)&obj,sizeof(obj));
    file.close();
}
int main()
{
    Employee a(1,"ABC","J&K");
    Employee b(2,"DEF","Punjab");
}