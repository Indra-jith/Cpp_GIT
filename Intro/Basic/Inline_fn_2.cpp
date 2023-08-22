/*

A function is used to reduce the code redundancy, as well as tp save memory space
as invoked, a bunch of tasks are performed like mathching return 
matching arguments and stuff which are happening on internal pov.

But when function definition consist of hardly one or
two statements, then this bunch of tasks appear to be time 
consuming 

SOLUTION --> We use the concept of inline functions
when a function is declared inline, the "FUNCTION BODY" is
replicated at function calling space.

*/

#include<iostream>
using namespace std;

inline int add(int a,int b){
    return a+b;

}

int main()
{
    cout<<"SUM : "<<add(2,3);
                  //the above thing gets replaces by the main fn body

}
