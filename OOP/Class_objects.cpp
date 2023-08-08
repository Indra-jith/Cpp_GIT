#include<iostream>
using namespace std;

//Access modifiers

class Building{
    //by default -> private
    //attributes
    int door; //private by default
    string doorColor;
    public:
    int window; // from this it won't be accessible outside the class
    string windowColor;
    int elevator;

    //behavior
    void elevatorFunctioning(){
        //working of elevator
    }
};
int main()
{
    Building b1;
    b1.window; //ok
    //b1.door not acccessible, error
}