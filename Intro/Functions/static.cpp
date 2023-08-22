#include<iostream>
using namespace std;

class Students{
    int id;
    static int count;

    public:

    void setData(){
        cout << "Enter the id : " << endl;
        cin>>id;
        count++;
    }

    void getData()
    {
        cout << "The id of student is : "<<id<<endl;
        cout<<"And the student count is "<<count<<endl;
    }
};
int Students::count;
int main()
{
    Students s1,s2,s3;

    s1.setData();
    s1.getData();

    s2.setData();
    s2.getData();

    s3.setData();
    s3.getData();
}