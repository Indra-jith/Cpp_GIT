#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //writing
    // ofstream file ("test.bin", ios::binary);
    // int p = 1234;
    // int q = 5678;
    // file.write((char*)&p,sizeof(p));
    // file.write((char*)&q,sizeof(q));

    ifstream file("test.bin",ios::binary);
    int p;
    file.read((char*)&p,sizeof(p));
    cout<<"Value of p is: "<<p<<endl;
    file.close();
}