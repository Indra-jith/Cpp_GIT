#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    //INPUT STREAM
    // ofstream onFile; //created an object called onFile

    // // open ->
    // onFile.open("file.txt");

    // // or instead
    // // onFile.open("C:\\Users\\indra\\Desktop\\test.txt");

    //towrite--
    // onFile << "Printed in file"; //this is writed into the file.txt

    // cout<<"File Updated"<<endl; //just prints on console
    // onFile.close();

// -------------------------------------------------------------- 

//INPUT STREAM

    // ifstream inFile;
    // string str;
    // inFile.open("file.txt");
    // // inFile>>str;

    // cout<<"File content: ";
    // while(getline(inFile,str))
    // {
    //     cout<<str;
    // }

    // inFile.close();

    ofstream onFile;
    string str;
    getline(cin,str);
    onFile.open("5_enemies.txt");
    onFile<<str;
    cout<<"File got updated with the input string"<<endl;
    onFile.close();
    ifstream Infile;
    string str1;
    Infile.open("5_enemies.txt");
    cout<<"5 enemies are: ";
    while(getline(Infile,str1))
    {
        cout<<str1;
    }
}

