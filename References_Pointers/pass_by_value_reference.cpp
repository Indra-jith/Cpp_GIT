#include <iostream>
using namespace std;

// void test(int n){ //-> PASS BY VALUE
//     n++; //creates a copy and then does the operation
//     cout<<"Value of n from test method is : "<<n<<endl;
// }

void test(int &n){ //-> PASS BY REFERENCE
    n++; //references to the original variable
    cout<<"Value of n from test method is : "<<n<<endl;
}

int main()
{
    int n;
    cin >> n;
    test(n);

    cout << "Value of n from main method is "<<n<<endl;
    // will be same as the input given in case of call by value
    // will be updated here if input given in case of call by reference
}