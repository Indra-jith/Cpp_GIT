#include <iostream>
#include <set>
using namespace std;

// Set - they store UNIQUE elemens of SAME TYPE in SORTED manner
//  Immutable -- we can add or remove elements from a set but
// we can't change the values of exisiting elements.

int main()
{
    set<int> mySet = {5,3,8,1,3};
    //set[2]=80; //nope it is immutable
    mySet.insert(4);
    for(auto val : mySet)
    {
        cout<<val<<" ";
    }
}