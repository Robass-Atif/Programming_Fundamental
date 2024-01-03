#include<iostream>
#include<fstream>
using namespace std;

main()
{
    string line="hello world";
    fstream file;
    file.open("names.txt",ios::out);
    file<<line;
    file.close();
}