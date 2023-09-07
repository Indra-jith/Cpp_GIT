#include<iostream>
using namespace std;
//NOTE->At the end of every string automatically '\0' is assigned
// Null character
//'\0' indicates that string has ended
void printString(char* str)
{
    for(int i = 0;str[i] != '\0'; i++)
    {
        cout<<str[i];
    }
}
int main()
{
    char* myString = "Hello world";
    printString(myString);
    
}