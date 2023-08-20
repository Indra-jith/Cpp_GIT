//Library management system

#include<iostream>
using namespace std;

class Library{
    int bookId;
    string name;
    public:
    static int count;
    void setDetails(int n,string s)
    {
        bookId=n;
        name=s;
        count++;
    }
    void printDetails()
    {
        cout<<"Name of book is : "<<name<<endl;
        cout<<"The ID is : "<<bookId<<endl;
    }
    static int number()
    {
        return count;
    }
};
int Library::count=1;

    int main()
    {
        int n;
        string s;
        cout<<"How many books?";
        int numberofBooks;
        cin>>numberofBooks;
        Library L[numberofBooks];
        for(int i=0;i<numberofBooks;i++)
        {
            cout<<"Enter the name of book "<<Library::count<<": ";
            cin>>s;
            cout<<"Enter it's Id: ";
            cin>>n;
            L[i].setDetails(n,s);
            L[i].printDetails();
        }
    }
