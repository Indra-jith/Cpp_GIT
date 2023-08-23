#include<iostream>
using namespace std;

int main()
{
    /*
    // use * to make a variable a pointer
    int i = 5;

    int *p = 0; //otherwise it will point to a garbage value
    p = &i; // already understood that p -> pointer so p= and no need for *p = 

    cout << p <<endl; //address of p
    cout << *p <<endl; //value at p
    */

   /*
   int num = 5;
   int a = num;
   cout << "num before : " << num << endl;
   a++; //does not affect num ( both are different entities )
   cout << "num after : " << num << endl;

   int *p = &num;
   cout << "before : " <<num<<endl;
   (*p)++; //does make an effect on num
   cout << "after : " <<num<<endl;

   // copy a pointer
   int *q = p;
   cout << p << " - " << q <<endl; //same thing
   cout << *p << " - " << *q <<endl; //also same
   */

  int i = 5;
  int *p = &i;

//   (*p)++;
//   cout << (*p)++ << endl;
  *p = *p + 1; //same thing as above (value by 1)
  //but what if
  cout<<"Address before: "<<p<<endl;
  p = p + 1; //address incremented by 4 (because it was taking 4 blocks in memory)
  cout<<"Address after: "<<p<<endl;
}