#include<iostream>
using namespace std;
int main()
{
    // int i;
    // for(i=1;i<=10;i++)
    // {
    //     if(i==7)
    //     {
    //         break;
    //     }
    //     cout<<i<<" ";

    //     //1 2 3 4 5 6
    // }

    int i;
    for(i=1;i<=10;i++)
    {
        if(i==7)
        {
            continue;
        }
        cout<<i<<" ";

        //1 2 3 4 5 6 8 9 10
    }
}
