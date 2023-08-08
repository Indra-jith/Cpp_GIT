#include<iostream>
using namespace std;

struct Students{
    string name;
    int rollNo;
    float marks;
};
int main()
{
    // string name= "Alan";
    // int rollNo = 1222222;
    // float marks = 88.0;

    // string nam1 = "Raman";
    // int rollNo1=34567;
    // float marks1 = 80.00;
    Students student1;
    Students student2;

    student1.name = "Indra";
    student1.marks = 91.87;
    student1.rollNo = 11111;

    student2.name = "Alan";
    student2.marks = 87.56;
    student2.rollNo = 22222;

    cout << student1.marks <<endl;
    cout<< student1.name <<endl;
}