#include <iostream>
using namespace std;

/*
Hybrid inheritance is a combination of more than one
type of inheritamce
*/

class A{

};

class B: public A{        //single level

};

class C{

};

class D : public C,public B{  //multiple

};

//both single and multiple so hybrid
int main()
{

}