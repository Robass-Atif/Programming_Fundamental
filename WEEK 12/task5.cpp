#include<fstream>
#include<iostream>
using namespace std;
main()
{
    char name;
    char letter;
    cout<< "enter letter:";
    cin >>letter;
    fstream file1;
    file1.open("names2.txt",ios::in);
    int count=0;
    while(!file1.eof())
    {
    file1>>name;
    if(name==letter)
    {
        count++;
    }
    
    
    }

    file1.close();
    cout <<count;
}