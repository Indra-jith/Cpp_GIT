//Vector is a part of Standard Template Library (STL)

/*
Similar to arrays
Unlike arrays, size of vectors can be changed dynamically
*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vector1={1,2,3,4,5};

    for(auto i: vector1){
        cout<<i<<" ";
    } cout<<endl;

    //add element
    vector1.push_back(6);
    vector1.push_back(7);

    cout<<"ELement at 1 is: "<<vector1.at(1)<<endl;

    //change
    vector1.at(1) = 22;

    //delete
    vector1.pop_back(); //removes the last element

    cout<<"Updated vector : ";
    for(auto i :  vector1)
    {
        cout<<i<<" ";
    }cout<<endl;
}
