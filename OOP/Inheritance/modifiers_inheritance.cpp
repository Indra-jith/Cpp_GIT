#include <iostream>
using namespace std;

/*
Public inheritance makes public members of the base class public in derived class, and protected members of base class
will remain protected in derived class.

protected inheritance makes the public and protected members of base class
protected in derived

private inheritance makes the public and protected members of base class
private us derived

private members of base class are inaccessible to the derived class

*/

class Base
{
public:
    int x;

protected:
    int y;

private:
    int z;
};

class PublicDerived : public Base
{
    /*
    x is public
    y is protected
    z is not accessible
    */
};

class ProtectedDerived : protected Base
{
   /*
   x is protected
   y is protected
   z is not accessible
   */
};

class PrivateDerived : private Base
{
   /*
   x is protected
   y is protected
   z is not accessible
   */
};

int main()
{
}