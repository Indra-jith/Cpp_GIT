#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream inFile;
    ofstream Onfile;

    char ch;

    inFile.open("file1.txt");
    Onfile.open("newFile.txt");

    while(inFile.get(ch))
    {
        Onfile.put(ch);
    }


    inFile.close();
    Onfile.close();
}