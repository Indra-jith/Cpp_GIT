#include <iostream>
using namespace std;

// Templates allows us to write generic progress.
// Can be implemented in two ways - 1.Function Templates
//                                  2.Class Templates

/*
1.Class template
    Declaration

    template <class T>
    class className{
        T var;
        T print(){
            ......
        }
    }

1.2 Defining class members outside class template
   template <class T>
   class className{
    T var;
    T print();
   };

   template<class T>
   T className<T>::print(){
    
   }
*/
template <class T>
class Number
{
    T num;

public:
    Number(T n)
    {
        num = n;
    }
    T getNum()
    {
        return num;
    }
};
int main()
{
    Number<int> n1(2);
    Number<float> n2(2.2);
    Number<double> n3(7.88);
    cout<<n1.getNum()<<" "; //2
    cout << n2.getNum() << " "; //2.2
    cout << n3.getNum() << " "; //7.88
}