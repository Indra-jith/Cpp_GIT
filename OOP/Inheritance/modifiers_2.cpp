#include <iostream>
using namespace std;

class Base
{
private:
    int private1 = 1;

protected:
    int protected1 = 2;

public:
    int public1 = 3;

    int getPrivateValue()
    {
        return private1;
    }
};

// class PublicDervied : public Base{
//     public:
//     int getProtectedValue()
//     {
//         return protected1;
//     }
// };

class ProtectedDervied : protected Base
{
public:
    int getProtectedValue()
    {
        return protected1;
    }

    int getPublicValue()
    {
        return public1;
    }
};

int main()
{
    // PublicDervied obj1;
    // cout<<"Public: "<<obj1.public1<<endl;
    // cout<<"Private: "<<obj1.getPrivateValue()<<endl;
    // cout<<"Protected : "<<obj1.getProtectedValue()<<endl;

    ProtectedDervied obj1;
    cout << "Public: " << obj1.getPublicValue() << endl;
    cout << "Protected : " << obj1.getProtectedValue() << endl;
}