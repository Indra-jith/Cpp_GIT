#include<iostream>
using namespace std;

//multi - level inheritance - when one class inherits another class
// which further inherited by another class.

class Animal{
public:
    void eat()
    {
        cout << "Animal is eating" << endl;
    }
    void sleep()
    {
        cout << "Animal can sleep" << endl;
    }
};

class Dog : public Animal{
    // this will contain things specific to dog
public:
    void bark()
    {
        cout << "Dog is barking" << endl;
    }
};

class BabyDog: public Dog{
    // this will contain things specific to dog
public:
    void woof()
    {
        cout << "Dog is woofing" << endl;
    }
};

int main()
{
    BabyDog b1; //has all authority
    
}